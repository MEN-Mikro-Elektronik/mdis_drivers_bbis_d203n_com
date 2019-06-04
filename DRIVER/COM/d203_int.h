/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: d203_int.h
 *
 *       Author: ds
 *
 *  Description: Internal header file for D203 BBIS
 *
 *     Switches: ---
 *
 *
 *---------------------------------------------------------------------------
 * Copyright (c) 2003-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _D203_H
#define _D203_H

#ifdef __cplusplus
    extern "C" {
#endif


/*-----------------------------------------+
|  DEFINES                                 |
+-----------------------------------------*/
/*
 * offset of control/status/trigger registers within
 * control/status/trigger space
 */
#if (defined(_BIG_ENDIAN_)    && !defined(MAC_BYTESWAP)) \
 || (defined(_LITTLE_ENDIAN_) &&  defined(MAC_BYTESWAP))
# define D203_LCTRL				0x02	/* local ctrl-reg	*/
# define D203_GCTRL				0x00	/* global ctrl-reg	*/

# define D203_TRIGSRC_LMMOD		0x06	/* local TRIGA/TRIGB trigger src */
# define D203_TRIGSRC_GPXI		0x04	/* global PXI trigger src		 */

# define D203_TRIGDST_LMMOD		0x0a	/* local TRIGA/TRIGB trigger dst */
# define D203_TRIGDST_GPXI		0x08	/* global PXI trigger dst		 */
#else
# define D203_LCTRL				0x00	/* local ctrl-reg	*/
# define D203_GCTRL				0x02	/* global ctrl-reg	*/

# define D203_TRIGSRC_LMMOD		0x04	/* local TRIGA/TRIGB trigger src */
# define D203_TRIGSRC_GPXI		0x06	/* global PXI trigger src		 */

# define D203_TRIGDST_LMMOD		0x08	/* local TRIGA/TRIGB trigger dst */
# define D203_TRIGDST_GPXI		0x0a	/* global PXI trigger dst		 */
#endif

/* local ctrl-reg */
#define D203_LCTRL_IP			0x01	/* module interrupt pending		*/
#define D203_LCTRL_IEN			0x02	/* module interrupt enable		*/
#define D203_LCTRL_FAST			0x04	/* module fast PCI access		*/
#define D203_LCTRL_TOUT			0x08	/* module timeout occured		*/

/* global ctrl-reg */
#define D203_GCTRL_GIP			0x01	/* global interrupt pending		*/
#define D203_GCTRL_GIEN			0x02	/* global interrupt enable		*/


#ifdef __cplusplus
    }
#endif

#endif /* _D203_H */
