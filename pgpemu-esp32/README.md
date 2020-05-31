This code was orginally based on the ESP-IDF Gatt Server Service Table Demo.

However it has been customised for the Heltec - Makerhawk ESP32 Wifi which is
a cheap board with an integrated 128x64 OLED display i2c connected ssd1306
display.

https://www.amazon.co.uk/MakerHawk-Development-0-96inch-Display-Compatible/dp/B076P8GRWV/ref=psdc_430512031_t1_B076T28KWG

A few key facts about this board,

Board uses a 26 Mhz Crystal not a 40
CONFIG_ESP32_XTAL_FREQ_26=y
CONFIG_ESP32_XTAL_FREQ=26

OLED information
128x64
I2C speed 700000
SCL_PIN 15
SDA_PIN 4
RESET pin 16
(Must be set low then high to turn on)

The following component library required to drive the display

https://github.com/TaraHoleInIt/tarablessd1306

Put this in the esp-idf components direction ($HOME/esp32/esp-idf/components)

For those new to the esp-idf the following commands are useful

get_idf # alias get_idf='. $HOME/esp32/esp-idf/export.sh' 
idf.py menuconfig
idf.py build
idf.py flash
idf.py monitor