/*********************************************************************************/
/*  Debug.cpp                                                                    */
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

#include "../Public/Debug.h"
#include <Core/Log/Public/Log.h>

namespace Neux
{
	// These Functions Should be Logging to the GUI Console
	// Temporarily they Will Log to the CMD

	void Debug::Log(const char* msg)
	{
		Log::getClientLogger()->info(msg);
	}
	
	void Debug::LogError(const char* msg)
	{
		Log::getClientLogger()->error(msg);
	}

} // Neux Namespace
