#include "main.h"

color_t RD(int i, int j)
{
    return (sqrt(_sq(148. - i) + _sq(1000 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(500. - i) + _sq(400 - j))) / 115.0))) + 1) / 200;
}

color_t GR(int i, int j)
{
    return (sqrt(_sq(610. - i) + _sq(60 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(864. - i) + _sq(860 - j))) / 115.0))) + 1) / 200;
}

color_t BL(int i, int j)
{
    return (sqrt(_sq(180. - i) + _sq(100 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(503. - i) + _sq(103 - j))) / 115.0))) + 1) / 200;
}
