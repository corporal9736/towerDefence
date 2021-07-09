#ifndef DEFINE_H
#define DEFINE_H
#include <QObject>
#include <QDebug>
#include <QPointF>
#include <QString>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QHash>
#include <QGlobalStatic>
#include <QLabel>
#include <QTimer>
#include <QPointer>
#include <QSharedPointer>
/* #region class in component.h */
class HP;
class Picture;
class Move;
class Attack;

using HPPointer = QPointer<HP>;
using PicturePointer = QPointer<Picture>;
using MovePointer = QPointer<Move>;
using AttackPointer = QPointer<Attack>;
/* #endregion*/

/* #region class in character.h */
//class BaseCharacter;
class BaseAttacker;
class BaseDefender;

//using BaseCharacterPointer = QPointer<BaseCharacter>;
using BaseAttackerPointer = QPointer<BaseAttacker>;
using BaseDefenderPointer = QPointer<BaseDefender>;
/* #endregion*/

/* #region some alias for class */
//QString没有继承QObject，不能作为QPointer实例化的对象
using PosPointer = QPointer<QPointF>;
using PicPointer = QSharedPointer<QPixmap>;
using GPixItemPointer = QPointer<QGraphicsPixmapItem>;
using TimerPointer = QPointer<QTimer>;
/* #endregion*/

#endif // DEFINE_H