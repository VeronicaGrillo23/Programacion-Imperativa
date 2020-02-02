#include<stdio.h>

int suma_hasta(int N)
{
	int cont, suma = 0;
	cont = 1;
	
	while(cont<=N)
	{
		suma = suma + cont;
		cont++;
	}
	printf("\nLa suma de los N primeros elementos son: %d", suma);
	
	return N;
}

int main(void)
{
	int x;
	printf("\nIngrese el entero N: ");
	scanf("%d", &x);
	if(x>0)
	{
		suma_hasta(x);
	}
	
	else
	{
		printf("\nError");
	}
	return 0;
}
