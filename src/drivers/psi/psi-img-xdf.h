/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:   src/drivers/psi/psi-img-xdf.h                                *
 * Created:     2012-06-24 by Hampa Hug <hampa@hampa.ch>                     *
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


#ifndef PSI_IMG_XDF_H
#define PSI_IMG_XDF_H 1


#include <drivers/psi/psi.h>


psi_img_t *psi_load_xdf (FILE *fp);

int psi_save_xdf (FILE *fp, const psi_img_t *img);


#endif
