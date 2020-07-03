set(SOURCES "pgp_cert.c" "pgpemu.cc" "pgp_display.cc" "pgp_utils.cc" "secrets.c" "pgp_images.c")
if(EXISTS ../externals/ESP32_TFT_library)
  set(REQCOMP "bt" "tft")
else()
  set(REQCOMP "bt")
endif()

idf_component_register(SRCS ${SOURCES}
        INCLUDE_DIRS "."
        REQUIRES ${REQCOMP})
