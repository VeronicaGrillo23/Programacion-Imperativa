#include <stdio.h>
#include <stdlib.h>

//declaramos la funcion Suma, que recibe dos enteros
int Suma(int n1, int n2) //n1 y n2 solo funcionan aquí en esta función
{
     int r; //para guardar el resultado de la suma
     r = n1 + n2; //asigno el resultado de la suma a la variable 
     
     return r;
}

int main()
	{ 
          int num1, num2; //creamos dos enteros, num1 y num2
          int resultado; //Creamos variable resultado
          
          //damos valores a estas variables
          num1 = 3;
          num2 = 7;
          
          //llamada a la función "Suma", recogemos el valor devuelto en "resultado"
          resultado = Suma(num1, num2);
          
          printf("La suma de ambos numeros es: %i \n", resultado);  //La muestro  
    	  
    	  system("PAUSE");
	}
