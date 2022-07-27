#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "GPIO.h"
#include<QQmlContext>
#include "myCppClass.h"

#include "Person.h"
#include "Student.h"
#include "Employee.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);
    GPIO myPin;
//    MyCppClass myClass;
//    myClass.setValue(100);
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    engine.rootContext()->setContextProperty("xx",&myPin);
//    engine.rootContext()->setContextProperty("myObjectFromCpp",&myClass);
    qmlRegisterType<MyCppClass>("com.cong.libs", 1, 0, "MyCppClassQML");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);


//    Person *p1 = new Student(22,1,"Sy");
//    Person *p2 = new Employee(20,1,300);
//    p1->showInfo();
//    p2->showInfo();

    engine.load(url);

    return app.exec();
}
