#include <stdio.h>

int main(){
    int longitud;
    char icon;

    printf("Ingrese el caracter por el que quiere que esté formado la pirámide: ");
    scanf(" %c", &icon);

    printf("Ingrese la altura que quiere que tenga: ");
    scanf("%d", &longitud);
    while (longitud < 1){
        printf("La longitud debe ser mayor a 0. Intente nuevamente: ");
        scanf("%d", &longitud);
    }

    for (int i = 0; i < longitud; i++){
        for (int j = 0; j <= i; j++){
            printf("%c", icon);
        }
        printf("\n");
    }
    return 0;
}
