/***********************************************************************
*                                                                      *
*               This software is part of the ast package               *
*          Copyright (c) 1985-2011 AT&T Intellectual Property          *
*                      and is licensed under the                       *
*                 Eclipse Public License, Version 1.0                  *
*                    by AT&T Intellectual Property                     *
*                                                                      *
*                A copy of the License is available at                 *
*          http://www.eclipse.org/org/documents/epl-v10.html           *
*         (with md5 checksum b35adb5213ca9657e911e9befb180842)         *
*                                                                      *
*              Information and Software Systems Research               *
*                            AT&T Research                             *
*                           Florham Park NJ                            *
*                                                                      *
*                 Glenn Fowler <gsf@research.att.com>                  *
*                  David Korn <dgk@research.att.com>                   *
*                   Phong Vo <kpv@research.att.com>                    *
*                                                                      *
***********************************************************************/
#pragma prototyped

#include <ast.h>

#if _lib_strrchr

NoN(strrchr)

#else

#undef	strrchr

#if _lib_rindex

#undef	rindex

extern char*	rindex(const char*, int);

char*
strrchr(const char* s, int c)
{
	return(rindex(s, c));
}

#else

char*
strrchr(register const char* s, register int c)
{
	register const char*	r;

	r = 0;
	do if (*s == c) r = s; while(*s++);
	return((char*)r);
}

#endif

#endif
