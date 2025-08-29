/**
 * @file lv_profiler_builtin_private.h
 *
 */

#ifndef LV_PROFILER_BUILTIN_PRIVATE_H
#define LV_PROFILER_BUILTIN_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lv_profiler_builtin.h"

#if LV_USE_PROFILER && LV_USE_PROFILER_BUILTIN

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**
 * @brief LVGL profiler built-in configuration structure
 */
struct lv_profiler_builtin_config_t {
    size_t buf_size;                    /**< The size of the buffer used for profiling data */
    uint32_t tick_per_sec;              /**< The number of ticks per second */
    __attribute__(( fptrgroup("lv_profiler_tick_get_cb") ))
    uint32_t (*tick_get_cb)(void);      /**< Callback function to get the current tick count */
    __attribute__(( fptrgroup("lv_profiler_flush_cb") ))
    void (*flush_cb)(const char * buf); /**< Callback function to flush the profiling data */
    __attribute__(( fptrgroup("lv_profiler_tid_get_cb") ))
    int (*tid_get_cb)(void);            /**< Callback function to get the current thread ID */
    __attribute__(( fptrgroup("lv_profiler_cpu_get_cb") ))
    int (*cpu_get_cb)(void);            /**< Callback function to get the current CPU */
};


/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#endif /* LV_USE_PROFILER && LV_USE_PROFILER_BUILTIN */

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_PROFILER_BUILTIN_PRIVATE_H*/
