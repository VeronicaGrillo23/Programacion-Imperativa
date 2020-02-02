#include <stdio.h>
int main(void)
{
int x, y;
printf("Coloque el valor de las variables x y\n");
scanf("%d %d", &x, &y);
printf("\n y-2 = (x*3-1) mod 5 \n");
if(y-2 == (x*3-1) % 5)
{
	printf("\n   True\n");
}
else
{
	printf("\n   False\n");
}
return 0;
}

