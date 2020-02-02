#include<stdio.h>

struct datos_t 
{
	int maximo;
	int minimo;
	
};

struct datos_t min_max(int a[], int tam)
{
	
	struct datos_t res;
	res.maximo = 0;
	res.minimo = a[0];
	for(int t = 0; t < tam; t++)
	{
		if(a[t] > res.maximo)
		{
			res.maximo = a[t];
		}
		else if(a[t] < res.minimo)
		{   
			res.minimo = a[t];	
		}
		
	}
	return res;
}

int main(void)
{
	int r;
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int i=0; i<r;i++){
      printf("array[%d]:", i);
      scanf("%d", &array[i]);
    }
    struct datos_t x;
	struct datos_t y;

    x.maximo = 0;
    y.minimo = 0;

    x = min_max(array, r);
    y = min_max(array, r);

    printf("\nEl maximo elemento que hay en el arreglo es: %d", x.maximo);
    printf("\nEl minimo elemento que hay en el arreglo es: %d", y.minimo);

    return 0;
}