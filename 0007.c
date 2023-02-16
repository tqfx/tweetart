#define DM1 0xFF
#include "main.h"
#include <stdlib.h>
#define r(n) (rand() % n)

color_t RD(int i, int j)
{
    static char c[1024][1024];
    return !c[i][j] ? c[i][j] = !r(999) ? r(256) : RD((i + r(2)) % 1024, (j + r(2)) % 1024) : c[i][j];
}

color_t GR(int i, int j)
{
    static char c[1024][1024];
    return !c[i][j] ? c[i][j] = !r(999) ? r(256) : GR((i + r(2)) % 1024, (j + r(2)) % 1024) : c[i][j];
}

color_t BL(int i, int j)
{
    static char c[1024][1024];
    return !c[i][j] ? c[i][j] = !r(999) ? r(256) : BL((i + r(2)) % 1024, (j + r(2)) % 1024) : c[i][j];
}
