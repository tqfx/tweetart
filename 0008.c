#include "main.h"

color_t RD(int i, int j)
{
    return (sqrt(_sq(73. - i) + _sq(609 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(860. - i) + _sq(162 - j))) / 115.0))) + 1) / 200;
}

color_t GR(int i, int j)
{
    return (sqrt(_sq(160. - i) + _sq(60 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(86. - i) + _sq(860 - j))) / 115.0))) + 1) / 200;
}

color_t BL(int i, int j)
{
    return (sqrt(_sq(844. - i) + _sq(200 - j)) + 1) / (sqrt(fabs(sin((sqrt(_sq(250. - i) + _sq(20 - j))) / 115.0))) + 1) / 200;
}
