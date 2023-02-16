#include "main.h"

color_t RD(int i, int j)
{
    return i && j ? (i % j) & (j % i) : 0;
}

color_t GR(int i, int j)
{
    return i && j ? (i % j) + (j % i) : 0;
}

color_t BL(int i, int j)
{
    return i && j ? (i % j) | (j % i) : 0;
}
