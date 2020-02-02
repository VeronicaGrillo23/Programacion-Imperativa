//(Punto opcional super estrella). Hacer un programa
//en el archivo nuevo ordenar.c que
//reciba un arreglo y lo ordene de menor a mayor.
//void ordenar(int a[], int tam)
//Investigar en internet algun algoritmo de ordenacion 
//de su agrado (y que luego sepa explicar
//con sus palabras como funciona!).
#include<stdio.h>

void ordenar(int a[], int tam)
{
	int s;
	for(int t = 0; t < tam; t++)
	for (int pasada = 1; pasada < tam; pasada++)
	for (int t= 0; t < tam - 1 ;t++)	

	{
		if (a[t] > a[t+1]) 
		{
            s = a[t]; 
            a[t] = a[t+1]; 
            a[t+1] = s;
        }
	}
}

int main(void)
{
	int r;
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int l=0; l<r;l++){
      printf("array[%d]:", l);
      scanf("%d", &array[l]);
    }

     ordenar(array, r);


    for (int l=0; l<r;l++){
      printf("\nElemento del array ordenados: %d", array[l]);
      
    }
    
    return 0;
}



