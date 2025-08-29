/**
 * @file lv_demo_flex_layout_main.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_demo_flex_layout_main.h"
#include "lv_demo_flex_layout.h"

#if LV_USE_DEMO_FLEX_LAYOUT

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

static view_t view;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
__attribute__(( fptrgroup("lv_demo_entry_cb") ))
void lv_demo_flex_layout(void)
{
    view_create(lv_screen_active(), &view);
    ctrl_pad_attach(&view);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

#endif
