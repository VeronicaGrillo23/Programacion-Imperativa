//#include <stdio.h>
//#include <stdlib.h>

//suma
//int suma(int x, int y);   // prototipo de la función 
 
//suma(x,y)                   // cuando no indicamos el tipo de dato se le adjudica
                            // el tipo por defecto "int"
//{
// return(x+y);             //retorno de la función
//}

//pedir entero
int pedirEntero()
{
int n;
printf("\n Ingrese un numero Entero por favor\n");
scanf("%d", &n);
return n;
}

//imprimir entero
//toma un entero como partametro y lo imprime
void imprimeEntero(int n1)
{
printf("El numero es: %d \n", n1);
}
int main()
{
int a;
a = pedirEntero();
imprimeEntero(a);
return 0;
}






