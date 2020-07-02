This code was orginally based on the ESP-IDF Gatt Server Service Table Demo.

However it has been customised for the TTGO range of boards, T-DISPLAY and T-Wristband (That looks very similar to a gotcha)

Importing the external library is used to work the display.

```shell
mkdir -p externals
git submodule add https://github.com/gameofyou/ESP32_TFT_library.git externals/ESP32_TFT_library
```

For those new to the esp-idf the following commands are useful

get_idf # alias get_idf='. $HOME/esp32/esp-idf/export.sh' 
# Use the following command to setup the TFT display
idf.py menuconfig
idf.py build
idf.py flash
idf.py monitor
