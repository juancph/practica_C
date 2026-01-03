#include <stdio.h>

int main(){
    int intentos = 10, num_usr, num = 8;

    while (intentos > 0){
        printf("Te quedan %d intentos\n", intentos);
        printf("Ingresa un número entero entre 1 y 100: ");
        scanf("%d", &num_usr);

        while (num_usr < 1 || num_usr > 100){
            printf("Error: El número debe estar en el rango de 1-100\nIntente nuevamente: ");
            scanf("%d", &num_usr);
        }

        if (num_usr < num){
            printf("Bajo\n");
        }else if (num_usr > num){
            printf("Alto\n");
        }else{
            printf("Correcto\n");
            break;
        }

        intentos = intentos - 1;

    }

    if (num_usr != num){printf("El número era el %d\n", num);}

    return 0;
}
