#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    float s = 3. / (j + 99);
    float y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM) * 35) * s;
    return ((int)((i + DIM) * s + y) % 2 + (int)((DIM * 2 - i) * s + y) % 2) * 127;
}

color_t GR(int i, int j)
{
    float s = 3. / (j + 99);
    float y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM) * 35) * s;
    return ((int)((i + DIM) * s + y) % 2 + (int)((DIM * 2 - i) * s + y) % 2) * 127;
}

color_t BL(int i, int j)
{
    float s = 3. / (j + 99);
    float y = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM) * 35) * s;
    return ((int)((i + DIM) * s + y) % 2 + (int)((DIM * 2 - i) * s + y) % 2) * 127;
}
