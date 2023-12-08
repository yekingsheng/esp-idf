/**
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** ASSIST_DEBUG_CORE_0_MONTR_ENA_REG register
 *  core0 monitor enable configuration register
 */
#define ASSIST_DEBUG_CORE_0_MONTR_ENA_REG (DR_REG_ASSIST_DEBUG_BASE + 0x0)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA : R/W; bitpos: [0]; default: 0;
 *  Core0 dram0 area0 read monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA : R/W; bitpos: [1]; default: 0;
 *  Core0 dram0 area0 write monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_S  1
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA : R/W; bitpos: [2]; default: 0;
 *  Core0 dram0 area1 read monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA    (BIT(2))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_ENA_S  2
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA : R/W; bitpos: [3]; default: 0;
 *  Core0 dram0 area1 write monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA    (BIT(3))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_ENA_S  3
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA : R/W; bitpos: [4]; default: 0;
 *  Core0 PIF area0 read monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA    (BIT(4))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_ENA_S  4
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA : R/W; bitpos: [5]; default: 0;
 *  Core0 PIF area0 write monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA    (BIT(5))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_ENA_S  5
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA : R/W; bitpos: [6]; default: 0;
 *  Core0 PIF area1 read monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA    (BIT(6))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_ENA_S  6
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA : R/W; bitpos: [7]; default: 0;
 *  Core0 PIF area1 write monitor enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA    (BIT(7))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_ENA_S  7
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA : R/W; bitpos: [8]; default: 0;
 *  Core0 stackpoint underflow monitor enable
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA    (BIT(8))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_ENA_S  8
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA : R/W; bitpos: [9]; default: 0;
 *  Core0 stackpoint overflow monitor enable
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA    (BIT(9))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_ENA_S  9

/** ASSIST_DEBUG_CORE_0_INTR_RAW_REG register
 *  core0 monitor interrupt status register
 */
#define ASSIST_DEBUG_CORE_0_INTR_RAW_REG (DR_REG_ASSIST_DEBUG_BASE + 0x4)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW : RO; bitpos: [0]; default: 0;
 *  Core0 dram0 area0 read monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW : RO; bitpos: [1]; default: 0;
 *  Core0 dram0 area0 write monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_S  1
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW : RO; bitpos: [2]; default: 0;
 *  Core0 dram0 area1 read monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW    (BIT(2))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_RAW_S  2
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW : RO; bitpos: [3]; default: 0;
 *  Core0 dram0 area1 write monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW    (BIT(3))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_RAW_S  3
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW : RO; bitpos: [4]; default: 0;
 *  Core0 PIF area0 read monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW    (BIT(4))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_RAW_S  4
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW : RO; bitpos: [5]; default: 0;
 *  Core0 PIF area0 write monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW    (BIT(5))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_RAW_S  5
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW : RO; bitpos: [6]; default: 0;
 *  Core0 PIF area1 read monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW    (BIT(6))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_RAW_S  6
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW : RO; bitpos: [7]; default: 0;
 *  Core0 PIF area1 write monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW    (BIT(7))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_RAW_S  7
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW : RO; bitpos: [8]; default: 0;
 *  Core0 stackpoint underflow monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW    (BIT(8))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_RAW_S  8
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW : RO; bitpos: [9]; default: 0;
 *  Core0 stackpoint overflow monitor interrupt status
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW    (BIT(9))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_RAW_S  9

/** ASSIST_DEBUG_CORE_0_INTR_ENA_REG register
 *  core0 monitor interrupt enable register
 */
#define ASSIST_DEBUG_CORE_0_INTR_ENA_REG (DR_REG_ASSIST_DEBUG_BASE + 0x8)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA : R/W; bitpos: [0]; default: 0;
 *  Core0 dram0 area0 read monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA : R/W; bitpos: [1]; default: 0;
 *  Core0 dram0 area0 write monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_S  1
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA : R/W; bitpos: [2]; default: 0;
 *  Core0 dram0 area1 read monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA    (BIT(2))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_S  2
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA : R/W; bitpos: [3]; default: 0;
 *  Core0 dram0 area1 write monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA    (BIT(3))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_S  3
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA : R/W; bitpos: [4]; default: 0;
 *  Core0 PIF area0 read monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA    (BIT(4))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_INTR_ENA_S  4
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA : R/W; bitpos: [5]; default: 0;
 *  Core0 PIF area0 write monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA    (BIT(5))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_INTR_ENA_S  5
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA : R/W; bitpos: [6]; default: 0;
 *  Core0 PIF area1 read monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA    (BIT(6))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_INTR_ENA_S  6
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA : R/W; bitpos: [7]; default: 0;
 *  Core0 PIF area1 write monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA    (BIT(7))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_INTR_ENA_S  7
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA : R/W; bitpos: [8]; default: 0;
 *  Core0 stackpoint underflow monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA    (BIT(8))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_INTR_ENA_S  8
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA : R/W; bitpos: [9]; default: 0;
 *  Core0 stackpoint overflow monitor interrupt enable
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA    (BIT(9))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_INTR_ENA_S  9

