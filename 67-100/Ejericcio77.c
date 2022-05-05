#include <stdio.h>

int main() {
    int tam = 0;
    printf("Ingresa un el tamaño del cuadrado: ");
    scanf("%d", &tam);
    //printf("\n");
    for(int i = 1;i<=tam; i++){
        for(int col = 1;col<=tam;col++){
            if(i == 1 || i == tam || col == 1 || col == tam){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}