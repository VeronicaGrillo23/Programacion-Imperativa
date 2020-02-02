#include<stdio.h>

int sumatoria(int a[], int tam)
{        
        int suma = 0;
	for(int r = 0; r < tam; r++)
	{       

		suma = suma + a[r];
	   
	}
        return suma;
}

int main(void)
{
       
    int r;
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int i=0; i<r;i++)
    {
      printf("array[%d]:", i);
      scanf("%d", &array[i]);
    }
	
	int sum = 0;
	sum = sumatoria(array, r);
     printf("Los suma de los valores es: %d", sum);
}