/** ASSIST_DEBUG_CORE_0_INTR_CLR_REG register
 *  core0 monitor interrupt clr register
 */
#define ASSIST_DEBUG_CORE_0_INTR_CLR_REG (DR_REG_ASSIST_DEBUG_BASE + 0xc)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR : WT; bitpos: [0]; default: 0;
 *  Core0 dram0 area0 read monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR : WT; bitpos: [1]; default: 0;
 *  Core0 dram0 area0 write monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_S  1
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR : WT; bitpos: [2]; default: 0;
 *  Core0 dram0 area1 read monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR    (BIT(2))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_RD_CLR_S  2
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR : WT; bitpos: [3]; default: 0;
 *  Core0 dram0 area1 write monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR    (BIT(3))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_WR_CLR_S  3
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR : WT; bitpos: [4]; default: 0;
 *  Core0 PIF area0 read monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR    (BIT(4))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_RD_CLR_S  4
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR : WT; bitpos: [5]; default: 0;
 *  Core0 PIF area0 write monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR    (BIT(5))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_WR_CLR_S  5
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR : WT; bitpos: [6]; default: 0;
 *  Core0 PIF area1 read monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR    (BIT(6))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_RD_CLR_S  6
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR : WT; bitpos: [7]; default: 0;
 *  Core0 PIF area1 write monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR    (BIT(7))
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_WR_CLR_S  7
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR : WT; bitpos: [8]; default: 0;
 *  Core0 stackpoint underflow monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR    (BIT(8))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MIN_CLR_S  8
/** ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR : WT; bitpos: [9]; default: 0;
 *  Core0 stackpoint overflow monitor interrupt clr
 */
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR    (BIT(9))
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR_M  (ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR_V << ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR_S)
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_SP_SPILL_MAX_CLR_S  9

/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_REG register
 *  core0 dram0 region0 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x10)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Core0 dram0 region0 start addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MIN_S  0

/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_REG register
 *  core0 dram0 region0 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x14)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Core0 dram0 region0 end addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_MAX_S  0

/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_REG register
 *  core0 dram0 region1 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x18)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Core0 dram0 region1 start addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MIN_S  0

/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_REG register
 *  core0 dram0 region1 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x1c)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Core0 dram0 region1 end addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_1_MAX_S  0

/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_REG register
 *  core0 PIF region0 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x20)
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Core0 PIF region0 start addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MIN_S  0

/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_REG register
 *  core0 PIF region0 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x24)
/** ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Core0 PIF region0 end addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_V << ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_0_MAX_S  0

/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_REG register
 *  core0 PIF region1 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x28)
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Core0 PIF region1 start addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MIN_S  0

/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_REG register
 *  core0 PIF region1 addr configuration register
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x2c)
/** ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Core0 PIF region1 end addr
 */
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_M  (ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_V << ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_S)
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PIF_1_MAX_S  0

/** ASSIST_DEBUG_CORE_0_AREA_PC_REG register
 *  core0 area pc status register
 */
#define ASSIST_DEBUG_CORE_0_AREA_PC_REG (DR_REG_ASSIST_DEBUG_BASE + 0x30)
/** ASSIST_DEBUG_CORE_0_AREA_PC : RO; bitpos: [31:0]; default: 0;
 *  the stackpointer when first touch region monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_PC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PC_M  (ASSIST_DEBUG_CORE_0_AREA_PC_V << ASSIST_DEBUG_CORE_0_AREA_PC_S)
#define ASSIST_DEBUG_CORE_0_AREA_PC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_PC_S  0

/** ASSIST_DEBUG_CORE_0_AREA_SP_REG register
 *  core0 area sp status register
 */
#define ASSIST_DEBUG_CORE_0_AREA_SP_REG (DR_REG_ASSIST_DEBUG_BASE + 0x34)
/** ASSIST_DEBUG_CORE_0_AREA_SP : RO; bitpos: [31:0]; default: 0;
 *  the PC when first touch region monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_SP    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_SP_M  (ASSIST_DEBUG_CORE_0_AREA_SP_V << ASSIST_DEBUG_CORE_0_AREA_SP_S)
#define ASSIST_DEBUG_CORE_0_AREA_SP_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_AREA_SP_S  0

/** ASSIST_DEBUG_CORE_0_SP_MIN_REG register
 *  stack min value
 */
#define ASSIST_DEBUG_CORE_0_SP_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x38)
/** ASSIST_DEBUG_CORE_0_SP_MIN : R/W; bitpos: [31:0]; default: 0;
 *  core0 sp region configuration regsiter
 */
#define ASSIST_DEBUG_CORE_0_SP_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MIN_M  (ASSIST_DEBUG_CORE_0_SP_MIN_V << ASSIST_DEBUG_CORE_0_SP_MIN_S)
#define ASSIST_DEBUG_CORE_0_SP_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MIN_S  0

/** ASSIST_DEBUG_CORE_0_SP_MAX_REG register
 *  stack max value
 */
