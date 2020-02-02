#include<stdio.h>


void pedirArreglo(int a[], int n_max)
{       
        
    for (int i=0; i<n_max;i++)
    {
      printf("array[%d]:", i);
      scanf("%d", &a[i]);
    }
	
}

void imprimeArreglo(int a[], int n_max)
{
	printf("[");
	    for(int i = 0; i<n_max; i++)
	    {	
           printf("%i ", a[i]);
	    }
	printf("]\n");

}	    	

int main(void)
{   
	int a[5];
	int n_max = 5;
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n_max);

    pedirArreglo(a, n_max);
	imprimeArreglo(a, n_max);
	
	return 0;
	
	
}
