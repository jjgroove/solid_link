// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers



// TODO: reference additional headers your program requires here
#include	<windows.h>
#include	<string>
#include	<vector>
#include	<list>


/** global*/
#include	"type_defined.h"

#pragma warning(push)
#pragma warning(disable : 4996)
#include	<boost/asio.hpp>
#pragma warning(pop)