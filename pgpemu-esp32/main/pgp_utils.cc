/*
 * Copyright 2020 James Hawtin oolon@ankh.org
 */

#include <stdint.h>

void zero(uint8_t *value, int size)
{
  int count;
  for (count=0;count<size;++count)
    value[count]=0;
}
