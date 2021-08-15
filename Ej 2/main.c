#include <stdio.h>
#include <stdint.h>
/*
Ejercicio 2: Tipos de dato del header <stdint.h>
Repetir el programa anterior para los tipos definidos en la librería <stdint.h> : int8_t,
int16_t, int32_t, int64_t. ¿Cambia el tamaño de las variables si estas son unsigned (es decir,
uint8_t, uint16_t, …)?
NO CAMBIA SI ES UNSIGNED O SIGNED
*/
int main()
{
	printf("\t-------------- SIGNED VARIABLES --------------\n");
	printf("El tamanio de int8_t es %d bytes\n", sizeof(int8_t));
	printf("El tamanio de int16_t es %d bytes\n", sizeof(int16_t));
	printf("El tamanio de int32_t es %d bytes\n", sizeof(int32_t));
	printf("El tamanio de int64_t es %d bytes\n", sizeof(int64_t));

	printf("\t\n-------------- UNSIGNED VARIABLES --------------\n");
	printf("El tamanio de uint8_t es %d bytes\n", sizeof(uint8_t));
	printf("El tamanio de uint16_t es %d bytes\n", sizeof(uint16_t));
	printf("El tamanio de uint32_t es %d bytes\n", sizeof(uint32_t));
	printf("El tamanio de uint64_t es %d bytes\n", sizeof(uint64_t));

	return 0;
}