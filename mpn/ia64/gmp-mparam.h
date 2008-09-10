/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* Generated by tuneup.c, 2005-03-18, gcc 3.3, 1600 MHz Itanium 2 */

#define MUL_KARATSUBA_THRESHOLD          40
#define MUL_TOOM3_THRESHOLD             138

#define SQR_BASECASE_THRESHOLD           26
#define SQR_KARATSUBA_THRESHOLD         118
#define SQR_TOOM3_THRESHOLD             159

#define MULLOW_BASECASE_THRESHOLD        20
#define MULLOW_DC_THRESHOLD             114
#define MULLOW_MUL_N_THRESHOLD          474

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DIV_DC_THRESHOLD                 72
#define POWM_THRESHOLD                  295

#define HGCD_THRESHOLD                  191
#define GCD_ACCEL_THRESHOLD              10
#define GCD_DC_THRESHOLD                336
#define GCDEXT_SCHOENHAGE_THRESHOLD     649
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_THRESHOLD              8540

#define MUL_FFT_TABLE  { 848, 1824, 2880, 5888, 15360, 45056, 114688, 458752, 1310720, 5242880, 20971520, 50331648, 0 }
#define MUL_FFT_MODF_THRESHOLD         1072
#define MUL_FFT_THRESHOLD              7040

#define SQR_FFT_TABLE  { 848, 1824, 2880, 6912, 15360, 45056, 114688, 458752, 1310720, 5242880, 20971520, 50331648, 0 }
#define SQR_FFT_MODF_THRESHOLD         1040
#define SQR_FFT_THRESHOLD              8704
