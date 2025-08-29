/**
 * @file lv_malloc_core.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "../lv_mem.h"
#if LV_USE_STDLIB_MALLOC == LV_STDLIB_CLIB
#include "../../stdlib/lv_mem.h"
#include <stdlib.h>

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

/**********************
 *      MACROS
 **********************/
/**********************
 *   GLOBAL FUNCTIONS
 **********************/

LV_FUNC_SECTION
void lv_mem_init(void)
{
    return; /*Nothing to init*/
}

LV_FUNC_SECTION
void lv_mem_deinit(void)
{
    return; /*Nothing to deinit*/

}

LV_FUNC_SECTION
lv_mem_pool_t lv_mem_add_pool(void * mem, size_t bytes)
{
    /*Not supported*/
    LV_UNUSED(mem);
    LV_UNUSED(bytes);
    return NULL;
}

LV_FUNC_SECTION
void lv_mem_remove_pool(lv_mem_pool_t pool)
{
    /*Not supported*/
    LV_UNUSED(pool);
    return;
}

LV_FUNC_SECTION
void * lv_malloc_core(size_t size)
{
    return malloc(size);
}

LV_FUNC_SECTION
void * lv_realloc_core(void * p, size_t new_size)
{
    return realloc(p, new_size);
}

LV_FUNC_SECTION
void lv_free_core(void * p)
{
    free(p);
}

LV_FUNC_SECTION
void lv_mem_monitor_core(lv_mem_monitor_t * mon_p)
{
    /*Not supported*/
    LV_UNUSED(mon_p);
    return;
}

LV_FUNC_SECTION
lv_result_t lv_mem_test_core(void)
{
    /*Not supported*/
    return LV_RESULT_OK;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

#endif /*LV_STDLIB_CLIB*/
