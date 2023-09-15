#include<stdio.h>

int main() 
{
	// declaración de variables
	int numero_dias, numero_segundos;
	// ingreso de datos	
	printf("Ingrese el numero de dias a convertir:");
	scanf("%d", &numero_dias);
	// cálculo de segundos
	numero_segundos = numero_dias * 24 * 60 * 60;
	// salida de datos por consola
	printf("%d dias equivalen a %d segundos \n", numero_dias, numero_segundos);	
	// retorno de la función
	return 0;
}

