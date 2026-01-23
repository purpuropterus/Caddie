#include "types.h"

class RPGlfSwing
{
public:
    f32 getPower() const { return mPower; }
    f32 getRedlineAmount() const { return mRedlineAmount; }

private:
    char UNK_0x0[0xA0 - 0x0];
    f32 mPower;
    char UNK_0xA4[0xC0 - 0xA4];
    f32 mRedlineAmount;
    char UNK_0xC4[0xE5 - 0xC4];
}