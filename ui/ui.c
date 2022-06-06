// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: test_lvgl

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_configPartyScreen1;
lv_obj_t * ui_textConfigScreen1;
lv_obj_t * ui_QuitProgramScreen1;
lv_obj_t * ui_textQuitScreen1;
lv_obj_t * ui_allGamesOnUrBoardImg;
lv_obj_t * ui_installGameScreen1;
lv_obj_t * ui_textInstallScreen1;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_startGameScreen2;
lv_obj_t * ui_textStartGameScreen2;
lv_obj_t * ui_choiceGameDropScreen2;
lv_obj_t * ui_textNbJoueursScreen2;
lv_obj_t * ui_nbJoueursRollerScreen2;
lv_obj_t * ui_Screen3;
lv_obj_t * ui_partyScreen3;
lv_obj_t * ui_getPositionPieceScreen3;
lv_obj_t * ui_quitGameScreen3;
lv_obj_t * ui_textQuitPartyScreen3;
lv_obj_t * ui_Screen4;
lv_obj_t * ui_textQuitPartyScreen4;
lv_obj_t * ui_buttonMenuScreen4;
lv_obj_t * ui_textMenuScreen4;
lv_obj_t * ui_buttonGoGameScreen4;
lv_obj_t * ui_textPartyScreen4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_configPartyScreen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
static void ui_event_QuitProgramScreen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        quitProgram(e);
    }
}
static void ui_event_installGameScreen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_startGameScreen2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
    if(event == LV_EVENT_CLICKED) {
        startGame(e);
    }
}
static void ui_event_quitGameScreen3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
static void ui_event_buttonMenuScreen4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_textMenuScreen4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_buttonGoGameScreen4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

    // ui_configPartyScreen1

    ui_configPartyScreen1 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_configPartyScreen1, 200);
    lv_obj_set_height(ui_configPartyScreen1, 50);

    lv_obj_set_x(ui_configPartyScreen1, -114);
    lv_obj_set_y(ui_configPartyScreen1, 38);

    lv_obj_set_align(ui_configPartyScreen1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_configPartyScreen1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_configPartyScreen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_configPartyScreen1, ui_event_configPartyScreen1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_letter_space(ui_configPartyScreen1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_configPartyScreen1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_configPartyScreen1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_configPartyScreen1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_configPartyScreen1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_textConfigScreen1

    ui_textConfigScreen1 = lv_label_create(ui_configPartyScreen1);

    lv_obj_set_width(ui_textConfigScreen1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textConfigScreen1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textConfigScreen1, 0);
    lv_obj_set_y(ui_textConfigScreen1, 0);

    lv_obj_set_align(ui_textConfigScreen1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textConfigScreen1, "Configurer une partie");

    // ui_QuitProgramScreen1

    ui_QuitProgramScreen1 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_QuitProgramScreen1, 187);
    lv_obj_set_height(ui_QuitProgramScreen1, 46);

    lv_obj_set_x(ui_QuitProgramScreen1, 4);
    lv_obj_set_y(ui_QuitProgramScreen1, 115);

    lv_obj_set_align(ui_QuitProgramScreen1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_QuitProgramScreen1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_QuitProgramScreen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_QuitProgramScreen1, ui_event_QuitProgramScreen1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_letter_space(ui_QuitProgramScreen1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_QuitProgramScreen1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_QuitProgramScreen1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_QuitProgramScreen1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_QuitProgramScreen1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_textQuitScreen1

    ui_textQuitScreen1 = lv_label_create(ui_QuitProgramScreen1);

    lv_obj_set_width(ui_textQuitScreen1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textQuitScreen1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textQuitScreen1, 0);
    lv_obj_set_y(ui_textQuitScreen1, 0);

    lv_obj_set_align(ui_textQuitScreen1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textQuitScreen1, "Quitter");

    // ui_allGamesOnUrBoardImg

    ui_allGamesOnUrBoardImg = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_allGamesOnUrBoardImg, &ui_img_1760572067);

    lv_obj_set_width(ui_allGamesOnUrBoardImg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_allGamesOnUrBoardImg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_allGamesOnUrBoardImg, 18);
    lv_obj_set_y(ui_allGamesOnUrBoardImg, -81);

    lv_obj_set_align(ui_allGamesOnUrBoardImg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_allGamesOnUrBoardImg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_allGamesOnUrBoardImg, LV_OBJ_FLAG_SCROLLABLE);

    // ui_installGameScreen1

    ui_installGameScreen1 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_installGameScreen1, 171);
    lv_obj_set_height(ui_installGameScreen1, 50);

    lv_obj_set_x(ui_installGameScreen1, 110);
    lv_obj_set_y(ui_installGameScreen1, 37);

    lv_obj_set_align(ui_installGameScreen1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_installGameScreen1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_installGameScreen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_installGameScreen1, ui_event_installGameScreen1, LV_EVENT_ALL, NULL);

    // ui_textInstallScreen1

    ui_textInstallScreen1 = lv_label_create(ui_installGameScreen1);

    lv_obj_set_width(ui_textInstallScreen1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textInstallScreen1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textInstallScreen1, 0);
    lv_obj_set_y(ui_textInstallScreen1, 0);

    lv_obj_set_align(ui_textInstallScreen1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textInstallScreen1, "Installer un jeu");

    lv_obj_set_style_text_font(ui_textInstallScreen1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{

    // ui_Screen2

    ui_Screen2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

    // ui_startGameScreen2

    ui_startGameScreen2 = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_startGameScreen2, 249);
    lv_obj_set_height(ui_startGameScreen2, 50);

    lv_obj_set_x(ui_startGameScreen2, 9);
    lv_obj_set_y(ui_startGameScreen2, 93);

    lv_obj_set_align(ui_startGameScreen2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_startGameScreen2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_startGameScreen2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_startGameScreen2, ui_event_startGameScreen2, LV_EVENT_ALL, NULL);

    // ui_textStartGameScreen2

    ui_textStartGameScreen2 = lv_label_create(ui_startGameScreen2);

    lv_obj_set_width(ui_textStartGameScreen2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textStartGameScreen2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textStartGameScreen2, 0);
    lv_obj_set_y(ui_textStartGameScreen2, 0);

    lv_obj_set_align(ui_textStartGameScreen2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textStartGameScreen2, "Lancer la partie");

    // ui_choiceGameDropScreen2

    ui_choiceGameDropScreen2 = lv_dropdown_create(ui_Screen2);
    lv_dropdown_set_options(ui_choiceGameDropScreen2, "Demonstration\nEchecs\nDame");
    lv_dropdown_set_text(ui_choiceGameDropScreen2, "Choix du jeu");

    lv_obj_set_width(ui_choiceGameDropScreen2, 270);
    lv_obj_set_height(ui_choiceGameDropScreen2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_choiceGameDropScreen2, 10);
    lv_obj_set_y(ui_choiceGameDropScreen2, 10);

    lv_obj_set_align(ui_choiceGameDropScreen2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_choiceGameDropScreen2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    // ui_textNbJoueursScreen2

    ui_textNbJoueursScreen2 = lv_label_create(ui_Screen2);

    lv_obj_set_width(ui_textNbJoueursScreen2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textNbJoueursScreen2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textNbJoueursScreen2, -65);
    lv_obj_set_y(ui_textNbJoueursScreen2, -84);

    lv_obj_set_align(ui_textNbJoueursScreen2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textNbJoueursScreen2, "Nombre de joueurs");

    lv_obj_set_style_text_font(ui_textNbJoueursScreen2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_nbJoueursRollerScreen2

    ui_nbJoueursRollerScreen2 = lv_roller_create(ui_Screen2);
    lv_roller_set_options(ui_nbJoueursRollerScreen2, "1\n2\n3\n4\n5 ou +", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_height(ui_nbJoueursRollerScreen2, 100);
    lv_obj_set_width(ui_nbJoueursRollerScreen2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_nbJoueursRollerScreen2, 111);
    lv_obj_set_y(ui_nbJoueursRollerScreen2, -85);

    lv_obj_set_align(ui_nbJoueursRollerScreen2, LV_ALIGN_CENTER);

}
void ui_Screen3_screen_init(void)
{

    // ui_Screen3

    ui_Screen3 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);

    // ui_partyScreen3

    ui_partyScreen3 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_partyScreen3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_partyScreen3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_partyScreen3, 5);
    lv_obj_set_y(ui_partyScreen3, -80);

    lv_obj_set_align(ui_partyScreen3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_partyScreen3, "Partie en cours");

    lv_obj_set_style_text_font(ui_partyScreen3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_getPositionPieceScreen3

    ui_getPositionPieceScreen3 = lv_textarea_create(ui_Screen3);

    lv_obj_set_width(ui_getPositionPieceScreen3, 362);
    lv_obj_set_height(ui_getPositionPieceScreen3, 79);

    lv_obj_set_x(ui_getPositionPieceScreen3, 10);
    lv_obj_set_y(ui_getPositionPieceScreen3, 7);

    lv_obj_set_align(ui_getPositionPieceScreen3, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_getPositionPieceScreen3, NULL);
    else lv_textarea_set_accepted_chars(ui_getPositionPieceScreen3, "");

    lv_textarea_set_text(ui_getPositionPieceScreen3, "");
    lv_textarea_set_placeholder_text(ui_getPositionPieceScreen3, "Affichage de la position de la piece");

    lv_obj_set_style_text_font(ui_getPositionPieceScreen3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_quitGameScreen3

    ui_quitGameScreen3 = lv_btn_create(ui_Screen3);

    lv_obj_set_width(ui_quitGameScreen3, 175);
    lv_obj_set_height(ui_quitGameScreen3, 50);

    lv_obj_set_x(ui_quitGameScreen3, 3);
    lv_obj_set_y(ui_quitGameScreen3, 98);

    lv_obj_set_align(ui_quitGameScreen3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_quitGameScreen3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_quitGameScreen3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_quitGameScreen3, ui_event_quitGameScreen3, LV_EVENT_ALL, NULL);

    // ui_textQuitPartyScreen3

    ui_textQuitPartyScreen3 = lv_label_create(ui_quitGameScreen3);

    lv_obj_set_width(ui_textQuitPartyScreen3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textQuitPartyScreen3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textQuitPartyScreen3, 0);
    lv_obj_set_y(ui_textQuitPartyScreen3, 0);

    lv_obj_set_align(ui_textQuitPartyScreen3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textQuitPartyScreen3, "Quitter la partie");

}
void ui_Screen4_screen_init(void)
{

    // ui_Screen4

    ui_Screen4 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE);

    // ui_textQuitPartyScreen4

    ui_textQuitPartyScreen4 = lv_label_create(ui_Screen4);

    lv_obj_set_width(ui_textQuitPartyScreen4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textQuitPartyScreen4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textQuitPartyScreen4, 6);
    lv_obj_set_y(ui_textQuitPartyScreen4, -35);

    lv_obj_set_align(ui_textQuitPartyScreen4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textQuitPartyScreen4, "Voulez vous vraiment \n    quitter la partie ?");

    lv_obj_set_style_text_align(ui_textQuitPartyScreen4, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_textQuitPartyScreen4, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_buttonMenuScreen4

    ui_buttonMenuScreen4 = lv_btn_create(ui_Screen4);

    lv_obj_set_width(ui_buttonMenuScreen4, 183);
    lv_obj_set_height(ui_buttonMenuScreen4, 50);

    lv_obj_set_x(ui_buttonMenuScreen4, -114);
    lv_obj_set_y(ui_buttonMenuScreen4, 52);

    lv_obj_set_align(ui_buttonMenuScreen4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_buttonMenuScreen4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_buttonMenuScreen4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_buttonMenuScreen4, ui_event_buttonMenuScreen4, LV_EVENT_ALL, NULL);

    // ui_textMenuScreen4

    ui_textMenuScreen4 = lv_label_create(ui_buttonMenuScreen4);

    lv_obj_set_width(ui_textMenuScreen4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textMenuScreen4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textMenuScreen4, 0);
    lv_obj_set_y(ui_textMenuScreen4, 0);

    lv_obj_set_align(ui_textMenuScreen4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textMenuScreen4, "Oui, aller au menu \n          principal");

    lv_obj_add_event_cb(ui_textMenuScreen4, ui_event_textMenuScreen4, LV_EVENT_ALL, NULL);

    // ui_buttonGoGameScreen4

    ui_buttonGoGameScreen4 = lv_btn_create(ui_Screen4);

    lv_obj_set_width(ui_buttonGoGameScreen4, 181);
    lv_obj_set_height(ui_buttonGoGameScreen4, 53);

    lv_obj_set_x(ui_buttonGoGameScreen4, 102);
    lv_obj_set_y(ui_buttonGoGameScreen4, 52);

    lv_obj_set_align(ui_buttonGoGameScreen4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_buttonGoGameScreen4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_buttonGoGameScreen4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_buttonGoGameScreen4, ui_event_buttonGoGameScreen4, LV_EVENT_ALL, NULL);

    // ui_textPartyScreen4

    ui_textPartyScreen4 = lv_label_create(ui_buttonGoGameScreen4);

    lv_obj_set_width(ui_textPartyScreen4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_textPartyScreen4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_textPartyScreen4, 0);
    lv_obj_set_y(ui_textPartyScreen4, 0);

    lv_obj_set_align(ui_textPartyScreen4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_textPartyScreen4, "Non, revenir\n  a la partie");

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    ui_Screen4_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

