#include <stdio.h>

int main() {
    int num = 0;
    int t = 0;
    
    printf("Ingresa un numero para calcular la sucesíon: ");
    scanf("%d", &num);
    int sus1 = num - 1;
    int sus2 = num - 2;
    
    if(num == 1){
        t = 1;
    }else if(num == 2){
        t =  2;
    }else{
        t = sus1 + sus2;
    }
    printf("El valor de la sicesion de tu numero es: %d", t);
     
    return 0;
}