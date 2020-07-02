set(SOURCES "pgp_cert.c" "pgpemu.c" "pgp_display.c" "secrets.c" "pgp_images.c")

idf_component_register(SRCS ${SOURCES}
        INCLUDE_DIRS "."
        REQUIRES
            tft
            bt)
