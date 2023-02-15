#include "main.h"

color_t RD(int i, int j)
{
    return (color_t)sqrt((double)(_sq(i - DIM / 2) * _sq(j - DIM / 2)) * 2.0);
}

color_t GR(int i, int j)
{
    return (color_t)sqrt((double)((_sq(i - DIM / 2) | _sq(j - DIM / 2)) *
                                  (_sq(i - DIM / 2) & _sq(j - DIM / 2))));
}

color_t BL(int i, int j)
{
    return (color_t)sqrt((double)(_sq(i - DIM / 2) & _sq(j - DIM / 2)) * 2.0);
}
