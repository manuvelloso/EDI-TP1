#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define N 32

/*
Ejercicio 5: Conversión binario a decimal.
Realizar una función llamada BinarioDecimal que reciba un string con los bits de un
número binario y devuelva un entero de 32 bits con el valor del mismo. El prototipo de la
función es el siguiente:
int32_t BinarioDecimal (char* cadena_numero);
 Generar un programa que solicite al usuario un número en binario, y lo muestre en
pantalla en decimal, binario y octal utilizando la función anterior.
*/

int32_t BinarioDecimal(char* cadena_numero);

int main()
{
	char bin[32] = { 0 };
	int32_t dec = 0;

	printf("Ingrese un numero en binario: ");
	fgets(bin, N, stdin);
	
	dec = BinarioDecimal(bin);

	printf("\n\t#DECIMAL: %d\n\t#BINARIO: %s\n\t#OCTAL: %o", dec, bin, dec);
	getchar();

	return 0;
}

int32_t BinarioDecimal(char* cadena_numero)
{
	int length = strlen(cadena_numero)-1;
	cadena_numero[length] = '\0';

	int32_t result = 0;
	
	int* aux = (int*) malloc((length)*sizeof(int));

	for (int k = 0; k < length; k++)
	{
		if (cadena_numero[k] == '1')
			aux[k] = 1;
		else
			aux[k] = 0;
	}

	for (int k = length-1; k >= 0; k--)
		result += aux[k] * pow(2, k);
	
	free(aux);
	
	return result;
}