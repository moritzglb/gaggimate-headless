// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: GaggiMate

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_InitScreen
void ui_InitScreen_screen_init(void);
void ui_event_InitScreen(lv_event_t *e);
lv_obj_t *ui_InitScreen;
lv_obj_t *ui_InitScreen_Image2;
lv_obj_t *ui_InitScreen_mainLabel;
// CUSTOM VARIABLES

// SCREEN: ui_ProfileScreen
void ui_ProfileScreen_screen_init(void);
void ui_event_ProfileScreen(lv_event_t *e);
lv_obj_t *ui_ProfileScreen;
lv_obj_t *ui_ProfileScreen_dials;
void ui_event_ProfileScreen_ImgButton1(lv_event_t *e);
lv_obj_t *ui_ProfileScreen_ImgButton1;
lv_obj_t *ui_ProfileScreen_contentPanel;
lv_obj_t *ui_ProfileScreen_mainLabel;
lv_obj_t *ui_ProfileScreen_profileName;
lv_obj_t *ui_ProfileScreen_tempIcon;
lv_obj_t *ui_ProfileScreen_targetIcon;
lv_obj_t *ui_ProfileScreen_targetTemp2;
lv_obj_t *ui_ProfileScreen_targetDuration2;
lv_obj_t *ui_ProfileScreen_extendedContent;
lv_obj_t *ui_ProfileScreen_Chart1;
lv_obj_t *ui_ProfileScreen_simpleContent;
lv_obj_t *ui_ProfileScreen_phasesLabel;
lv_obj_t *ui_ProfileScreen_stepsLabel;
void ui_event_ProfileScreen_previousProfileBtn(lv_event_t *e);
lv_obj_t *ui_ProfileScreen_previousProfileBtn;
void ui_event_ProfileScreen_nextProfileBtn(lv_event_t *e);
lv_obj_t *ui_ProfileScreen_nextProfileBtn;
void ui_event_ProfileScreen_chooseButton(lv_event_t *e);
lv_obj_t *ui_ProfileScreen_chooseButton;
// CUSTOM VARIABLES
lv_obj_t *uic_ProfileScreen_dials_tempGauge;
lv_obj_t *uic_ProfileScreen_dials_tempTarget;
lv_obj_t *uic_ProfileScreen_dials_pressureGauge;
lv_obj_t *uic_ProfileScreen_dials_pressureTarget;
lv_obj_t *uic_ProfileScreen_dials_pressureText;
lv_obj_t *uic_ProfileScreen_dials_tempText;

// SCREEN: ui_MenuScreen
void ui_MenuScreen_screen_init(void);
lv_obj_t *ui_MenuScreen;
lv_obj_t *ui_MenuScreen_dials;
void ui_event_MenuScreen_standbyButton(lv_event_t *e);
lv_obj_t *ui_MenuScreen_standbyButton;
lv_obj_t *ui_MenuScreen_contentPanel1;
void ui_event_MenuScreen_btnBrew(lv_event_t *e);
lv_obj_t *ui_MenuScreen_btnBrew;
void ui_event_MenuScreen_btnSteam(lv_event_t *e);
lv_obj_t *ui_MenuScreen_btnSteam;
void ui_event_MenuScreen_waterBtn(lv_event_t *e);
lv_obj_t *ui_MenuScreen_waterBtn;
void ui_event_MenuScreen_grindBtn(lv_event_t *e);
lv_obj_t *ui_MenuScreen_grindBtn;
// CUSTOM VARIABLES
lv_obj_t *uic_MenuScreen_dials_tempGauge;
lv_obj_t *uic_MenuScreen_dials_tempTarget;
lv_obj_t *uic_MenuScreen_dials_pressureGauge;
lv_obj_t *uic_MenuScreen_dials_pressureTarget;
lv_obj_t *uic_MenuScreen_dials_pressureText;
lv_obj_t *uic_MenuScreen_dials_tempText;

