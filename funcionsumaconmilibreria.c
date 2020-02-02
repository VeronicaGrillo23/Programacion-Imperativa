//[directivas del pre-procesador: includes y defines]
//[declaración de variables globales]
//[prototipos de funciones]
//[declaraciones de clases]
//función main 
//[definiciones de funciones]
//[definiciones de clases]
#include <stdio.h>
#include <stdlib.h>
//#include <librerializ.h>//cuando la libreria creada esta 
//C:\Program Files\Dev-Cpp\MinGW64\include
#include "librerializ2.h"//cuando la libreria creada esta donde guardas el programa
 
//int main()
//{
//      int a,b,res;
//      printf("ingresa un numero: "); 
//      scanf("%d",&a);
//      printf("\nIngresa otro numero: ");
//      scanf("%d",&b);
//      res=suma(a,b);
//      printf("la suma de los dos numeros es: %d \n", res);
//      system("pause");
//}


int main()
{
int x, y, z, m;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero(); 
m = pedirEntero();
if(x < y)
{
m = x;
}
else if(x >= y)
{
m = y;
}
imprimeEntero(x);
imprimeEntero(y);
imprimeEntero(z);
imprimeEntero(m);//x, y, z, m);
if(m < z)
{
//goto SKIP_ITERATION;
}
else if(m >= z)
{
m = z;
}
imprimeEntero(x);
imprimeEntero(y);
imprimeEntero(z);
imprimeEntero(m);//x, y, z, m);
return 0;
}

