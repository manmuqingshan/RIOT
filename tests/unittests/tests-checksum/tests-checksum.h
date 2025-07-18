/*
 * Copyright 2016 Ludwig Knüpfer <ludwig.knuepfer@fu-berlin.de>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup  unittests
 * @{
 *
 * @file
 * @brief       Unittests for the ``checksum`` module
 *
 * @author      Ludwig Knüpfer <ludwig.knuepfer@fu-berlin.de>
 */
#ifndef TESTS_CHECKSUM_H
#define TESTS_CHECKSUM_H

#include "embUnit.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   The entry point of this test suite.
 */
void tests_checksum(void);

/**
 * @brief   Generates tests for checksum/crc8.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc8_tests(void);

/**
 * @brief   Generates tests for checksum/crc8_lsb.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc8_lsb_tests(void);

/**
 * @brief   Generates tests for crc16-ccitt-kermit from checksum/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc16_ccitt_kermit_tests(void);

/**
 * @brief   Generates tests for crc16-ccitt-fcs from checksum/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc16_ccitt_fcs_tests(void);

/**
 * @brief   Generates tests for crc16-ccitt-mcrf4xx from checksum/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc16_ccitt_mcrf4xx_tests(void);

/**
 * @brief   Generates tests for crc16-ccitt-false from checksum/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc16_ccitt_false_tests(void);

/**
 * @brief   Generates tests for crc16-ccitt-aug from checksum/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc16_ccitt_aug_tests(void);

/**
 * @brief   Generates tests for checksum/crc32.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_crc32_tests(void);

/**
 * @brief   Generates tests for checksum/fletcher16.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_fletcher16_tests(void);

/**
 * @brief   Generates tests for checksum/fletcher32.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_fletcher32_tests(void);

/**
 * @brief   Generates tests for checksum/ucrc16.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_checksum_ucrc16_tests(void);

#ifdef __cplusplus
}
#endif

#endif /* TESTS_CHECKSUM_H */
/** @} */
