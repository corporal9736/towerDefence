#ifndef COMPONENT_H
#define COMPONENT_H

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

/* #region class PicItem*/
class Move;
class PicItem{
    //此处使用owner是为了避免与图形系统的parent混淆
    public:
    //TODO
        PicItem(BaseCharacter* const owner=nullptr);
        PicItem(const QString& path,const PosPointer& pos=nullptr,BaseCharacter* const owner=nullptr);
        PicItem(const PicItem& another);
        PosPointer getPos() const;
        PosPointer getCenter() const;
        ~PicItem();
    private:
        friend class Move;
        //使用裸指针指向parent及owner是更加合理的选择，这类对象不需要new、不需要引用计数，etc.
        BaseCharacter* owner;
        //QString没有继承QObject，不能作为QPointer实例化的对象
        QString picPath;
        GPixItemPointer pic;
        PosPointer pos;
        QGraphicsItem *parent;//?

};
/* #endregion */

/* #region class Move */
/*
 *这里将Move设计为PicItem的友元类，在初始化时首先判定owner的PicItem是否存在
 *若不存在则直接报错
 *简单来说，Move是PicItem的一个补充，有PicItem的不一定能运动（例如防御塔），
 *而能运动的一定有PicItem
 *一个对象类中包含了Move则代表可以移动，target指示了运动的目标，当前位置则从PicItem
 *中直接读取，timer指示了运动开始的事件，timer在初始化时就开始计时，或者可以考虑
 *设置全局时间，attacker在读取到一定的进程时间后出发。
 */
class Move{
    public:
        void onChanged(qreal newSpeed,PosPointer newTarget);
    private:
        BaseCharacter* owner;
        qreal speed;
        PosPointer target;
        TimerPointer timer;

};

/* #endregion */


class Attack{

};

#endif // COMPONENT_H