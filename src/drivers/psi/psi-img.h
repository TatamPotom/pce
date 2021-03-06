/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:   src/drivers/psi/psi-img.h                                    *
 * Created:     2012-02-14 by Hampa Hug <hampa@hampa.ch>                     *
 * Copyright:   (C) 2012-2013 Hampa Hug <hampa@hampa.ch>                     *
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


#ifndef PCE_DRV_PSI_IMG_H
#define PCE_DRV_PSI_IMG_H 1


#include <drivers/psi/psi.h>


#define PSI_FORMAT_NONE    0
#define PSI_FORMAT_ANADISK 1
#define PSI_FORMAT_CP2     2
#define PSI_FORMAT_DC42    3
#define PSI_FORMAT_IMD     4
#define PSI_FORMAT_MSA     5
#define PSI_FORMAT_PFDC    6
#define PSI_FORMAT_PFDC0   7
#define PSI_FORMAT_PFDC1   8
#define PSI_FORMAT_PFDC2   9
#define PSI_FORMAT_PFDC4   10
#define PSI_FORMAT_PSI     11
#define PSI_FORMAT_RAW     12
#define PSI_FORMAT_ST      13
#define PSI_FORMAT_STX     14
#define PSI_FORMAT_TC      15
#define PSI_FORMAT_TD0     16
#define PSI_FORMAT_XDF     17


unsigned psi_guess_type (const char *fname);

psi_img_t *psi_load_fp (FILE *fp, unsigned type);
psi_img_t *psi_load (const char *fname, unsigned type);

int psi_save_fp (FILE *fp, const psi_img_t *img, unsigned type);
int psi_save (const char *fname, const psi_img_t *img, unsigned type);

unsigned psi_probe_fp (FILE *fp);
unsigned psi_probe (const char *fname);


#endif
