#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    float x = 0, y = 0;
    int k;
    for (k = 0; k++ < 256;)
    {
        float a = x * x - y * y + (i - 768.0) / 512;
        y = 2 * x * y + (j - 512.0) / 512;
        x = a;
        if (x * x + y * y > 4)
        {
            break;
        }
    }
    return k > 31 ? (color_t)256 : k * 8;
}

color_t GR(int i, int j)
{
    float x = 0, y = 0;
    int k;
    for (k = 0; k++ < 256;)
    {
        float a = x * x - y * y + (i - 768.0) / 512;
        y = 2 * x * y + (j - 512.0) / 512;
        x = a;
        if (x * x + y * y > 4)
        {
            break;
        }
    }
    return k > 63 ? (color_t)256 : k * 4;
}

color_t BL(int i, int j)
{
    float x = 0, y = 0;
    int k;
    for (k = 0; k++ < 256;)
    {
        float a = x * x - y * y + (i - 768.0) / 512;
        y = 2 * x * y + (j - 512.0) / 512;
        x = a;
        if (x * x + y * y > 4)
        {
            break;
        }
    }
    return k;
}
