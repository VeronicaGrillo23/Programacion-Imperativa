#include <stdio.h>
int main()
{ 
int x = 13, y = 3, i = 0; //Creamos e inicializamos la variable i
i = 0;
do //Instrucciones que se hacen si se cumple la condicion del While
{
x = x - y;
i = i + 1;
printf("\n Sigma es %d %d %d \n", x, y, i);  //Escribe "i" por pantalla
}
while (x >= y); //Bucle While, solo se pone la condicion/es
//system("PAUSE");

return 0;
}

