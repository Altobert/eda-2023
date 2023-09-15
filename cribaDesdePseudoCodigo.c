

#include<stdio.h>
#include<stdint.h>

#define LIMITE 10 // limite numeos primos

int buscaMayor(int a []);

int compararColecciones(int a [], int b []);

void multiplicaMatrices(int a[], int b[]);

int intercambiarValores(int a, int b);

int dias_segundos(int dias);

int dias_segundos(int dias){
    int segundos = dias * 24 * 3600;
    return segundos;
}


int intercambiarValores(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return b;
}

int algoritmo(int num);

int algoritmo(int num){
    int acum = 0;
    int i = 0;
    while (i<=num)
    {
        /* code */
        acum = acum+i;
        printf("%d ",acum);
        i = i+1;
    }
    
    return acum;
}

void multiplicaMatrices(int a[], int b[]){
    
}

int compararColecciones(int a [], int b []){

    int contador = 0;

    for (int i =0; i<LIMITE;i++){
        int j =0;
        while (j < LIMITE)
        {
            if(a[i] == b[j]){
                contador = contador +1;
            }
            j = j + 1;
        }
    }
        
    return contador;
}

int buscaMayor(int a []){

    int mayor = a[0];
    for (int i =0; i<LIMITE;i++){
        if(a[i] > mayor){
            mayor = a[i];
        }
        printf("%d \n",a[i]);

    }
    return mayor;
}

int main (){

    int x=0, numeroMayor=0, cantidadRepetidos=0, acumulado = 0, valor=0;
    int ar_numeros[10] = {0,1,2,3,4,5,6,7,8,9};

    int arregloA[10] = {0,1,2,3,4,5, 6, 7, 8, 9};
    int arregloB[10] = {0,2,4,6,8,10,12,14,16,18};

    numeroMayor = buscaMayor(ar_numeros);
    printf("numero mayor %d \n",numeroMayor);

    cantidadRepetidos = compararColecciones(arregloA, arregloB);
    printf("cantidad repetidos %d \n",cantidadRepetidos);

    acumulado = algoritmo(9);
    printf("algoritmo acumulado %d \n",acumulado);

    valor = intercambiarValores(120, 200);
    printf("valor intercambiado %d \n",valor);

    valor = dias_segundos(30);
    printf("%d dias a segundos %d \n",30,valor);

    return 0;
}

