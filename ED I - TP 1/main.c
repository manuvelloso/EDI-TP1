#include <stdio.h>

/*
Ejercicio 1: Tipos de dato y su tamaño en bits.
Realizar un programa en el que se declare una variable de cada tipo char, short int, int,
long int, long long int, float y double, nombrándolas por su tipo, por ejemplo var_char,
var_short_int, etc. Crear además 7 variables del tipo short int llamadas tam_char, tam_short_int,
tam_int, etc. En estas variables se guardará el tamaño de cada una de las variables definidas en
un principio. Mostrar el tamaño de cada variable. (utilizar sizeof()). ¿Cambia el tamaño de las
variables si estas son unsigned?

*/
int main()
{
	printf("\t-------------- SIGNED VARIABLES --------------\n");
	printf("El tamanio de char es %d bytes\n", sizeof(char));
	printf("El tamanio de int es %d bytes\n", sizeof(int));
	printf("El tamanio de short int es %d bytes\n", sizeof(short int));
	printf("El tamanio de long int es %d bytes\n", sizeof(long int));
	printf("El tamanio de long long int es %d bytes\n", sizeof(long long int));
	printf("El tamanio de float es %d bytes\n", sizeof(float));
	printf("El tamanio de double es %d bytes\n", sizeof(double));

	printf("\t\n-------------- UNSIGNED VARIABLES --------------\n");
	printf("El tamanio de unsigned char es %d bytes\n", sizeof(unsigned char));
	printf("El tamanio de unsigned int es %d bytes\n", sizeof(unsigned int));
	printf("El tamanio de unsigned short int es %d bytes\n", sizeof(unsigned short int));
	printf("El tamanio de unsigned long int es %d bytes\n", sizeof(unsigned long int));
	printf("El tamanio de unsigned long long int es %d bytes\n", sizeof(unsigned long long int));
	return 0;
}