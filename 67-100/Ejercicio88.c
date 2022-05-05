#include <stdio.h>

int main() {
    int h,r;
    float AreBase = 3.1416, v;
    
    printf("Ingresa la altura y el radio de tu cilindro \n");
    printf("Altura: ");
    scanf("%d", &h);
    printf("Radio: ");
    scanf("%d", &r);
    r = r * r;
    AreBase *= r;
    v = AreBase * h;
    printf("El volumen de tu cilindro es: %.1f cm", v);
    return 0;
}