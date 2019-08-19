/*********************************************************************************/
/*  Log.h                                                                        */
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
#include <memory>

#include <spdlog/spdlog.h> // spdlog Logging Library

namespace Neux
{
















	class Log
	{
	private: // Private Variables
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public: // Getters
		static std::shared_ptr<spdlog::logger>& getCoreLogger  () { return s_CoreLogger; }
		static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }

	public: // Public Methods
		static void Init();

	};

	// Allow the Core Logger to Be Usable Only by the Engine
	// Preventing the Client from Using the Core Logger
	#ifdef NEUX_ENGINE
		#define CORE_LOG_TRACE(...)        Neux::Log::getCoreLogger()->trace(__VA_ARGS__);
		#define CORE_LOG_INFO(...)         Neux::Log::getCoreLogger()->info(__VA_ARGS__);
		#define CORE_LOG_WARN(...)         Neux::Log::getCoreLogger()->warn(__VA_ARGS__);
		#define CORE_LOG_ERROR(...)        Neux::Log::getCoreLogger()->error(__VA_ARGS__);
		#define CORE_LOG_CRITICAL(...)     Neux::Log::getCoreLogger()->critical(__VA_ARGS__);
	#endif
	
		#define LOG_TRACE(...)             Neux::Log::getClientLogger()->trace(__VA_ARGS__);
		#define LOG_INFO(...)              Neux::Log::getClientLogger()->info(__VA_ARGS__);
		#define LOG_WARN(...)              Neux::Log::getClientLogger()->warn(__VA_ARGS__);
		#define LOG_ERROR(...)             Neux::Log::getClientLogger()->error(__VA_ARGS__);
		#define LOG_CRITICAL(...)          Neux::Log::getClientLogger()->critical(__VA_ARGS__);

} // Neux Namespace