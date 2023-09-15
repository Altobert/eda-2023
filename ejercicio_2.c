	
#include<stdio.h>
#define LIMITE 12
//Criba de Eratóstenes
int main(int argc, char** argv){
    int i,j,n;
    int numeros[LIMITE];
     
    //Obtener las lista de números a evaluar
    for(i=2;i<LIMITE;i++){
        numeros[i]=1;
    }
     
    //Hacer 2 el primer número primo
    numeros[2]=1;
  
    //Recorrer los números y para cada uno
    for (n=2;n<LIMITE;n++){
		//Si es primo recorrer los múltiplos y marcarlos como no primo
        if (numeros[n]){
            for (i=n*n;i<LIMITE;i+=n){
                numeros[i] = 0;
            }
        }
    }
       
    //Muestro la lista de los primos    
    printf("Primos: ");
    for (n = 2; n < LIMITE; n++){
        if (numeros[n]){			
            printf("%d  ",n);
        }
    }
     
    return 0;
}