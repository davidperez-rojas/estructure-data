#include <stdio.h>

int main() {
    int ladoA;
    int ladoB;
    int ladoC;
    char res;
    do{
    printf("Ingresa tres valores para saber el tipo de triangulo.\n");
    printf("¿ Quieres continuar ? - (S/N)");
    scanf("%s", &res);
    if(res == 'N' || res == 'n'){
        printf("Bueno, chao... \n");
        break;
    }
    printf("Ingresa el valor del lado A: ");
    scanf("%d", &ladoA);
    printf("Ingresa el valor del lado B: ");
    scanf("%d", &ladoB);
    printf("Ingresa el valor del lado C: ");
    scanf("%d", &ladoC);
    
    if(ladoA == ladoB && ladoA == ladoC  && ladoB == ladoC){
        printf("Tu triangulo es de tipo EQUILATERO \n");
    }else if(ladoA != ladoB && ladoA != ladoC  && ladoB != ladoC){
        printf("Tu triangulo es de tipo ESCALENO \n");
    }else{
        printf("Tu triangulo es de tipo ISOSCELES \n");
    }
    }while(res == 's' || res == 'S');
    return 0;
}