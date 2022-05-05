#include <stdio.h>

int main() {
    int i = 0;
    printf("Multiplos de 3... \n");
    for(i = 1;i<=3000;i++){
        if(i%3 == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}