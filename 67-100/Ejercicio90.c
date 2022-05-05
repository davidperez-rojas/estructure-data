// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    int c1 = 0;
    int c2 = 0, h = 0;
    float hr;
    printf("Vamos a calcular la hipotenusa de tu triangulo rectangulo \n");
    printf("Ingresa el valor del Cateto 1: ");
    scanf("%d", &c1);
    c1 *= c1;
    printf("Ingresa el valor del Cateto 2: ");
    scanf("%d", &c2);
    c2 *= c2;
    h = c1 + c2;
    hr = sqrt(h);
    
    printf("La hipotenusa de de tu trangulo rectangulo es: %.2f", hr);
    return 0;
}