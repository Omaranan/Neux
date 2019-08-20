/*********************************************************************************/
/*  Vector2.h                                                                    */
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

#define _IN_AND_OUT_ONLY // Gets Just the _IN & _OUT Defines
#include <Core/macros.h>

#include <ostream>// STL I/O Library
#include <string> // C++ STL String

namespace Neux
{
	namespace Math
	{
		struct Vector2
		{
			/** Vector's X component. */
			float x;

			/** Vector's Y component. */
			float y;

		public: // Globals/Constants

			/** zero vector2 constant (0, 0) */
			static const Vector2 Zero;
			
			/** One vector2 constant (1, 1) */
			static const Vector2 One;
			
			/** Right vector2 constant (1, 0) */
			static const Vector2 Right;
			
			/** Left vector2 constant (-1, 0) */
			static const Vector2 Left;
			
			/** Up vector2 constant (0, 1) */
			static const Vector2 Up;
			
			/** Down vector2 constant (0, -1) */
			static const Vector2 Down;

		public: // Constructors

			/**
			 * Default Constructor
			 *
			 * @note Intializes Both Components to Zero
			 */
			Vector2();

			/**
			 * Constructor using one Scalar for Both Components.
			 *
			 * @param _IN s Scalar Value.
			 */
			Vector2(_IN float s);
			
			/**
			 * Constructor using initial values for each component.
			 *
			 * @param _IN x For X coordinate.
			 * @param _IN y For Y coordinate.
			 */
			Vector2(_IN float x, _IN float y);
			
			/**
			 * Copy Constructor using another Vector.
			 *
			 * @param _IN vec another Vector2.
			 */
			Vector2(_IN const Vector2& vec);

		public: // Printing Helpers
			
			/**
			 * Left Shift Operator.
			 *
			 * @param _IN out The Output Stream.
			 * @param _IN vec The Vector2.
			 */
			friend std::ostream& operator << (std::ostream& out, const Vector2& vec);

			/**
			 * To String Function.
			 *
			 * @return a String Like '(vec.x, vec.y)'
			 */
			std::string ToString();
		};

	} // Math Namespace

} // Neux Namespace