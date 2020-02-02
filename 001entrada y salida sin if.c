#include <stdio.h>
int main (void) {
int x, y, resultado;
printf("Introduce los valores de x e y: ");
scanf("%d" "%d", &x, &y);
resultado = y - 2 == (x * 3 + 1) % 5;
printf("y - 2 == (x * 3 + 1) % 5 es: \n(con 0 Falso y 1 Verdadero)\n %d ", resultado);
return 0;
}

