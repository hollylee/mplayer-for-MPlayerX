/*
 * Modified for use with MPlayer, detailed changelog at
 * http://svn.mplayerhq.hu/mplayer/trunk/
 */

#ifndef LOADER_EXT_H
#define LOADER_EXT_H

#include "wine/windef.h"

extern LPVOID FILE_dommap( int unix_handle, LPVOID start,
			   DWORD size_high, DWORD size_low,
			   DWORD offset_high, DWORD offset_low,
			   int prot, int flags );
extern int FILE_munmap( LPVOID start, DWORD size_high, DWORD size_low );
extern int wcsnicmp(const unsigned short* s1, const unsigned short* s2, int n);
extern int __vprintf( const char *format, ... );

#endif /* LOADER_EXT_H */
