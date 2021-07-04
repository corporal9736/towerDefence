#ifndef DEFINE_H
#define DEFINE_H
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
class BaseCharacter;
class BaseAttacker;
class BaseDefender;

using BaseCharacterPointer = QPointer<BaseCharacter>;
using BaseAttackerPointer = QPointer<BaseAttacker>;
using BaseDefenderPointer = QPointer<BaseDefender>;
/* #endregion*/

/* #region some alias for class */
class QPointF;
class QPixmap;
class QString;
using PosPointer = QPointer<QPointF>;
using PicPointer = QSharedPointer<QPixmap>;
using PathPointer = QPointer<QString>;
/* #endregion*/

#endif // DEFINE_H