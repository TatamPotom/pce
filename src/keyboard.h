/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     keyboard.h                                                 *
 * Created:       2003-04-14 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2003-04-14 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 1996-2003 by Hampa Hug <hampa@hampa.ch>                *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id: keyboard.h,v 1.1 2003/04/15 04:03:56 hampa Exp $ */


#ifndef PCE_KEYBOARD_H
#define PCE_KEYBOARD_H 1


#include <pce.h>
#include <e8086/e8086.h>


typedef struct keymap_t {
  unsigned        key[256];
  struct keymap_t *map[256];
} keymap_t;


typedef struct {
  keymap_t *map;
  memory_t *mem;

  int      fd;
} keyboard_t;


keymap_t *keymap_new (void);
void keymap_del (keymap_t *map);
void keymap_set_key (keymap_t *map, unsigned char *seq, unsigned cnt, unsigned key);
unsigned keymap_get_key (keymap_t *map, unsigned char *seq, unsigned cnt);


keyboard_t *key_new (void);
void key_del (keyboard_t *key);
void key_set_fd (keyboard_t *key, int fd);
void key_add_key (keyboard_t *key, unsigned short val);
void key_clock (keyboard_t *key);


#endif
