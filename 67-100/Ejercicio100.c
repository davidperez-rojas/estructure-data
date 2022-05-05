#include <stdio.h>



int main()
{
    int l1, l2, l3,l4, Ar, Pe;
    printf("Ingresa todos los lados de tu caudrado. \n");
    printf("Lado 1: ");
    scanf("%d", &l1);
    printf("Lado 2: ");
    scanf("%d", &l2);
    printf("Lado 3: ");
    scanf("%d", &l3);
    printf("Lado 4: ");
    scanf("%d", &l4);
    
    if(l1 == l2 && l1 == l3 && l1 == l4 && l2 == l3 && l2 == l4 && l3 == l4){
        Ar = l1 * l2;
        printf("El area es:  %d \n", Ar);
        Pe = l1 + l2 + l3 + l4;
        printf("El perimetro es: %d", Pe);
    }else{
        printf("Las medidas de tu cuadrado no son iguales...");
    }

    return 0;
}