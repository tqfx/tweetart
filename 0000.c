#define DM1 0xFF
#include "main.h"

color_t RD(int i, int j)
{
    return (color_t)(_sq(cos(atan2(j - 0x200, i - 0x200) / 2)) * 0xFF);
}

color_t GR(int i, int j)
{
    return (color_t)(_sq(cos(atan2(j - 0x200, i - 0x200) / 2 - 2 * acos(-1) / 3)) * 0xFF);
}

color_t BL(int i, int j)
{
    return (color_t)(_sq(cos(atan2(j - 0x200, i - 0x200) / 2 + 2 * acos(-1) / 3)) * 0xFF);
}
