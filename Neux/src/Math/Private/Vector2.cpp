//********************************************************************************/
/*  Vector2.cpp                                                                  */
//********************************************************************************/
/*                             This file is part of:                             */
/*                                  NEUX ENGINE                                  */
/*                     https://github.com/AhmadMamdouhEnan/Neux                  */
//********************************************************************************/
/* Copyright (c) 2019 Ahmad Mamdouh Enan				                     	 */
/*										                                         */
/* Permission is hereby granted, free of charge, to any person obtaining a copy	 */
/* of this software and associated documentation files (the "Software"), to deal */
/* in the Software without restriction, including without limitation the rights	 */
/* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell	 */
/* copies of the Software, and to permit persons to whom the Software is	     */
/* furnished to do so, subject to the following conditions:			             */
/* 										                                         */
/* The above copyright notice and this permission notice shall be included in all*/
/* copies or substantial portions of the Software.				                 */
/* 										                                         */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR	 */
/* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,	     */
/* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE	 */
/* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER	     */
/* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, */
/* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE */
/* SOFTWARE.                                                                     */
//********************************************************************************/

#include "../Public/Vector2.h"
#include <sstream> // STL String Stream

namespace Neux
{
	namespace Math
	{
		//---------------------------------------------------------
		// Globals/Constants									  |
		//---------------------------------------------------------

		// zero vector2 constant (0, 0)
		const Vector2 Zero(0);

		// One vector2 constant (1, 1)
		const Vector2 One(1);

		// Right vector2 constant (1, 0)
		const Vector2 Right(1, 0);

		// Left vector2 constant (-1, 0)
		const Vector2 Left(-1, 0);

		// Up vector2 constant (0, 1)
		const Vector2 Up(0, 1);

		// Down vector2 constant (0, -1)
		const Vector2 Down(0, -1);

		//---------------------------------------------------------
		// Constructors									          |
		//---------------------------------------------------------
		// Default Constructor
		Vector2::Vector2() : x(0), y(0)
		{
		}

		// Scalar Constructor
		Vector2::Vector2(_IN float s) : x(s), y(s)
		{
		}

		// Initial Constructor
		Vector2::Vector2(_IN float x, _IN float y) : x(x), y(y)
		{
		}

		// Copy Constructor
		Vector2::Vector2(_IN const Vector2& vec) : x(vec.x), y(vec.y)
		{
		}

		//---------------------------------------------------------
		// Printing Helpers									      |
		//---------------------------------------------------------

		// Left Shift Operator
		std::ostream& operator << (std::ostream& out, const Vector2& vec)
		{
			out << '(' << vec.x << ", " << vec.y << ')';
			return out;
		}

		// ToString
		std::string Vector2::ToString()
		{
			std::stringstream ss;
			ss << '(' << x << ", " << y << ')';
			return ss.str();
		}

	} // Math Namespace
} // Neux Namespace
