#ifndef __pgp_images_h__
#define __pgp_images_h__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "sdkconfig.h"

#ifdef CONFIG_PGPEMU_CUSTOM
#include "pgpemu_custom.h"
#else
extern uint8_t pgpemu_jpg[];
extern unsigned int pgpemu_jpg_len;
#define PGPEMU_SPLASH     pgpemu_jpg
#define PGPEMU_SPLASH_LEN pgpemu_jpg_len
#endif

#ifdef __cplusplus
}
#endif

#endif /* __pgp_images_h__ */
