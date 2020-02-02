#include <stdio.h>
#include <stdlib.h>

//Funcion
int Maximo10 (int n) //Funcion que devuelve un int y recibe un int por parámetro
{ 
     if(n > 0 && n <= 10) //Si n es mayor que 0 y menor o igual que 10
     {
          return n; //Si es correcto, devuelvo el valor introducido
     }
     else
     {
          return 0; //Si no es correcto, se devuelve un 0
     }
}

int main()
	{     
          int longitud_array; //Creamos una variable para dar longitud a un array
          
          //Pedimos al usuario que introduzca la longitud (entre 1 y 10)
          printf("Elige longitud del array, del 1 al 10: ");
          scanf("%i", &longitud_array);
          
          //Solo seguirá el programa si la funcion Maximo10 devuelve un valor
          //que no sea 0...
          if (Maximo10(longitud_array) != 0) 
          {
              //Creamos el array con la longitud dada por el usuario
              int numeros[longitud_array];                         
              
              //Añadimos valor al array y lo mostramos por pantalla                         
              for (int i = 0; i < longitud_array; i++)
              {
                  numeros[i] = i+1; //añadir valor
                  printf("Numero %i del array: %i\n", i+1, numeros[i]); //mostrarlo
              }
          }
          else
          {
              //Si el usuario introduce un valor menor que 0 o mayor que 10, no 
              //continua el programa...
              printf("La longitud del array debe ser entre 1 y 10. \n");  
          }
          
    	  system("PAUSE");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
