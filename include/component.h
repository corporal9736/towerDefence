#ifndef COMPONENT_H
#define COMPONENT_H
#include <QObject>
#include <QDebug>
#include <QPointF>
#include <QPointer>
#include "define.h"

class BaseCharacter;

/* #region class HP*/
class HP:public QObject{
    Q_OBJECT
    public:
        HP(qreal hp);
        HP(const HP& another);
        HP(const QPointer<HP>& pointer);
        ~HP()=default;

        HP& operator=(const HP& another);
        void change(const qreal num);
        qreal get() const;
        qreal getMax() const;
        bool isAlive() const;

    private:
        qreal origHP;
        qreal crntHP;
};
/* #endregion*/



class Picture{
    public:

    private:
        BaseCharacter* parent;


};

class Move{

};

class Attack{

};

#endif // COMPONENT_H