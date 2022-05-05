#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <time.h>


int main () {
      
    float notas[10] = {3.4,5.0,4.5,4.3,4.2, 3.2, 4.5, 5.0, 2.3, 4.3};
    float prom,sum;
    int i = 0;
    
    for(i = 0;i < 10;i++){
        sum += notas[i];
    }
    prom = sum / 10;
    
    printf("El promedio de las notas de computacion es de %.1f", sum);
    
    return 0;
}