#include <stdio.h>



int main()
{
// Calcular el promedio de n números
int n, suma = 0;
printf("Ingrese cantidad de notas: ");
scanf("%d", &n);

int notas[n];
for (int i = 0; i < n; i++) {
printf("Ingrese nota No. %d: ", (i+1));
scanf("%d", &notas[i]);
suma += notas[i];
}

float prom = suma / n;
printf("El promedio es: %.2f", prom);
return 0;
}