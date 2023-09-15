	
#include<stdio.h>
#define LIMITE 18 
//Criba de Eratóstenes
int main(int argc, char** argv){
    int i,j,n;
    int numeros[LIMITE];
     
    //Obtener las lista de números a evaluar
    printf("numeros a evaluar: \n");
    for(i=2;i<LIMITE;i++){
        //se llena de numeros 1
        numeros[i]=1;
        printf("%d  ",numeros[i]);
    }
     
    //Hacer 2 el primer número primo
    numeros[2]=1;
  
    //Recorrer los números y para cada uno
    printf("\n Recorrer numeros: ");
    for (n=2;n<LIMITE;n++){
        //Si es primo recorrer los múltiplos y marcarlos como no primo
        if (numeros[n]){
            for (i=n*n;i<LIMITE;i+=n){
                numeros[i] = 0;
                printf("%d  ",numeros[i]);
            }
        }
    }
       
    //Muestro la lista de los primos    
    printf("\n Primos: \n");
    for (n = 2; n < LIMITE; n++){
        if (numeros[n]){
            printf("%d  ",n);
        }
    }
     
    return 0;
}