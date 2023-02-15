#define DIM 1024
#if !defined DM1
#define DM1 (DIM - 1)
#endif /* DM1 */
#if DM1 + 0 < 0x100
#define color_t unsigned char
#else /* !DM1 */
#define color_t unsigned short
#endif /* DM1 */

#include <math.h>
#define _sq(x) ((x) * (x)) // square
#define _cb(x) abs((x) * (x) * (x)) // absolute value of cube
#define _cr(x) (unsigned short)(pow((x), 1.0 / 3.0)) // cube root

color_t RD(int, int);
color_t GR(int, int);
color_t BL(int, int);

#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[argc - 1], "wb");
    fprintf(fp, "P6\n%d %d\n%d\n", DIM, DIM, DM1);
    for (int j = 0; j < DIM; ++j)
    {
        for (int i = 0; i < DIM; ++i)
        {
            color_t color[3];
            color[0] = RD(i, j) & DM1;
            color[1] = GR(i, j) & DM1;
            color[2] = BL(i, j) & DM1;
            fwrite(color, sizeof(*color), sizeof(color) / sizeof(*color), fp);
        }
    }
    fclose(fp);
    return 0;
}
