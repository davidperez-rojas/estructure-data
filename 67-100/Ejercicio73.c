#include <stdio.h>


void mostrar(int v[]) {
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");
}
int CalMedia(int v[]){
    int sum = 0;
    int med = 0;
    int i = 0;
    for(i = 0;i<10;i++){
       sum += v[i]; 
    }
    med = sum/(sizeof(v)/sizeof(v[0]));
    
    return med;
}

int main() {
    int i = 0;
    int num[10];
    for(i = 0; i < 10;i++){
        printf("Ingresa los 10 numeros que quieras para sacar la media: \n");
        printf("o ingresa un 0 para salir: ");
        scanf("%d", &num[i]);
        
    }
    
    printf("Los numeros que ingresaste fueron: \n");
    mostrar(num);
    printf("Y la media es de: %d",CalMedia(num));

    return 0;
}