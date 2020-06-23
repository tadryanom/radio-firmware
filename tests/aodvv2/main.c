/*
 * Copyright (C) 2020 Locha Inc
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     tests
 * @brief       Test application for AODVv2
 * @author      Locha Mesh Developers <developers@locha.io>
 * @file
 *
 * The test application demonstrates the use of AODVv2
 */

#include <stdio.h>

#include "kernel_defines.h"

int main(void)
{
    if (IS_USED(MODULE_RADIO_FIRMWARE_AUTO_INIT)) {
        extern void radio_firmware_auto_init(void);
        radio_firmware_auto_init();
    }

    return 0;
}
