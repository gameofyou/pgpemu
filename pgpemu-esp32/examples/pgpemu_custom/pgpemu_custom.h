#ifndef __pgpemu_custom_h__
#define __pgpemu_custom_h__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern uint8_t my_jpg[];
extern unsigned int my_jpg_len;

#define PGPEMU_SPLASH     my_jpg
#define PGPEMU_SPLASH_LEN my_jpg_len

#ifdef __cplusplus
}
#endif

#endif /* __pgpemu_custom_h__ */
