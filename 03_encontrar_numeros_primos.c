#include <stdio.h>

int main(){
    int num;

    printf("Ingrese el número que quiere verificar si es primo o no: ");
    scanf("%d", &num);

    if (num <= 1){
        printf("El número no es primo\n");
    } else if (num == 2){
        printf("El número es primo\n");
    } else if (num %2 == 0) {
       printf("El número no es primo\n"); 
    } else {
        int ok = 1;
        
        for (int i = 3; i*i <= num; i += 2){
            if (num %i == 0){
                printf("El número no es primo\n");
                ok = 0;
                break;
            }
        }    

        if (ok) printf("El número es primo\n");
    }

    return 0;
}
