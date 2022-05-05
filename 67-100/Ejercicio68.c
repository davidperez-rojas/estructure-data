#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    int cont = 0;
    do{
        printf("Ingesa 8 numero para realizar la suma: ");
        scanf("%d",&num);
        sum += num;
        cont += 1;
        if(cont == 8){
            break;
        }else if(num < 0){
            printf("No se aceptan numeros menores a 0 \n");
            sum = 0;
            break;
        }
    }while(num != 0);
    
    printf("La suma de los numeros es de %d", sum);
    return 0;
}