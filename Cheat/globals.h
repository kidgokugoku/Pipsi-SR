#pragma once
#include <windows.h>

extern WNDPROC lpWndProc;
extern HWND lpWindow;

struct OPTIONS {
  bool bMenu;
  unsigned int dwMenuKey;

  bool bNoclip;
  unsigned int dwNoclipKey;
  float flNoclipSpeed;

  bool bEsp;
  float flEspDistance;
  bool bEspMonster;
  bool bEspNpc;
  bool bEspProp;
  bool bEspMission;

  bool bDumpEnemies;

  bool bPeeking;

  bool bFov;
  float flFov;

  bool bBattleSpeed;
  float flBattleDarkTeamSpeed;
  float flBattleLightTeamSpeed;

  bool bAutoTalk;
  bool bAutoTalkDisableDelay;
  bool bAutoTalkSkipScenes;

  bool bQuestTeleport;
  unsigned int dwQuestTeleportKey;

  bool bChestTeleport;
  unsigned int dwChestTeleportKey;

  bool bSkipCutscene;

  bool bFpsIndicator;
  int iFpsValue;

  bool bUnlockAutoBattle;

  OPTIONS()
      : bMenu(FALSE),
        dwMenuKey('0'),
        bNoclip(TRUE),
        dwNoclipKey('5'),
        flNoclipSpeed(10.f),
        bEsp(TRUE),
        flEspDistance(50.f),
        bEspMonster(FALSE),
        bEspNpc(FALSE),
        bEspProp(TRUE),
        bEspMission(TRUE),
        bDumpEnemies(TRUE),
        bPeeking(FALSE),
        bFov(FALSE),
        flFov(100.f),
        bBattleSpeed(TRUE),
        flBattleDarkTeamSpeed(100.f),
        flBattleLightTeamSpeed(3.f),
        bAutoTalk(TRUE),
        bAutoTalkDisableDelay(TRUE),
        bAutoTalkSkipScenes(TRUE),
        bQuestTeleport(TRUE),
        dwQuestTeleportKey('2'),
        bChestTeleport(TRUE),
        dwChestTeleportKey('1'),
        bSkipCutscene(TRUE),
        bFpsIndicator(TRUE),
        iFpsValue(59) {}
};

extern OPTIONS Options;