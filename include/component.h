#ifndef COMPONENT_H
#define COMPONENT_H
#include <QObject>
#include <QDebug>
#include <QPointF>
#include <QString>
#include <QPixmap>
#include <QGraphicsPixmapItem>
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
        Picture(const BaseCharacterPointer& parent);
        
        ~Picture();
    private:
        BaseCharacterPointer parent;
        PathPointer path;
        PicPointer pix;
        PosPointer pos;


};

class Move{

};

class Attack{

};

#endif // COMPONENT_H