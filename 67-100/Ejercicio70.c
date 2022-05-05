#include <stdio.h>

int main() {
    int ladoA;
    int ladoB;
    int ladoC;
    printf("Ingresa el valor del lado A: ");
    scanf("%d", &ladoA);
    printf("Ingresa el valor del lado B: ");
    scanf("%d", &ladoB);
    printf("Ingresa el valor del lado C: ");
    scanf("%d", &ladoC);
    
    if(ladoA == ladoB && ladoA == ladoC  && ladoB == ladoC){
        printf("Tu triangulo es de tipo EQUILATERO");
    }else if(ladoA != ladoB && ladoA != ladoC  && ladoB != ladoC){
        printf("Tu triangulo es de tipo ESCALENO");
    }else{
        printf("Tu triangulo es de tipo ISOSCELES");
    }
    return 0;
}