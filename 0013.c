#define DM1 0xFF
#include "main.h"
#define D(x) (x - DIM / 2.) / (DIM / 2.)

color_t RD(int i, int j)
{
    float x = D(i), y = D(j), X, Y, n = 0;
    while (n++ < 200 && (X = x * x) + (Y = y * y) < 4)
    {
        x = X - Y + .36237;
        y = 2 * x * y + .32;
    }
    return log(n) * 256;
}

color_t GR(int i, int j)
{
    float x = D(i), y = D(j), X, Y, n = 0;
    while (n++ < 200 && (x * x + y * y) < 4)
    {
        X = x;
        Y = y;
        x = X * X - Y * Y + -.7;
        y = 2 * X * Y + .27015;
    }
    return log(n) * 128;
}

color_t BL(int i, int j)
{
    float x = D(i), y = D(j), X, Y, n = 0;
    while (n++ < 600 && (x * x + y * y) < 4)
    {
        X = x;
        Y = y;
        x = X * X - Y * Y + .36237;
        y = 2 * X * Y + .32;
    }
    return log(n) * 128;
}
