#ifndef __pgp_images_h__
#define __pgp_images_h__

#include <stdint.h>

#include "sdkconfig.h"

#ifdef PGPEMU_CUSTOM
#include <pgpemu_custom.h>
#else
extern uint8_t pgpemu_jpg[];
unsigned int pgpemu_jpg_len;
#define PGPEMU_SPLASH     pgpemu_jpg
#define PGPEMU_SPLASH_LEN pgpemu_jpg_len
#endif

#endif
