#include <stdio.h>
#include <assert.h>
void pedirArreglo (int Arreglo[], int N);
void imprimeArreglo (int Arreglo[], int N);
void ordenar (int Arreglo[], int Tamanio);

int main ()
{

int N;//Doy tamanio
printf("Ingrese el Tamaño del Array: ");
scanf("%d", &N);
int Arreglo[N];//lo meto en el arreglo
pedirArreglo (Arreglo,N);//pido arreglo
imprimeArreglo (Arreglo,N);//imprimo el arreglo
ordenar (Arreglo, N);//ordeno el arreglo
imprimeArreglo (Arreglo, N);//imprimo el arreglo ordenado
return 0;
}

//funcion pedir arreglo
void pedirArreglo (int Arreglo[], int N)
{int i = 0;//lo inicializo a 0
while(i<N)//donde i<N
{//pido el valor de la posicion i y la muestro
printf("Ingrese el valor de la posicion; %d: ", i);
//guardo el valor en el Arreglo[i]
scanf("%d", &Arreglo[i]);
//sumo 1 para que siga agregando valores a las posiciones
//mientras i posicion sea menor que el tamaño N del arreglo
i++;
}
}

//funcion imprime arreglo
void imprimeArreglo (int Arreglo[], int N)
{int i=0;//Inicializo el arreglo
printf("[ %d",Arreglo[i]);
i++;
while (i<N)
{
printf(", %d",Arreglo[i]);
i++;
}
printf("]\n");
}

//funcion de ordenamiento burbuja
void ordenar (int Arreglo[], int Tamanio)
{
int i=0, j=0, h;
while (i<Tamanio-1)
{
j=i;
while (j<Tamanio)
{
if(Arreglo[i]<Arreglo[j]);
else
{
h=Arreglo[i];
Arreglo[i]=Arreglo[j];
Arreglo[j]=h;
}
j++;
}
i++;
}
}












