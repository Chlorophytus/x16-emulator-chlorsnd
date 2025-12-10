// ChlorSND DSP
// Copyright (c) 2025 Roland Metivier
// All rights reserved. License: 3-clause BSD

#ifndef _CHLORSND_H_
#define _CHLORSND_H_

#include <stdint.h>

#define CHLORSND_SAMPLE_MEMORY 32768
#define CHLORSND_ENVG_MEMORY_OFFSET 128
#define CHLORSND_ENVG_MEMORY 128

void chlorsnd_init();
uint8_t chlorsnd_peek(uint16_t reg);
void chlorsnd_poke(uint16_t reg, uint8_t value);
void chlorsnd_render(int16_t *stereo_buffer, uint32_t samples);
void chlorsnd_destroy();

#endif