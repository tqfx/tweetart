#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    double a = 0, b = 0, c, d, n = 0;
    while ((c = a * a) + (d = b * b) < 4 && n++ < 880)
    {
        b = 2 * a * b + j * 8e-9 - .645411;
        a = c - d + i * 8e-9 + .356888;
    }
    return 255 * pow((n - 80) / 800, 3.);
}

color_t GR(int i, int j)
{
    double a = 0, b = 0, c, d, n = 0;
    while ((c = a * a) + (d = b * b) < 4 && n++ < 880)
    {
        b = 2 * a * b + j * 8e-9 - .645411;
        a = c - d + i * 8e-9 + .356888;
    }
    return 255 * pow((n - 80) / 800, .7);
}

color_t BL(int i, int j)
{
    double a = 0, b = 0, c, d, n = 0;
    while ((c = a * a) + (d = b * b) < 4 && n++ < 880)
    {
        b = 2 * a * b + j * 8e-9 - .645411;
        a = c - d + i * 8e-9 + .356888;
    }
    return 255 * pow((n - 80) / 800, .5);
}
