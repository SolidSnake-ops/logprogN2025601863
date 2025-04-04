#include <stdio.h>

int main() {
    int pizza;
    int ingrediente;

    printf("Quieres una pizza vegetariana o no? (1: si, 2: no)\n");
    printf("Todas las pizzas cuentan con mozzarella y tomate.\n");
    scanf("%d", &pizza);

    if (pizza == 1) {
        printf("Por favor, elige uno de los siguientes ingredientes: (1) pimiento, (2) tofu\n");
        scanf("%d", &ingrediente);

        switch (ingrediente) {
            case 1:
                printf("Usted eligio: pizza vegetariana con mozzarella, tomate y pimiento.");
                break;
            case 2:
                printf("Usted eligio: pizza vegetariana con mozzarella, tomate y tofu.");
                break;
            default:
                printf("Ingrediente no valido.");
        }
    } else {
        printf("Por favor, elige uno de los siguientes ingredientes: (1) peperoni, (2) jamon, (3) salmon\n");
        scanf("%d", &ingrediente);

        switch (ingrediente) {
            case 1:
                printf("Usted eligio: pizza con mozzarella, tomate y peperoni.");
                break;
            case 2:
                printf("Usted eligio: pizza con mozzarella, tomate y jamon.");
                break;
            case 3:
                printf("Usted eligio: pizza con mozzarella, tomate y salmon.");
                break;
            default:
                printf("Ingrediente no valido.");
        }
    }

    return 0;
}
