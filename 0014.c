#define DM1 0xFF
#include "main.h"
#include <time.h>
#include <stdlib.h>

#define R rand() / 16384. - 1
#define D(x) (x - DIM / 2.) / (DIM / 2.),
#define S               \
    float r = R, k = R; \
    float

color_t RD(int i, int j)
{
    static int n = 1;
    if (n)
    {
        --n;
        srand(time(0));
    }
    return _cb(i ^ j);
}

color_t GR(int i, int j)
{
    S x = D(i) y = D(j) X, Y;
    int n = 0;
    while (n++ < 200 && (X = x) * x + (Y = y) * y < 4)
    {
        x = X * X - Y * Y + r;
        y = 2 * X * Y + k;
    }
    return log(n) * 512;
}

color_t BL(int i, int j)
{
    S x = D(i) y = D(j) X, Y;
    int n = 0;
    while (n++ < 200 && (X = x) * x + (Y = y) * y < 4)
    {
        x = X * X - Y * Y + r;
        y = 2 * X * Y + k;
    }
    return log(n) * 512;
}
