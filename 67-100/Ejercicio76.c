#include <stdio.h>

void mostrar(int v[]) {
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");
}

int CalMayor(int v[]){
    int max = 0;
    int i = 0;
    for(i= 0;i<10; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int main() {
    int i = 0;
    int list[10];
    for(i = 0; i < 10;i++){
        printf("Ingresa los 10 numeros para saber cual es el mayor:");
        scanf("%d", &list[i]);
        
    }
    printf("Los numeros que diste fueron: \n");
    mostrar(list);
    printf("El numero mayor es el %d", CalMayor(list));
    return 0;
}