#if LV_BUILD_TEST
#include "../lvgl.h"

#include "unity/unity.h"

LV_FUNC_SECTION
void setUp(void)
{
    /* Function run before every test */
}

LV_FUNC_SECTION
void tearDown(void)
{
    /* Function run after every test */
    lv_obj_clean(lv_screen_active());
}

LV_FUNC_SECTION
void test_func_1(void)
{
    TEST_FAIL();
}

#endif
