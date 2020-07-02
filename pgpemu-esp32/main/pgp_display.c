/*
 * Copyright 2020 James Hawtin oolon@ankh.org
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "sdkconfig.h"
#ifdef CONFIG_TFT_PREDEFINED_DISPLAY_TYPE
#include "tftspi.h"
#include "tft.h"

#include "pgp_display.h"
#include "pgp_images.h"

#define SPI_BUS TFT_HSPI_HOST

void pgp_display_init(void)
{
  esp_err_t ret;
  spi_lobo_device_handle_t spi;

  tft_max_rdclock = 8000000;
  TFT_PinsInit();

  spi_lobo_bus_config_t buscfg={
        .miso_io_num=PIN_NUM_MISO,                              // set SPI MISO pin
        .mosi_io_num=PIN_NUM_MOSI,                              // set SPI MOSI pin
        .sclk_io_num=PIN_NUM_CLK,                               // set SPI CLK pin
        .quadwp_io_num=-1,
        .quadhd_io_num=-1,
                .max_transfer_sz = 6*1024,
  };
  spi_lobo_device_interface_config_t devcfg={
        .clock_speed_hz=8000000,                // Initial clock out at 8 MHz
        .mode=0,                                // SPI mode 0
        .spics_io_num=-1,                       // we will use external CS pin
                .spics_ext_io_num=PIN_NUM_CS,           // external CS pin
                .flags=LB_SPI_DEVICE_HALFDUPLEX,        // ALWAYS SET  to HALF DUPLEX MODE!! for display spi
  };
  vTaskDelay(500 / portTICK_RATE_MS);
  ret=spi_lobo_bus_add_device(SPI_BUS, &buscfg, &devcfg, &spi);
  assert(ret==ESP_OK);
  printf("SPI: display device added to spi bus (%d)\r\n", SPI_BUS);
  tft_disp_spi = spi;
  TFT_display_init();
  TFT_setRotation(3);
#ifdef TFT_START_COLORS_INVERTED
        TFT_invertDisplay(1);
#endif



//  vfs_spiffs_register();
/*
        color_t color;
        color.r  = 252;
        color.g  = 0;
        color.b  = 0;

        int x, y, w, h ;
              x = 0;
                y = 0;
                w = 100;
                h = 100;
         TFT_fillRect(x,y,w,h,color);
*/
    TFT_jpg_image(CENTER, CENTER, 0, NULL, PGPEMU_SPLASH, PGPEMU_SPLASH_LEN);
   tft_fg = TFT_CYAN;
//TFT_print("Time is not set yet", CENTER, CENTER);

}
#else

void pgp_display_init(void)
{

}

#endif
