#include <stdio.h>
//Ejercicio 67
int main() {
    int num = 0;
    for(;;){
        printf("Igresa un numero entero o 0 para salir:");
        scanf("%d", &num);
        if(num < 0){
            printf("Lo siento no se aceptan numeros menores a cero");
            break;
        }else if(num == 0){
            break;
        }
    }
    return 0;
}