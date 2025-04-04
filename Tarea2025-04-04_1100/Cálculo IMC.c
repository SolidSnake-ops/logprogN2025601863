#include <stdio.h>
#include <math.h>

int main() {
    float kg, m, iMC;

    printf( "Introduce tu peso\n" );
    scanf("%f",&kg);
    printf( "Introduce tu altura (ejemplo: 1.80, 1.50)\n" );
    scanf ("%f",&m);
    iMC = kg / pow(m, 2);
    if (iMC >= 40.0) {
        printf( "Obesidad clase 3" );
    } else {
        if (iMC >= 35.0) {
            printf( "Obesidad clase 2" );
        } else {
            if (iMC >= 30.0) {
                printf( "Obesidad clase 1" );
            } else {
                if (iMC >= 25.0) {
                    printf( "Sobrepeso" );
                } else {
                    if (iMC >= 18.5) {
                        printf( "Saludable" );
                    } else {
                        if (iMC <= 18.4 && iMC >= 12.0) {
                            printf( "Bajo peso" );
                        } else {
                            printf( "IMC fuera de rango lógico" );
                        }
                    }
                }
            }
        }
    }
    return 0;
}
