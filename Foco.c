# include <stdio.h>
# include <math.h>

int main()
{
    int l = 7;
    double a = 3*pow(l,2);
    double b = 3*pow(l,2)/2;
    double c = M_PI*pow(3*l/2.0,2)/2;
    double at = 2*a + 2*b + c;
    printf ("area total es: %.4f\n", at);
    double pt = 3*M_PI*l/2 + 2*sqrt( pow (3*l,2) + pow(l,2)) + pow(l,2);
    printf ("perimetro total es: %.4f\n", pt);
    return 0;

}
