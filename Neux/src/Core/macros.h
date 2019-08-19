/*********************************************************************************/
/*  macros.h                                                                     */
/*********************************************************************************/
/*                             This file is part of:                             */
/*                                  NEUX ENGINE                                  */
/*                     https://github.com/AhmadMamdouhEnan/Neux                  */
/*********************************************************************************/
/* Copyright (c) 2019 Ahmad Mamdouh Enan										 */
/*																			     */
/* Permission is hereby granted, free of charge, to any person obtaining a copy	 */
/* of this software and associated documentation files (the "Software"), to deal */
/* in the Software without restriction, including without limitation the rights	 */
/* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell	 */
/* copies of the Software, and to permit persons to whom the Software is		 */
/* furnished to do so, subject to the following conditions:						 */
/* 																				 */
/* The above copyright notice and this permission notice shall be included in all*/
/* copies or substantial portions of the Software.								 */
/* 																				 */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR	 */
/* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,		 */
/* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE	 */
/* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER		 */
/* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, */
/* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE */
/* SOFTWARE.                                                                     */
/*********************************************************************************/

#pragma once

// Basic Name To String
#ifndef _STR
#define _STR(m_x) #m_x
#define _MKSTR(m_x) _STR(m_x)
#endif // !_STR

// Undefine Windows Pre-Defined Stuff
#ifdef _WIN32
	#undef min		  // override standard definition
	#undef max		  // override standard definition
	#undef ERROR	  // override (really stupid) wingdi.h standard definition
	#undef DELETE	  // override (another really stupid) winnt.h standard definition
	#undef MessageBox // override winuser.h standard definition
	#undef MIN		  // override standard definition
	#undef MAX		  // override standard definition
	#undef CLAMP	  // override standard definition
	#undef Error
	#undef OK
	#undef CONNECT_DEFERRED // override from Windows SDK, clashes with Object enum
#endif

#ifndef ABS
#define ABS(m_v) (((m_v) < 0) ? (-(m_v)) : (m_v))
#endif

#define ABSDIFF(x, y) (((x) < (y)) ? ((y) - (x)) : ((x) - (y)))

#ifndef SGN
#define SGN(m_v) (((m_v) < 0) ? (-1.0) : (+1.0))
#endif

#ifndef MIN
#define MIN(m_a, m_b) (((m_a) < (m_b)) ? (m_a) : (m_b))
#endif

#ifndef MAX
#define MAX(m_a, m_b) (((m_a) > (m_b)) ? (m_a) : (m_b))
#endif

#ifndef CLAMP
#define CLAMP(m_a, m_min, m_max) (((m_a) < (m_min)) ? (m_min) : (((m_a) > (m_max)) ? m_max : m_a))
#endif

/** Generic swap template */
#ifndef SWAP

#define SWAP(m_x, m_y) __swap_tmpl((m_x), (m_y))
template <class T>
inline void __swap_tmpl(T& x, T& y) {

	T aux = x;
	x = y;
	y = aux;
}

#endif //swap