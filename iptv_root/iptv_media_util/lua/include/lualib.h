/*
** $Id: lualib.h 349 2005-09-24 22:52:00Z dario $
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef lualib_h
#define lualib_h

#include "lua.h"


#ifndef LUALIB_API
#define LUALIB_API	extern
#endif


#define LUA_ALERT               "_ALERT"

LUALIB_API void lua_baselibopen (lua_State *L);
LUALIB_API void lua_iolibopen (lua_State *L);
LUALIB_API void lua_strlibopen (lua_State *L);
LUALIB_API void lua_mathlibopen (lua_State *L);
LUALIB_API void lua_dblibopen (lua_State *L);



/* Auxiliary functions (private) */

const char *luaI_classend (lua_State *L, const char *p);
int luaI_singlematch (int c, const char *p, const char *ep);

#endif
