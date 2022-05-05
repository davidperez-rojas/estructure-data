#include <stdio.h>

int main() {
    int cantidadV = 0;
    int ToCantidad = 0;
    float precio = 0;
    float TotPrecio = 0;
    
    do{
    printf("Introduzca la cantidad vendida: ");
    scanf("%d", &cantidadV);
    ToCantidad += cantidadV;
    printf("Introduzca el precio : ");
    scanf("%f", &precio);
    TotPrecio += precio;
    printf("-------------------------- \n");
    }while(cantidadV != 0 && precio != 0);
    
    printf("El total de la cantidad vendida es de %d y el total del precion es de %f",ToCantidad, TotPrecio );
    return 0;
}