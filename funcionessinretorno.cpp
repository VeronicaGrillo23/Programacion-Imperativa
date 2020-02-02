#include <stdio.h>
#include <stdlib.h>

//declaramos la funcion Suma, que recibe dos enteros
void Suma(int n1, int n2) //n1 y n2 solo funcionan aquí en esta función
{
     int resultado; //para guardar el resultado de la suma
     resultado = n1 + n2; //asigno el resultado de la suma a la variable
     
     printf("La suma de ambos numeros es: %i \n", resultado);  //la muestro   
}

int main()
	{ 
          int num1, num2; //creamos dos enteros, num1 y num2
          
          //damos valores a estas variables
          num1 = 3;
          num2 = 7;
          
          //llamada a la función "Suma"
          Suma(num1, num2);
    	  
    	  system("PAUSE");
	}

