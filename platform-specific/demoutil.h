
#ifndef __DEMOUTIL_H__
#define __DEMOUTIL_H__

#include <stdio.h>

void dmutil_sunrise ( void );
void dmutil_sunset  ( void );

struct DemoUtil_namespace
{
  void (*sunrise) ( void );
  void (*sunset)  ( void );
};

static const struct DemoUtil_namespace DemoUtil = { &dmutil_sunrise,
						    &dmutil_sunset };

#endif /* __DEMOUTIL_H__ */
