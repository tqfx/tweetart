#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    float s = 3.0F / (j + 99);
    return ((int)((i + DIM) * s + j * s) % 2 + (int)((DIM * 2 - i) * s + j * s) % 2) * 127;
}

color_t GR(int i, int j)
{
    float s = 3.0F / (j + 99);
    return ((int)((i + DIM) * s + j * s) % 2 + (int)((DIM * 2 - i) * s + j * s) % 2) * 127;
}

color_t BL(int i, int j)
{
    float s = 3.0F / (j + 99);
    return ((int)((i + DIM) * s + j * s) % 2 + (int)((DIM * 2 - i) * s + j * s) % 2) * 127;
}
