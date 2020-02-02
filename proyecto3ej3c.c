#include <stdio.h>
int main(void)
{
int x, y;
printf("Ingrese el valor inicial sigma 0 de x e y\n");
scanf("%d" "%d", &x, &y);
y = y + y;
printf("el estado sigma 1 de x es %d y el de y es %d \n",x, y);
x = x + y;
printf("\nel estado sigma 2 de x es %d y el de y es %d \n",x, y);

return 0;
}

