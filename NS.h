
#ifndef __NS_H__
#define __NS_H__

#include <stdio.h>

void func1 ( void );
int func2( char *word );

struct NS_namespace
{
  void (*func1) ( void );
  int  (*func2) ( char* );
};

static const struct NS_namespace NS = { &func1, 
					&func2 };

#endif /* __NS_H__ */
