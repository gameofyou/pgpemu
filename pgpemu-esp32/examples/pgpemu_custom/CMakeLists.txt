set(SOURCES my_images.c  my_secrets.c)
idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS ".")

