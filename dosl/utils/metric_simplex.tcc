/** **************************************************************************************
*                                                                                        *
*    Part of                                                                             *
*    Discrete Optimal search Library (DOSL)                                              *
*    A template-based C++ library for discrete search                                    *
*    Version 3.x                                                                         *
*    ----------------------------------------------------------                          *
*    Copyright (C) 2017  Subhrajit Bhattacharya                                          *
*                                                                                        *
*    This program is free software: you can redistribute it and/or modify                *
*    it under the terms of the GNU General Public License as published by                *
*    the Free Software Foundation, either version 3 of the License, or                   *
*    (at your option) any later version.                                                 *
*                                                                                        *
*    This program is distributed in the hope that it will be useful,                     *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of                      *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                       *
*    GNU General Public License for more details <http://www.gnu.org/licenses/>.         *
*                                                                                        *
*                                                                                        *
*    Contact:  subhrajit@gmail.com                                                       *
*              https://www.lehigh.edu/~sub216/ , http://subhrajit.net/                   *
*                                                                                        *
*                                                                                        *
*************************************************************************************** **/

#ifndef __DOSL_METRIC_SIMPLEX_TCC__ 
#define __DOSL_METRIC_SIMPLEX_TCC__ 

// constants for comparing values // TODO: Replace with macros from 'double_utils' and make scale-independent
#define _MS_DOUBLE_EPS     1e-4    // make smaller if grid edge length is less than O(1)
#define _MS_DOUBLE_EPS_SQ  (_MS_DOUBLE_EPS*_MS_DOUBLE_EPS)

// includes
#include "macros_constants.tcc"
// --
#include "metric_simplex_bits/metric_simplex_base.tcc"
#include "metric_simplex_bits/metric_simplex_a.tcc"
#include "metric_simplex_bits/metric_simplex_collection.tcc"

#endif
