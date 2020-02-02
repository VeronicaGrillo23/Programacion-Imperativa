/*2. (Asignaciones multiples) Considerar las siguiente asignaciones multiples
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}
a) Escribir un programa equivalente que solo use secuencias de asignaciones simples.
Demostrar que los programas son correctos.
b) Traducir los programas resultantes a C en archivos nuevos llamados multiple1.c y
multiple2.c respectivamente.
Recordar: Como C no tiene asignaciones multiples, siempre sera necesario traducirlas primero
a secuencias de asignaciones simples.
*/

#include <stdio.h>
#include <stdlib.h>
#include "librerializ2.h"
//no sale
int main()
{
int x;
int X;
int y;
int Y;
int z;
int Z;
x = pedirEntero();
x=X;
y = pedirEntero();
y=Y;
imprimeEntero(x);
imprimeEntero(y);

imprimeEntero(x + 1);
y = x + y;
imprimeEntero(x + y);

x = X + 1;
imprimeEntero(X + 1);
y = X + Y;
imprimeEntero(y);

//{Pre: x = X, y = Y, z = Z}
//x, y, z := y, y + x + z, y + x
//{Post: x = Y, y = Y + X + Z, z = Y + X}

return 0;
}








