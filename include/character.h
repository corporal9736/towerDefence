#ifndef CHARACTER_H
#define CHARACTER_H
#include "component.h"
#include "define.h"


/**
 *@brief 空类，为了保证接口的一致性而存在
 */
class BaseCharacter{
        
};

class BaseAttacter:BaseCharacter{
    public:


    private:
    HPPointer hp;
    PosPointer pos;
    MovePointer move;
    PicturePointer pic;
};

class BaseDefender:BaseCharacter{
    public:

    private:
    AttackPointer attack;
    PicturePointer pic;
};
#endif // CHARACTER_H