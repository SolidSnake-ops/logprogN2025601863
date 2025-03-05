# include <stdio.h>
# include <math.h>

int main()
{
    int l = 7;
    double a = pow(l,2);
    double b = ((1.0/5)*l)*((3.0/5)*l);
    double c = pow((1.0/5)*l,2);
    double pt = ((23.0/5)*l) + (3.1416*l)/2;
    double at = a + 2*b + 2*c + (3.1416 * ((l*l)/(2*2)) )/2;
    printf("Perimetro total es: %.4f\n", pt);
    printf("area total es: %.4f\n", at);
    return 0;
}