// SCREEN: ui_BrewScreen
void ui_BrewScreen_screen_init(void);
void ui_event_BrewScreen(lv_event_t *e);
lv_obj_t *ui_BrewScreen;
lv_obj_t *ui_BrewScreen_dials;
void ui_event_BrewScreen_ImgButton5(lv_event_t *e);
lv_obj_t *ui_BrewScreen_ImgButton5;
lv_obj_t *ui_BrewScreen_contentPanel4;
lv_obj_t *ui_BrewScreen_mainLabel3;
void ui_event_BrewScreen_startButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_startButton;
lv_obj_t *ui_BrewScreen_controlContainer;
lv_obj_t *ui_BrewScreen_modeSwitch;
void ui_event_BrewScreen_timedButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_timedButton;
void ui_event_BrewScreen_volumetricButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_volumetricButton;
lv_obj_t *ui_BrewScreen_profileInfo;
lv_obj_t *ui_BrewScreen_Label1;
lv_obj_t *ui_BrewScreen_Container3;
lv_obj_t *ui_BrewScreen_profileName;
void ui_event_BrewScreen_profileSelectBtn(lv_event_t *e);
lv_obj_t *ui_BrewScreen_profileSelectBtn;
lv_obj_t *ui_BrewScreen_adjustments;
lv_obj_t *ui_BrewScreen_tempContainer;
lv_obj_t *ui_BrewScreen_targetTemp;
void ui_event_BrewScreen_downTempButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_downTempButton;
void ui_event_BrewScreen_upTempButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_upTempButton;
lv_obj_t *ui_BrewScreen_Image5;
lv_obj_t *ui_BrewScreen_targetContainer;
lv_obj_t *ui_BrewScreen_targetDuration;
void ui_event_BrewScreen_upDurationButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_upDurationButton;
void ui_event_BrewScreen_downDurationButton(lv_event_t *e);
lv_obj_t *ui_BrewScreen_downDurationButton;
lv_obj_t *ui_BrewScreen_Image4;
// CUSTOM VARIABLES
lv_obj_t *uic_BrewScreen_dials_tempGauge;
lv_obj_t *uic_BrewScreen_dials_tempTarget;
lv_obj_t *uic_BrewScreen_dials_pressureGauge;
lv_obj_t *uic_BrewScreen_dials_pressureTarget;
lv_obj_t *uic_BrewScreen_dials_pressureText;
lv_obj_t *uic_BrewScreen_dials_tempText;

// SCREEN: ui_SimpleProcessScreen
void ui_SimpleProcessScreen_screen_init(void);
void ui_event_SimpleProcessScreen(lv_event_t *e);
lv_obj_t *ui_SimpleProcessScreen;
lv_obj_t *ui_SimpleProcessScreen_dials;
void ui_event_SimpleProcessScreen_ImgButton6(lv_event_t *e);
lv_obj_t *ui_SimpleProcessScreen_ImgButton6;
lv_obj_t *ui_SimpleProcessScreen_contentPanel5;
lv_obj_t *ui_SimpleProcessScreen_mainLabel5;
void ui_event_SimpleProcessScreen_goButton(lv_event_t *e);
lv_obj_t *ui_SimpleProcessScreen_goButton;
void ui_event_SimpleProcessScreen_downTempButton(lv_event_t *e);
lv_obj_t *ui_SimpleProcessScreen_downTempButton;
void ui_event_SimpleProcessScreen_upTempButton(lv_event_t *e);
lv_obj_t *ui_SimpleProcessScreen_upTempButton;
lv_obj_t *ui_SimpleProcessScreen_targetTemp;
lv_obj_t *ui_SimpleProcessScreen_Image9;
// CUSTOM VARIABLES
lv_obj_t *uic_SimpleProcessScreen_dials_tempGauge;
lv_obj_t *uic_SimpleProcessScreen_dials_tempTarget;
lv_obj_t *uic_SimpleProcessScreen_dials_pressureGauge;
lv_obj_t *uic_SimpleProcessScreen_dials_pressureTarget;
lv_obj_t *uic_SimpleProcessScreen_dials_pressureText;
lv_obj_t *uic_SimpleProcessScreen_dials_tempText;

// SCREEN: ui_StandbyScreen
void ui_StandbyScreen_screen_init(void);
void ui_event_StandbyScreen(lv_event_t *e);
lv_obj_t *ui_StandbyScreen;
lv_obj_t *ui_StandbyScreen_Image1;
lv_obj_t *ui_StandbyScreen_time;
lv_obj_t *ui_StandbyScreen_Container1;
lv_obj_t *ui_StandbyScreen_wifiIcon;
lv_obj_t *ui_StandbyScreen_bluetoothIcon;
lv_obj_t *ui_StandbyScreen_updateIcon;
lv_obj_t *ui_StandbyScreen_Image3;
// CUSTOM VARIABLES

