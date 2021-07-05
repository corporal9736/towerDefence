#ifndef COMPONENT_H
#define COMPONENT_H
#include <QObject>
#include <QDebug>
#include <QPointF>
#include <QString>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QHash>
#include <QGlobalStatic>
#include <QLabel>
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

/* #region class PictureFactor*/
class PictureFactor{
    public:
        PictureFactor()=default;
        ~PictureFactor()=default;
        static PictureFactor* instance();
        PicPointer getPic(QString path);
        QList<QString> getKeys();
    private:
        QHash<QString,PicPointer> data;
};
/* #endregion*/

class PicItem{
    //此处使用owner是为了避免与图形系统的parent混淆
    public:
        PicItem(const BaseCharacterPointer& owner);
        
        ~PicItem();
    private:
        BaseCharacterPointer owner;
        //QString没有继承QObject，不能作为QPointer实例化的对象
        QString path;
        GPixItemPointer pic;
        PosPointer pos;

};




class Move{

};

class Attack{

};

#endif // COMPONENT_H