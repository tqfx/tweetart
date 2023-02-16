#define DM1 0xFF
#include "main.h"
#include <stdlib.h>

color_t RD(int i, int j)
{
    int a = (j ? i % j : i) * 4;
    int b = i - 32;
    int c = j - 32;
    return _sq(abs(i - 512)) + _sq(abs(j - 512)) > _sq(384) ? a : (int)(sqrt((b + c) / 2)) ^ _cb((b - c) * 2);
}

color_t GR(int i, int j)
{
    int a = (j ? i % j : i) * 4;
    return _sq(abs(i - 512)) + _sq(abs(j - 512)) > _sq(384) ? a : (int)(sqrt((i + j) / 2)) ^ _cb((i - j) * 2);
}

color_t BL(int i, int j)
{
    int a = (j ? i % j : i) * 4;
    int b = i + 32;
    int c = j + 32;
    return _sq(abs(i - 512)) + _sq(abs(j - 512)) > _sq(384) ? a : (int)(sqrt((b + c) / 2)) ^ _cb((b - c) * 2);
}
