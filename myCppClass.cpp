#include "myCppClass.h"
#include <QDebug>

MyCppClass::MyCppClass(QObject *parent) :
    QObject(parent)
{
    m_value = 0;
}

int MyCppClass::getValue() const
{
    qDebug() << "MyCppClass::getValue";
    return m_value;
}

void MyCppClass::setValue(int newValue)
{
    qDebug() << "MyCppClass::setValue";
    if(newValue != m_value){
        m_value = newValue;
        emit valueChanged();
    }
    emit somethingHasChanged();
}

void MyCppClass::callFromInvokableMethod()
{
    qDebug() << "MyCppClass::callFromInvokableMethod";
    setValue(m_value - 5);
}

void MyCppClass::callFromSlotMethod()
{
    qDebug() << "MyCppClass::callFromSlotMethod";
    setValue(m_value + 5);
}
