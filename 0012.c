#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    double a = 0, b = 0, d, n = 0;
    for (; a * a + (d = b * b) < 4 && n++ < 8192; b = 2 * a * b + j / 5e4 + .06, a = a * a - d + i / 5e4 + .34)
    {
    }
    return n / 4;
}

color_t GR(int i, int j)
{
    return 2 * RD(i, j);
}

color_t BL(int i, int j)
{
    return 4 * RD(i, j);
}
