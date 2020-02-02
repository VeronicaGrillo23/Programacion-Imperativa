#include <stdio.h>
#include <stdlib.h>

int main()
	{ 
          int i = 1; //Creamos e inicializamos la variable i
          
          do //Instrucciones que se hacen si se cumple la condicion del While
          {
              printf("%i \n", i);  //Escribe "i" por pantalla
              i++; //Incremente a "i" en uno
          }
          while (i <= 10); //Bucle While, solo se pone la condicion/es
          
    	  system("PAUSE");
	}
