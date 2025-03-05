# include <stdio.h>
# include <math.h>
int main()
{
    int l = 2;
    float a = 2*l*(1.0/4*l);
    float b = l*l;
    float c = (l*l)/2;
    float d = (3.0/2*l*l)/2;
    float at = a+ b + 2*c + d ;
    float pt = sqrt(pow(3.0/2*l,2) + pow (l,2)) + 2 * sqrt(pow(l,2) + pow(l,2)) + (3.0/2*l) + 2 * (1.0/4*l) + (2*l) + l/2 + l/2;
    printf("Area total es: %.2f\n", at);
    printf("Perimetro total es; %.2f\n", pt);
    return 0;
}
