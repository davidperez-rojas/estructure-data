#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int cua, num;
    
    printf("Ingresa un numero para calcular la potencia al cuadrado y revisar que no se pase del rango. \n");
    printf("Numero: ");
    scanf("%d", &num);
    num *= num;
    if(num <= 49){
        printf("El cuadrado de tu numero es: %d", num);
    }else{
        printf("La potencia de tu numero rebasa el rango...");
    }
    return 0;
}