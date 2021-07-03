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
