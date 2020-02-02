#include<stdio.h>
#include<stdbool.h>

bool existe_positivo(int a[], int tam)
{        
      bool r = false;

  for (int i = 0; i < tam; i++){
      
      if (a[i] >= 0)
        {  
          r = true;
          break;
        }
        
  }
  return r;
  
}

   
bool todos_positivos(int a[], int tam)
{
       bool r = true;
         
      for (int i = 0; i < tam; i++){
      if (a[i] >= 0)
        {
          r = r && true;
        }
      else 
        {
          r = r && false;
        }
      }

      return r;
}


int main (void)
{
    int y;
    bool a,b;
    printf("Ingrese el tamaño del arreglo:");
    scanf("%d", &y);
    int array[y];
  
    
    for (int i=0; i<y;i++){
      printf("array[%d]:", i);
      scanf("%d", &array[i]);
    }

    a=existe_positivo(array,y);
    b=todos_positivos(array,y);
    
    if (b == true){
        printf("Son todos positivos\n");
      }
      else {
        printf("No son todos positivos\n");
      }

    if (a == true){
      printf("Existe positivo\n");
    }
    else {
      printf("No existe positivo\n");
    }
     
    return 0;
}
 
