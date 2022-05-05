#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int multi = 0;
    
    for(i = 1; i <= 15; i++){
        for(j = 1; j <= 10; j++){
            multi = i * j;
            
            printf("- %d x %d = %d \n", i,j,multi);
        }
        printf("---------------- \n");
    }
    return 0;
}