// SCREEN: ui_StatusScreen
void ui_StatusScreen_screen_init(void);
void ui_event_StatusScreen(lv_event_t *e);
lv_obj_t *ui_StatusScreen;
lv_obj_t *ui_StatusScreen_dials;
void ui_event_StatusScreen_ImgButton8(lv_event_t *e);
lv_obj_t *ui_StatusScreen_ImgButton8;
lv_obj_t *ui_StatusScreen_contentPanel2;
lv_obj_t *ui_StatusScreen_targetDuration;
lv_obj_t *ui_StatusScreen_targetTemp;
void ui_event_StatusScreen_pauseButton(lv_event_t *e);
lv_obj_t *ui_StatusScreen_pauseButton;
lv_obj_t *ui_StatusScreen_Image7;
lv_obj_t *ui_StatusScreen_Image8;
lv_obj_t *ui_StatusScreen_currentDuration;
lv_obj_t *ui_StatusScreen_stepLabel;
lv_obj_t *ui_StatusScreen_phaseLabel;
lv_obj_t *ui_StatusScreen_barContainer;
lv_obj_t *ui_StatusScreen_brewBar;
lv_obj_t *ui_StatusScreen_labelContainer;
lv_obj_t *ui_StatusScreen_brewLabel;
lv_obj_t *ui_StatusScreen_brewVolume;
// CUSTOM VARIABLES
lv_obj_t *uic_StatusScreen_dials_tempGauge;
lv_obj_t *uic_StatusScreen_dials_tempTarget;
lv_obj_t *uic_StatusScreen_dials_pressureGauge;
lv_obj_t *uic_StatusScreen_dials_pressureTarget;
lv_obj_t *uic_StatusScreen_dials_pressureText;
lv_obj_t *uic_StatusScreen_dials_tempText;

// SCREEN: ui_GrindScreen
void ui_GrindScreen_screen_init(void);
void ui_event_GrindScreen(lv_event_t *e);
lv_obj_t *ui_GrindScreen;
lv_obj_t *ui_GrindScreen_dials;
void ui_event_GrindScreen_ImgButton2(lv_event_t *e);
lv_obj_t *ui_GrindScreen_ImgButton2;
lv_obj_t *ui_GrindScreen_contentPanel7;
lv_obj_t *ui_GrindScreen_mainLabel7;
void ui_event_GrindScreen_startButton(lv_event_t *e);
lv_obj_t *ui_GrindScreen_startButton;
lv_obj_t *ui_GrindScreen_targetContainer;
lv_obj_t *ui_GrindScreen_targetDuration;
void ui_event_GrindScreen_upDurationButton(lv_event_t *e);
lv_obj_t *ui_GrindScreen_upDurationButton;
void ui_event_GrindScreen_downDurationButton(lv_event_t *e);
lv_obj_t *ui_GrindScreen_downDurationButton;
lv_obj_t *ui_GrindScreen_targetSymbol;
lv_obj_t *ui_GrindScreen_modeSwitch;
void ui_event_GrindScreen_timedButton(lv_event_t *e);
lv_obj_t *ui_GrindScreen_timedButton;
void ui_event_GrindScreen_volumetricButton(lv_event_t *e);
lv_obj_t *ui_GrindScreen_volumetricButton;
// CUSTOM VARIABLES
lv_obj_t *uic_GrindScreen_dials_tempGauge;
lv_obj_t *uic_GrindScreen_dials_tempTarget;
lv_obj_t *uic_GrindScreen_dials_pressureGauge;
lv_obj_t *uic_GrindScreen_dials_pressureTarget;
lv_obj_t *uic_GrindScreen_dials_pressureText;
lv_obj_t *uic_GrindScreen_dials_tempText;

// EVENTS
lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS
const lv_img_dsc_t *ui_imgset_459451241[1] = {&ui_img_1829139226};
const lv_img_dsc_t *ui_imgset_849879536[1] = {&ui_img_98036921};
const lv_img_dsc_t *ui_imgset_1382826243[1] = {&ui_img_944513416};
const lv_img_dsc_t *ui_imgset_434888472[1] = {&ui_img_295763949};
const lv_img_dsc_t *ui_imgset_1091184723[1] = {&ui_img_1091371356};
const lv_img_dsc_t *ui_imgset_960046369[1] = {&ui_img_631115820};
const lv_img_dsc_t *ui_imgset_1525119997[1] = {&ui_img_360122106};
const lv_img_dsc_t *ui_imgset_1812359778[1] = {&ui_img_363557387};
const lv_img_dsc_t *ui_imgset_359218129[1] = {&ui_img_1424216268};
const lv_img_dsc_t *ui_imgset_403384789[1] = {&ui_img_834125362};
const lv_img_dsc_t *ui_imgset_359534444[1] = {&ui_img_979979123};
const lv_img_dsc_t *ui_imgset_794559649[1] = {&ui_img_1456692430};
const lv_img_dsc_t *ui_imgset_1612577215[1] = {&ui_img_445946954};
const lv_img_dsc_t *ui_imgset_1166435085[1] = {&ui_img_390988422};
const lv_img_dsc_t *ui_imgset_1010926578[1] = {&ui_img_2044104741};
const lv_img_dsc_t *ui_imgset_1155213431[1] = {&ui_img_545340440};
const lv_img_dsc_t *ui_imgset_524469952[2] = {&ui_img_1765671371, &ui_img_207915003};
const lv_img_dsc_t *ui_imgset_648927478[1] = {&ui_img_340148213};
const lv_img_dsc_t *ui_imgset_616600488[1] = {&ui_img_1220767159};
const lv_img_dsc_t *ui_imgset_690294202[1] = {&ui_img_1732953241};
const lv_img_dsc_t *ui_imgset_1252186405[1] = {&ui_img_1951499226};
const lv_img_dsc_t *ui_imgset_2074400918[1] = {&ui_img_364513079};
const lv_img_dsc_t *ui_imgset_506671969[2] = {&ui_img_691326438, &ui_img_783005998};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_InitScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_SCREEN_LOADED) {
        onLoadStarted(e);
    }
}

