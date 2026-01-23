#include "caddieStatsMenu.h"

StatsMenu::StatsMenu()
    : MenuBase("Stats", 100.0f, 50.0f),
      mClose("Close"),
      mShotCurrentFrame("current frame"),
      mShotBestFrame("best frame"),
      mShotStopFrame("stop frame"),
      mBallStopSurface("stop surface"),
      mHitFlag("hit flag?"),
      mHitPole("hit pole?"),
      mAvatarAngle("angle"),
      mBallSpeed("speed"),
      mBallLiveDist("current distance"),
      mBallStopDist("stop distance"),
      mBallBestDist("best distance"),
      mBallLivePos("current position"),
      mBallStopPos("stop position"),
      mBallBestPos("best position") 
    {

    MenuPage& root = GetRootPage();
    root.AddOption(&mShotCurrentFrame);
    root.AddOption(&mShotStopFrame);
    root.AddOption(&mShotBestFrame);
    root.AddOption(&mBallStopSurface);
    root.AddOption(&mHitFlag);
    root.AddOption(&mHitPole);
    root.AddOption(&mAvatarAngle);
    root.AddOption(&mBallSpeed);
    root.AddOption(&mBallLiveDist);
    root.AddOption(&mBallStopDist);
    root.AddOption(&mBallBestDist);
    root.AddOption(&mBallLivePos);
    root.AddOption(&mBallStopPos);
    root.AddOption(&mBallBestPos);
    root.AddOption(&mClose);
}

static void Action_Close(void* menu) {
    
}