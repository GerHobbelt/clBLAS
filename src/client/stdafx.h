/* ************************************************************************
 * Copyright 2013 Advanced Micro Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ************************************************************************/


// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <complex>
#include <valarray>
#include <stdarg.h>
#if defined( _WIN32 )
	#define NOMINMAX
	//#define WIN32_LEAN_AND_MEAN			// Exclude rarely-used stuff from Windows headers

	#include <tchar.h>
	#include <windows.h>
#endif

