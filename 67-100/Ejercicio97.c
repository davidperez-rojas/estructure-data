#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int hip, c1, c2;
    float res;
    
    printf("Vamos a calcular el cateto de tu triangulo rectangulo \n");
    printf("Ingresa el valor de la Hipotenusa: ");
    scanf("%d", &hip);
    hip *= hip;
    printf("Ingresa el valor del cateto: ");
    scanf("%d", &c1);
    c1 *= c1;
    c2 = hip - c1;
    res = sqrt(c2);
    printf("El valor de su cateto es de : %.0f", res);
    return 0;
}