#include<stdio.h>

int main(void)
{
	int X, x, Y, y;
	
	printf("Ingrese los valores de x, X, y, Y: ");
	scanf("%d""%d""%d""%d", &x, &X, &y, &Y);
	x = X;
	y = Y;
	printf("La precondicion es: x = %d, X = %d, y = %d, Y = %d", x, X, y, Y);
	
	printf("\nIngrese los valores de x, X, y, Y: ");
	scanf("%d""%d""%d""%d", &x, &X, &y, &Y);
	x = x + 1;
	y = x + y;
	printf("La nueva asignacion es: x = %d, X = %d, y = %d, Y = %d", x, X, y, Y);
	
	printf("\nIngrese los valores de x, X, y, Y: ");
	scanf("%d""%d""%d""%d", &x, &X, &y, &Y);
	x = X + 1;
	y = Y + X;
	printf("La postcondicion es: x = %d, X = %d, y = %d, Y = %d", x, X, y, Y);
	return 0;
	
}
