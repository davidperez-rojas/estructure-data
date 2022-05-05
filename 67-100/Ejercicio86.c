// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int res;
    do{
        printf("1. Salir\n2. Sumatorio\n3. Factoral\n");
        printf("Elige una opcion: ");
        scanf("%d", &res);
        printf("---------------------- \n");
        if(res == 2){
            int  mul,sum,num;
            printf("Ingresa el numero para realizar la sumatoria: ");
            scanf("%d", &num);
            printf("Ahora ingresa el numero de veces que lo quieres sumar: ");
            scanf("%d", &sum);
            mul = num * sum;
            printf("La sumatoria de tu numero es %d  \n", mul);
            printf("----------------------------- \n");
        }else if(res == 3){
            int num = 0;
            int i = 0;
            int fac = 1;
            printf("Ingresa un numero para calcular su factoral: ");
            scanf("%d", &num);
            
            for(i = num;i >= 1; i--){
                fac = fac * i;
            }
            printf("El factoral de tu numero es : %d \n", fac);
            printf("----------------------------- \n");
        }else{
            if(res == 1){
                printf("ok, chao....");
                break;
            }else{
                printf("----------------------------- \n");
                printf("Esta opcion no esta valida... \n");
                printf("----------------------------- \n");
            }
        }
        
    }while(res != 1);
    return 0;
}