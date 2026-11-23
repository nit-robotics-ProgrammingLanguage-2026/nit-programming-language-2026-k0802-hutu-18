#include <stdio.h>
#include <math.h>

void calc_trig(double deg, double *s, double *c, double *t);

int main(void)
{
    double deg;
    double s, c, t;
    scanf("%lf", &deg);
    calc_trig(deg, &s, &c, &t); /* TODO: calc_trig を呼び出して s, c, t に結果を格納 */

    printf("%.4f,%.4f,%.4f", s, c, t);
    return 0;
}

void calc_trig(double deg, double *s, double *c, double *t)
{
     double rad;

    rad = deg * M_PI / 180.0;

    *s = sin(rad);
    *c = cos(rad);
    *t = tan(rad);/* TODO: deg(度) をラジアンに直し、*s, *c, *t にそれぞれ代入する */
}
