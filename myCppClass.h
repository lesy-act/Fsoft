#ifndef MYCPPCLASS_H
#define MYCPPCLASS_H
#include <QObject>

class MyCppClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int value READ getValue WRITE setValue NOTIFY valueChanged)
public:
    explicit MyCppClass(QObject *parent = 0);

    int getValue() const;
    void setValue(int value);
    Q_INVOKABLE void callFromInvokableMethod();

signals:
    void valueChanged();
    void somethingHasChanged();

public slots:
    void callFromSlotMethod();

private:
    int m_value;
};
#endif // MYCPPCLASS_H
