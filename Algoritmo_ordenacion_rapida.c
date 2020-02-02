#include <stdio.h>
#include <stdlib.h>
#include "librerializ2.h"

/*
void ordenar (int vect[], int ind_izq, int ind_der)
{
int i, j;//, x;//, N; // variables indice del vector  
int elem; // contiene un elemento del vector 
i = ind_izq; 
j = ind_der; 
//x = pedirEntero();//
//x = elem;
elem = vect[(ind_izq+ind_der)/2];
do
{
while (vect[i] < elem) //recorrido del vector hacia la derecha
{
i++;
}
while (elem < vect[j]) // recorrido del vector hacia la izquierda
{
j--;
}
if (i <= j) // intercambiar 
{
int aux; // variable auxiliar  
aux = vect[i]; 
vect[i] = vect[j]; 
vect[j] = aux;
i++;
j--;
}
}
while (i <= j);
//Llamadas recursivas
if (ind_izq < j)
{
ordenar (vect, ind_izq, j);
}
if (i < ind_der)
{
ordenar(vect, i, ind_der);
}
//N = vect[(ind_izq+ind_der)];
}
*/

void ordenar (int vect[], int ind_izq, int ind_der)
{
int i, j;//, x;//, N; /* variables indice del vector */ 
//int ind_izq; int ind_der;
//tam = ind_izq + ind_der; 
int elem; /* contiene un elemento del vector */
i = ind_izq; 
j = ind_der; 
//x = pedirEntero();//
//x = elem;
elem = vect[(ind_izq+ind_der)/2];
do
{
while (vect[i] < elem) //recorrido del vector hacia la derecha
{
i++;
}
while (elem < vect[j]) // recorrido del vector hacia la izquierda
{
j--;
}
if (i <= j) /* intercambiar */
{
int aux; /* variable auxiliar */ 
aux = vect[i]; 
vect[i] = vect[j]; 
vect[j] = aux;
i++;
j--;
}
}
while (i <= j);
//Llamadas recursivas
if (ind_izq < j)
{
ordenar (vect, ind_izq, j);
}
if (i < ind_der)
{
ordenar(vect, i, ind_der);
}
//N = vect[(ind_izq+ind_der)];
}

/*
int main()
{
int N, ind_izq, ind_der;
printf("escriba el tamaño del arrays");
scanf("%d", &N);
int vect[N];
for(int n = 0; n < N; n++)
{
printf("array[%d]", n);
scanf("%d", &vect[n]);
}
ordenar(vect,ind_izq,ind_der);
for(int n = 0; n < N; n++)
{
printf("\nelementos del array: %d", &vect[n]);
}
return 0;
}
*/

int main(void)
{
	int r;
	printf("Ingrese el tamaÃ±o del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int l=0; l<r;l++){
      printf("array[%d]:", l);
      scanf("%d", &array[l]);
    }
	int i, j;
     ordenar(array, i, j);


    for (int l=0; l<r;l++){
      printf("\nElemento del array ordenados: %d", array[l]);
      
    }
    //system("PAUSE");
    return 0;
}



