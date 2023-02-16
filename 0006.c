#define DM1 0xFF
#include "main.h"
#define P 6.03

color_t RD(int i, int j)
{
    float s = 3. / (j + 250), y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM + P) * 15) * s;
    return ((int)((i + DIM) * s + y) % 2 + (int)((DIM * 2 - i) * s + y) % 2) * 127;
}

color_t GR(int i, int j)
{
    float s = 3. / (j + 250);
    float y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM + P) * 15) * s;
    return ((int)(5 * ((i + DIM) * s + y)) % 2 + (int)(5 * ((DIM * 2 - i) * s + y)) % 2) * 127;
}

color_t BL(int i, int j)
{
    float s = 3. / (j + 250);
    float y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM + P) * 15) * s;
    return ((int)(29 * ((i + DIM) * s + y)) % 2 + (int)(29 * ((DIM * 2 - i) * s + y)) % 2) * 127;
}
