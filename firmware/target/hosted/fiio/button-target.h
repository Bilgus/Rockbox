/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2019 by Roman Stolyarov
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef _BUTTON_TARGET_H_
#define _BUTTON_TARGET_H_

/* Main unit's buttons */
#define BUTTON_POWER      0x00000001
#define BUTTON_HOME       0x00000002
#define BUTTON_OPTION     0x00000004
#define BUTTON_PREV       0x00000008
#define BUTTON_NEXT       0x00000010
#define BUTTON_PLAY       0x00000020
#define BUTTON_VOL_UP     0x00000040
#define BUTTON_VOL_DOWN   0x00000080
#define BUTTON_UP         0x00000100
#define BUTTON_DOWN       0x00000200

#define BUTTON_MAIN  (BUTTON_POWER | BUTTON_HOME | BUTTON_OPTION | BUTTON_PREV | \
                      BUTTON_NEXT | BUTTON_PLAY | BUTTON_VOL_UP | BUTTON_VOL_DOWN | \
                      BUTTON_UP | BUTTON_DOWN)

#define BUTTON_LEFT      BUTTON_PREV
#define BUTTON_RIGHT     BUTTON_NEXT

/* Software power-off */
#define POWEROFF_BUTTON BUTTON_POWER
#define POWEROFF_COUNT  25

#endif /* _BUTTON_TARGET_H_ */
