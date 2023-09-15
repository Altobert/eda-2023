#include  <stdio.h>

void funcion(int * n){
    *n = *n + 1;
}

int main(){
    printf("inicio del programa\n");
    int valor  = 20;
    int valor2 = 120;
    printf("int valor = 20 \n");
    printf("valor: %d \n\n",valor);

    printf("void funcion(int * n)\n");
    funcion(&valor);
    funcion(&valor2);
    printf("valor  : %d \n\n",valor);
    printf("valor2 : %d \n\n",valor2);

    return 0;
}