#ifndef CADDIE_SCENE_GLF_MENU_H
#define CADDIE_SCENE_GLF_MENU_H
#include "caddieGlfMessage.h"
#include "caddieMenuBase.h"
#include "caddieMenuOption.h"
#include "caddieMenuPage.h"
#include "types_caddie.h"

namespace caddie {

/**
 * @brief Golf scene menu
 */
#include "caddieGlfMessage.h"
#include "caddieMenuBase.h"
#include "caddieMenuOption.h"
#include "caddieMenuPage.h"
#include "types_caddie.h"

namespace caddie {

class StatsMenu : public MenuBase {
public:
    StatsMenu();
    virtual ~StatsMenu();
    virtual void OnChange();

    static void Action_Close(void* menu);

private:
    MenuActionOption mClose;
    MenuIntOption mShotCurrentFrame;
    MenuIntOption mShotStopFrame;
    MenuIntOption mShotBestFrame;
    MenuEnumOption mBallStopSurface;
    MenuBoolOption mHitFlag;
    MenuBoolOption mHitPole;
    MenuFloatOption mAvatarAngle;
    MenuFloatOption mBallSpeed;
    MenuFloatOption mBallLiveDist;
    MenuFloatOption mBallStopDist;
    MenuFloatOption mBallBestDist;
    MenuVec3Option mBallLivePos;
    MenuVec3Option mBallStopPos;
    MenuVec3Option mBallBestPos;
};

}

#endif
