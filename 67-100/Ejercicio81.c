#include <stdio.h>

int main() {
    
	int i,j,tam,k,p;
	printf("Ingresa en tamanio del triangulo: ");
	scanf("%d",&tam);
	
	k = tam;// dimension
	p = tam;//dimension
	
	for(i = 1;i<=tam;i++){
	    for(j = 1;j<=2*tam-1;j++){
	        if(j == k || j== p){
	            printf("*");
	        }else{
	            if(i == tam){
	                printf("*");
	            }else{
	                printf(" ");
	            }
	        }
	    }
	    k++;
	    p--;
	    printf("\n");
	}
    return 0;
}