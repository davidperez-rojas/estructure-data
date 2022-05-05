#include <stdio.h>

int main() {
    int num = 0;
    int i = 0;
    int fac = 1;
    printf("Ingresa un numero para calcular su factoral: ");
    scanf("%d", &num);
    
    for(i = num;i >= 1; i--){
        fac = fac * i;
    }
    
    printf("El factoral de tu numero es : %d", fac);
    return 0;
}