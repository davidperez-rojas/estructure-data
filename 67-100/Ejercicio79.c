#include <stdio.h>

int main() {
    int horas = 0;
    char res;
    int sueldo = 0;
    do{
    printf("Vamos a calcular tu salario del dia, dimos cuantas horas trabajaste: ");
    scanf("%d", &horas);
    if(horas > 35){
        sueldo = (horas - 35)*22 + 35*15;
    }else{
        sueldo = horas * 15;
    }
    printf("Tu sueldo total con base a tus horas es de: %d USD $\n ", sueldo);
    printf("-------------------------- \n");
    printf("Quieres calcular otro sueldo ? (S/N)");
    scanf("%s", &res);
    }while(res == 'S' || res == 's');
    
    
    return 0;
}