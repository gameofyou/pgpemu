set(SOURCES "pgp_cert.c" "pgpemu.c" "pgp_display.c" "secrets.c" "pgp_images.c")
set(REQCOMP "bt")
if(CONFIG_TFT_PREDEFINED_DISPLAY_TYPE)
     list(APPEND REQCOMP "tft")
endif()

idf_component_register(SRCS ${SOURCES}
        INCLUDE_DIRS "."
        REQUIRES ${REQCOMP})
