#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#include "version.h"	/* ESP firmware header */

#define NODE_VERSION_MAJOR	ESP_SDK_VERSION_MAJOR
#define NODE_VERSION_MINOR	ESP_SDK_VERSION_MINOR
//#define NODE_VERSION_REVISION	ESP_SDK_VERSION_PATCH
#define NODE_VERSION_REVISION	1
#define NODE_VERSION_INTERNAL   0

#define NODE_VERSION_STR(x)	#x
#define NODE_VERSION_XSTR(x)	NODE_VERSION_STR(x)

#define NODE_VERSION	"NodeMCU nodes@home_standard"

#ifndef BUILD_DATE
#define BUILD_DATE \
	"\n\tbuilt on: " __DATE__ " " __TIME__\
	"\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
