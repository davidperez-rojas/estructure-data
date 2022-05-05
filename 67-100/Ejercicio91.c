#include<stdio.h>
#include<math.h>

int main (){
    float cen, far;
    printf("Ingrese los grados en centigrados para convertilos a fahrenheit \n");
    printf("Centigrados: ");
    scanf("%f", &cen);
    far = (9/5)*(cen+32);
    printf("Sus grados en Fahrenheit son: %f F", far);
}