#ifndef DEFINE_H
#define DEFINE_H
#include <QPointer>
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
using PosPointer = QPointer<QPointF>;
/* #endregion*/

#endif // DEFINE_H