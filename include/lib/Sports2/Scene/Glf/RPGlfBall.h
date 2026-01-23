#ifndef RP_SPORTS_GLF_BALL_H
#define RP_SPORTS_GLF_BALL_H
#include "RPGlfCollisionModel.h"
#include "RPGlfMapObjBase.h"
#include "RPGolSwing.h"
#include "types_sp2.h"

#include <nw4r/math/math_types.h>

class RPGlfBall : public RPGlfMapObjBase {
public:
    RPGlfBall();
    virtual ~RPGlfBall();

    void Calc(u32 frame);

    u32 GetLifetime() const { return mLifetime; }
    void SetLifetime(u32 time) { mLifetime = time; }

    bool IsMoving() const { return mIsMoving; }
    void SetMoving(bool move) { mIsMoving = move; }

    bool IsHitFlag() const { return mHitFlag; }
    bool IsHitPole() const { return mHitPole; }

    RPGlfCollisionModel::ECollision GetCollision() const {
        return (RPGlfCollisionModel::ECollision)mCollision;
    }
    void SetCollision(RPGlfCollisionModel::ECollision col) { mCollision = col; }

    RPGlfCollisionModel::ECollision GetCollisionNoAir() const {
        return (RPGlfCollisionModel::ECollision)mCollisionNoAir;
    }
    void SetCollisionNoAir(RPGlfCollisionModel::ECollision col) {
        mCollisionNoAir = col;
    }

    bool IsHoleOut() const;
    f32 GetDistFromPin() const;
    bool IsGreenOrCupAttr() const;

    math::VEC3* GetBallPos() const { return mpPos; }
    const math::VEC3& GetBallSpeed() const { return mVelocity; }
    const math::VEC3& GetBallStopPos() const { return mStopPos; }
    const math::VEC3& GetBallBestPos() const { return mBestPos; }
    f32 GetBallBestPosDist() const { return mBestPosDist; }
    int GetHoleOutFrame() const { return mHoleOutFrame; }
    int GetStopFrame() const { return mStopFrame; }
    int GetBestFrame() const { return mBestFrame; }
    u16 GetSwing() const { return mSwing; }

private:
    math::VEC3 *mpPos; // at 0x4c, pointer to ball position
    char UNK_0x50[0x54 - 0x50];
    u32 mLifetime; // at 0x54, current frame
    char UNK_0x58[0x60 - 0x58];
    bool mIsMoving; // at 0x60
    bool _61;       // at 0x61
    bool mHitFlag;  // at 0x62
    bool mHitPole;  // at 0x63
    char UNK_0x64[0x88 - 0x64];
    math::VEC3 mVelocity; // at 0x88
    char UNK_0x94[0x114 - 0x94];
    math::VEC3 mSimStopPos; // at 0x114
    math::VEC3 mSimBestPos; // at 0x120
    char UNK_0x12C[0x144 - 0x12C];
    int mSimHoleOutFrame; // at 0x144
    int mSimStopFrame;    // at 0x148
    int mSimBestFrame;   // at 0x14C
    char UNK_0x150[0x16C - 0x150];
    RPGolSwing *mSwing;
    char UNK_0x16E[0xB4 - 0x16E];
    u16 mCollision;      // at 0xB4, collision
    u16 mCollisionNoAir; // at 0xB6, collision (no air)
    char UNK_0xB8[0x1E0 - 0xB8];
};

#endif