void ui_event_ProfileScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        onMenuClick(e);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        onNextProfile(e);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        onPreviousProfile(e);
    }
}

void ui_event_ProfileScreen_ImgButton1(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onMenuClick(e);
    }
}

void ui_event_ProfileScreen_previousProfileBtn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onPreviousProfile(e);
    }
}

void ui_event_ProfileScreen_nextProfileBtn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onNextProfile(e);
    }
}

void ui_event_ProfileScreen_chooseButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onProfileLoad(e);
    }
}

void ui_event_MenuScreen_standbyButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onStandby(e);
    }
}

void ui_event_MenuScreen_btnBrew(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewScreen(e);
    }
}

void ui_event_MenuScreen_btnSteam(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onSteamScreen(e);
    }
}

void ui_event_MenuScreen_waterBtn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onWaterScreen(e);
    }
}

void ui_event_MenuScreen_grindBtn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onGrindScreen(e);
    }
}

void ui_event_BrewScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        onMenuClick(e);
    }
}

void ui_event_BrewScreen_ImgButton5(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onMenuClick(e);
    }
}

void ui_event_BrewScreen_startButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewStart(e);
    }
    if (event_code == LV_EVENT_LONG_PRESSED) {
        onFlush(e);
    }
}

void ui_event_BrewScreen_timedButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onTimedClick(e);
    }
}

void ui_event_BrewScreen_volumetricButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onVolumetricClick(e);
    }
}

void ui_event_BrewScreen_profileSelectBtn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onProfileSelect(e);
    }
}

void ui_event_BrewScreen_downTempButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewTempLower(e);
    }
}

void ui_event_BrewScreen_upTempButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewTempRaise(e);
    }
}

void ui_event_BrewScreen_upDurationButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewTimeRaise(e);
    }
}

void ui_event_BrewScreen_downDurationButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewTimeLower(e);
    }
}

void ui_event_SimpleProcessScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        onMenuClick(e);
    }
}

void ui_event_SimpleProcessScreen_ImgButton6(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onMenuClick(e);
    }
}

void ui_event_SimpleProcessScreen_goButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onSimpleProcessToggle(e);
    }
}

void ui_event_SimpleProcessScreen_downTempButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onSteamTempLower(e);
    }
}

void ui_event_SimpleProcessScreen_upTempButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onSteamTempRaise(e);
    }
}

void ui_event_StandbyScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onWakeup(e);
    }
}

void ui_event_StatusScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        onMenuClick(e);
    }
}

void ui_event_StatusScreen_ImgButton8(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onMenuClick(e);
    }
}

void ui_event_StatusScreen_pauseButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onBrewCancel(e);
        (e);
    }
}

void ui_event_GrindScreen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        onMenuClick(e);
    }
}

void ui_event_GrindScreen_ImgButton2(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onMenuClick(e);
    }
}

void ui_event_GrindScreen_startButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onGrindToggle(e);
    }
}

void ui_event_GrindScreen_upDurationButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onGrindTimeRaise(e);
    }
}

void ui_event_GrindScreen_downDurationButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onGrindTimeLower(e);
    }
}

void ui_event_GrindScreen_timedButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onTimedClick(e);
    }
}

void ui_event_GrindScreen_volumetricButton(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        onVolumetricClick(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void) {
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme =
        lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_InitScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_InitScreen);
}
