
#include <stdio.h>

int main(){

	int base, incremento, exponente, resultado, i, j;

	printf("Ingrese la base: ");
	scanf("%d",&base);

	printf("Ingrese el exponente: ");
	scanf("%d",&exponente);

	incremento = base;
	resultado = 0;
	i = 1;
	while(i < exponente){
		j = 0;

		while(j < base){
			resultado = resultado + incremento;		
			j++;		
		}
		 
		incremento = resultado;
		resultado = 0;
		i++;	
		}
	printf("Resultado: %d",incremento);
	return 0;
}