#define ASSIST_DEBUG_CORE_0_SP_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x3c)
/** ASSIST_DEBUG_CORE_0_SP_MAX : R/W; bitpos: [31:0]; default: 4294967295;
 *  core0 sp pc status register
 */
#define ASSIST_DEBUG_CORE_0_SP_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MAX_M  (ASSIST_DEBUG_CORE_0_SP_MAX_V << ASSIST_DEBUG_CORE_0_SP_MAX_S)
#define ASSIST_DEBUG_CORE_0_SP_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MAX_S  0

/** ASSIST_DEBUG_CORE_0_SP_PC_REG register
 *  stack monitor pc status register
 */
#define ASSIST_DEBUG_CORE_0_SP_PC_REG (DR_REG_ASSIST_DEBUG_BASE + 0x40)
/** ASSIST_DEBUG_CORE_0_SP_PC : RO; bitpos: [31:0]; default: 0;
 *  This regsiter stores the PC when trigger stack monitor.
 */
#define ASSIST_DEBUG_CORE_0_SP_PC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_PC_M  (ASSIST_DEBUG_CORE_0_SP_PC_V << ASSIST_DEBUG_CORE_0_SP_PC_S)
#define ASSIST_DEBUG_CORE_0_SP_PC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_PC_S  0

/** ASSIST_DEBUG_CORE_0_RCD_EN_REG register
 *  record enable configuration register
 */
#define ASSIST_DEBUG_CORE_0_RCD_EN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x44)
/** ASSIST_DEBUG_CORE_0_RCD_RECORDEN : R/W; bitpos: [0]; default: 0;
 *  Set 1 to enable record PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN    (BIT(0))
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_M  (ASSIST_DEBUG_CORE_0_RCD_RECORDEN_V << ASSIST_DEBUG_CORE_0_RCD_RECORDEN_S)
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_S  0
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN : R/W; bitpos: [1]; default: 0;
 *  Set 1 to enable cpu pdebug function, must set this bit can get cpu PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN    (BIT(1))
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_S  1

/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_REG register
 *  record status regsiter
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_REG (DR_REG_ASSIST_DEBUG_BASE + 0x48)
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC : RO; bitpos: [31:0]; default: 0;
 *  recorded PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_S  0

/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_REG register
 *  record status regsiter
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_REG (DR_REG_ASSIST_DEBUG_BASE + 0x4c)
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP : RO; bitpos: [31:0]; default: 0;
 *  recorded sp
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_S  0

/** ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXCEPTION_REG register
 *  cpu status register
 */
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXCEPTION_REG (DR_REG_ASSIST_DEBUG_BASE + 0x70)
/** ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC : RO; bitpos: [31:0]; default: 0;
 *  cpu's lastpc before exception
 */
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_M  (ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_V << ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_S)
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_S  0

/** ASSIST_DEBUG_CORE_0_DEBUG_MODE_REG register
 *  cpu status register
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x74)
/** ASSIST_DEBUG_CORE_0_DEBUG_MODE : RO; bitpos: [0]; default: 0;
 *  cpu debug mode status, 1 means cpu enter debug mode.
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE    (BIT(0))
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_M  (ASSIST_DEBUG_CORE_0_DEBUG_MODE_V << ASSIST_DEBUG_CORE_0_DEBUG_MODE_S)
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_S  0
/** ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE : RO; bitpos: [1]; default: 0;
 *  cpu debug_module active status
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE    (BIT(1))
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_M  (ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_V << ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_S)
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_S  1

/** ASSIST_DEBUG_CORE_0_DMACTIVE_MODE_REG register
 *  cpu status register
 */
#define ASSIST_DEBUG_CORE_0_DMACTIVE_MODE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x78)
/** ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE : RO; bitpos: [0]; default: 0;
 *  need desc
 */
#define ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE    (BIT(0))
#define ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE_M  (ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE_V << ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE_S)
#define ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_DMACTIVE_LPCORE_S  0

/** ASSIST_DEBUG_CLOCK_GATE_REG register
 *  clock register
 */
#define ASSIST_DEBUG_CLOCK_GATE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x7c)
/** ASSIST_DEBUG_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Set 1 force on the clock gate
 */
#define ASSIST_DEBUG_CLK_EN    (BIT(0))
#define ASSIST_DEBUG_CLK_EN_M  (ASSIST_DEBUG_CLK_EN_V << ASSIST_DEBUG_CLK_EN_S)
#define ASSIST_DEBUG_CLK_EN_V  0x00000001U
#define ASSIST_DEBUG_CLK_EN_S  0

/** ASSIST_DEBUG_DATE_REG register
 *  version register
 */
#define ASSIST_DEBUG_DATE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x3fc)
/** ASSIST_DEBUG_DATE : R/W; bitpos: [27:0]; default: 35725648;
 *  version register
 */
#define ASSIST_DEBUG_DATE    0x0FFFFFFFU
#define ASSIST_DEBUG_DATE_M  (ASSIST_DEBUG_DATE_V << ASSIST_DEBUG_DATE_S)
#define ASSIST_DEBUG_DATE_V  0x0FFFFFFFU
#define ASSIST_DEBUG_DATE_S  0

#ifdef __cplusplus
}
#endif