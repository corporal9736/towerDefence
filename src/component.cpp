#include "include/component.h"

/* #region HP*/

HP::HP(qreal hp):QObject(),origHP(hp),crntHP(hp){
    qInfo()<<"[info] HP::HP(qreal hp) called";
}

HP::HP(const HP& another):QObject(),origHP(another.origHP),crntHP(another.crntHP){
    qInfo()<<"[info] HP::HP(const HP& another) called";
}

HP::HP(const QPointer<HP>& pointer):QObject(),origHP(pointer->origHP),crntHP(pointer->crntHP){
    qInfo()<<"[info] HP::HP(const QPointer<HP>& pointer) called";
}

HP& HP::operator=(const HP &another){
    if(this == &another)
        return *this;
    this->origHP = another.origHP;
    this->crntHP = another.crntHP;
    return *this;
}


void HP::change(const qreal num){
    this->crntHP += num;
}

qreal HP::get() const{
    return this->crntHP;
}

qreal HP::getMax() const{
    return this->origHP;
}

bool HP::isAlive() const{
    return (this->crntHP > 0);
}
/* #endregion */

/* #region PictureFactor*/

// QT提供的宏，保证全局只有一个PictureFactor对象，线程安全
Q_GLOBAL_STATIC(PictureFactor,picFactor)

PictureFactor* PictureFactor::instance(){
    return picFactor;
}

PicPointer PictureFactor::getPic(QString path){
    if(!data.contains(path)){
        PicPointer pic(new QPixmap(path));
        if(pic->isNull()) 
        {
            qDebug()<<"[debug] no picture found, please check the path "<<path;
            return nullptr;
        }
        data.insert(path,pic);
    }
    return data[path];
}

QList<QString> PictureFactor::getKeys(){
    return this->data.keys();
}
/* #endregion */

/* #region Picture*/

PicItem::PicItem(const BaseCharacterPointer& owner):
    owner(owner){
    qInfo()<<"[info] Picture::Picture(BaseCharacterPointer parent) called";
}



PicItem::~PicItem(){
    /* 这里不能delete parent，因为parent不归picItem管辖
     * path由于不是指针不用特别释放
     * 所以需要delete的是pic和pos
     */
    //delete pic.data();
    //delete pos.data();
}

/* #endregion */

