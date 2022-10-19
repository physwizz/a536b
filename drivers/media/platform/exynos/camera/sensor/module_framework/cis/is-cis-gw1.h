/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_GW1_H
#define IS_CIS_GW1_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)
#define USE_GROUP_PARAM_HOLD	(1)

#define SENSOR_GW1_MAX_WIDTH		(9248)
#define SENSOR_GW1_MAX_HEIGHT		(6936)

/* TODO: Check below values are valid */
#define SENSOR_GW1_FINE_INTEGRATION_TIME_MIN				(0x0)
#define SENSOR_GW1_FINE_INTEGRATION_TIME_MAX_MARGIN		(0x0)
#define SENSOR_GW1_COARSE_INTEGRATION_TIME_MIN				(0x4)
#define SENSOR_GW1_COARSE_INTEGRATION_TIME_MAX_MARGIN		(0x4)
#define SENSOR_GW1_MAX_COARSE_INTEG_WITH_FRM_LENGTH_CTRL	(65503)
#define SENSOR_GW1_MAX_CIT_LSHIFT_VALUE						(11)
#define SENSOR_GW1_MIN_FRAME_DURATION						(100000)

/* GW1 Regsister Address */
#define SENSOR_GW1_DIRECT_PAGE_ACCESS_MARK			(0xFCFC)
#define SENSOR_GW1_DIRECT_DEFALT_PAGE_ADDR			(0x4000)
#define SENSOR_GW1_INDIRECT_WRITE_PAGE_ADDR			(0x6028)
#define SENSOR_GW1_INDIRECT_WRITE_OFFSET_ADDR		(0x602A)
#define SENSOR_GW1_INDIRECT_WRITE_DTAT_ADDR			(0x6F12)

#define SENSOR_GW1_FRM_LENGTH_LINE_LSHIFT_ADDR		(0x0702)
#define SENSOR_GW1_CIT_LSHIFT_ADDR					(0x0704)
#define SENSOR_GW1_MODEL_ID_ADDR					(0x0000)
#define SENSOR_GW1_REVISION_NUM_ADDR				(0x0002)
#define SENSOR_GW1_FRAME_COUNT_ADDR					(0x0005)
#define SENSOR_GW1_SETUP_MODE_SELECT_ADDR			(0x0100)
#define SENSOR_GW1_GROUP_PARAM_HOLD_ADDR			(0x0104)
#define SENSOR_GW1_EXTCLK_FREQ_ADDR					(0x0136)
#define SENSOR_GW1_FINE_INTEG_TIME_ADDR				(0x0200)
#define SENSOR_GW1_CORASE_INTEG_TIME_ADDR			(0x0202)
#define SENSOR_GW1_AGAIN_CODE_GLOBAL_ADDR			(0x0204)
#define SENSOR_GW1_DGAIN_GLOBAL_ADDR				(0x020E)
#define SENSOR_GW1_FRAME_LENGTH_LINE_ADDR			(0x0340)
#define SENSOR_GW1_LINE_LENGTH_PCK_ADDR				(0x0342)
#define SENSOR_GW1_WBGAIN_RED						(0x0D82)
#define SENSOR_GW1_WBGAIN_GREEN						(0x0D84)
#define SENSOR_GW1_WBGAIN_BLUE						(0x0D86)

#define SENSOR_GW1_MAX_ANALOG_GAIN					(0x400)
#define SENSOR_GW1_MAX_DIGITAL_GAIN					(0x1000)

/* GW1 Debug Define */
#define SENSOR_GW1_DEBUG_INFO    (0)

enum sensor_gw1_mode_enum {
	SENSOR_GW1_2SUM_4624X3468_30FPS,
	SENSOR_GW1_2SUM_4624X2604_30FPS,
	SENSOR_GW1_2SUM_4000X3000_30FPS,
	SENSOR_GW1_4SUM_2304X1728_120FPS,
	SENSOR_GW1_4SUM_2H2V_2000X1128_240FPS,
	SENSOR_GW1_2SUM_3328X1872_60FPS,

	GW1_MODE_REMOSAIC_START,
	SENSOR_GW1_FULL_9248X6936_15FPS = GW1_MODE_REMOSAIC_START,
	SENSOR_GW1_FULL_CROP_4624X3468_30FPS,
	SENSOR_GW1_FULL_CROP_4624X2604_30FPS,
	IMX682_MODE_REMOSAIC_END = SENSOR_GW1_FULL_CROP_4624X2604_30FPS,
};
#endif