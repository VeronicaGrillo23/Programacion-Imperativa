#include<stdio.h>
#include<assert.h>

void pedirArreglo(int a[], int n_max);
void imprimeArreglo(int a[], int n_max);
void ordenar(int a[], int tam);

int main (){
    int n_max;
    

    printf("Ingrese el tamaño del array: ");
    scanf("%d",&n_max);

    int a[n_max];

    pedirArreglo(a,n_max);
    imprimeArreglo(a,n_max);
    ordenar( a, n_max);
    imprimeArreglo(a,n_max);

    return 0;
}

void pedirArreglo(int a[], int n_max){
    int i=0;
    while(i<n_max){
        printf("Ingrese el valor de la  posicion %d: ", i);
        scanf("%d",&a[i]);
        i++;
    }
    
}
void imprimeArreglo(int a[], int n_max){
    int i=0;
    printf("[ %d",a[i]);
    i++;
    while(i<n_max){
        printf(", %d", a[i]);
        i++;
    }
    printf(" ]\n");
}
void ordenar(int a[], int tam){
    int i=0,j=0,h;
    while(i<tam-1){
        j=i;
        while(j<tam){
            if(a[i]<a[j]);
            else{
                h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
            j++;
        }
        i++;
    }
}















