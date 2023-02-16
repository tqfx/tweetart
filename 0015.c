#define DM1 0xFF
#include "main.h"
#include <stdlib.h>

color_t RD(int i, int j)
{
    (void)i;
    (void)j;
    static double k;
    k += rand() / 1. / RAND_MAX;
    int l = k;
    l %= 512;
    return l > 255 ? 511 - l : l;
}

color_t GR(int i, int j)
{
    (void)i;
    (void)j;
    static double k;
    k += rand() / 1. / RAND_MAX;
    int l = k;
    l %= 512;
    return l > 255 ? 511 - l : l;
}

color_t BL(int i, int j)
{
    (void)i;
    (void)j;
    static double k;
    k += rand() / 1. / RAND_MAX;
    int l = k;
    l %= 512;
    return l > 255 ? 511 - l : l;
}
