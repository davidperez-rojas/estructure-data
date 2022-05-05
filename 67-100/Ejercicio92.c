#include<stdio.h>
#include<math.h>

int main (){
    int n1, n2,n3,res, c;
    printf("Ingresa 3 numeros para saber cual es el mayor. \n");
    printf("Num 1: ");
    scanf("%d", &n1);
    printf("Num 2: ");
    scanf("%d", &n2);
    printf("Num 3: ");
    scanf("%d", &n3);
        
    
    if(n1 < 0 || n2 < 0 || n3 < 0){
        printf("Solo aceptamos numeros positivos...");
    }else{
        if(n1 >= n2 & n1 >= n3){
             printf("El numero mayor es el %d", n1);
        }else if(n2 >= n1 & n2 >= n3){
             printf("El numero mayor es el %d", n2);  
        }else if(n3 >= n1 & n3 >= n2){
             printf("El numero mayor es el %d", n3);  
        }
    }
    
}