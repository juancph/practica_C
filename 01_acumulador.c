#include <stdio.h>

int main(void) {
    char op = 'n';
    int num = 0;

    while (op != 's') {
        printf("Ingrese 'i' para incrementar, 'd' para decrementar, 's' para salir: ");
        scanf(" %c", &op);

        if (op == 'i') {
            num = num + 1;
        } else if (op == 'd') {
            num = num - 1;
        }

        printf("Contador: %d\n", num);
    }

    return 0;
}
