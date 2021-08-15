#include <stdio.h>
#include <stdint.h>

#define INT8 8
#define INT16 16
#define INT32 32

/*
Ejercicio 4: Conversión a binario
Realizar una función llamada ImprimirBin8 que reciba un entero de 8 bits e imprima en
pantalla su representación en binario. Luego agregue una columna al ejercicio anterior, donde se
muestre la representación de cada número también en binario. El prototipo es el siguiente:
void ImprimirBin8(int8_t num);
a) Realizar la función dividiendo sucesivamente por 2 y obteniendo el resto en cada
división. Se sugiere usar el operador % para obtener el resto de la división entre 2 números
enteros.
b) Realizar además las versiones de 16 y 32 bits de la misma función.

*/

void ToBin_8(int8_t n);
void ToBin_16(int16_t n);
void ToBin_32(int32_t n);


int main()
{
	ToBin_8(24);
	printf("\n");
	ToBin_16(5);
	printf("\n");
	ToBin_32(5);
  
	return 0;
}


void ToBin_8(int8_t n)
{
	int aux[INT8] = { 0 };
	int bin[INT8] = { 0 };

	//#1 divido el entero /2
	for (int i = 0; i < INT8; i++)
	{
		if (i == 0)
			aux[i] = n; 
		else
			aux[i] = aux[i-1]/2;
	}

	//#2 me fijo los restos y los ordeno de atras para adelante
	for (int i = 0; i <INT8; i++)
		bin[i] = aux[INT8 - 1 - i]%2;

	//#3 imprimo
	for (int i = 0; i < INT8; i++)
		printf("%d ", bin[i]);
}

void ToBin_16(int16_t n)
{
	int aux[INT16] = { 0 };
	int bin[INT16] = { 0 };

	//#1 divido el entero /2
	for (int i = 0; i < INT16; i++)
	{
		if (i == 0)
			aux[i] = n;
		else
			aux[i] = aux[i - 1] / 2;
	}

	//#2 me fijo los restos y los ordeno de atras para adelante
	for (int i = 0; i < INT16; i++)
		bin[i] = aux[INT16 - 1 - i] % 2;

	//#3 imprimo
	for (int i = 0; i < INT16; i++)
		printf("%d ", bin[i]);
}

void ToBin_32(int32_t n)
{
	int aux[INT32] = { 0 };
	int bin[INT32] = { 0 };

	//#1 divido el entero /2
	for (int i = 0; i < INT32; i++)
	{
		if (i == 0)
			aux[i] = n;
		else
			aux[i] = aux[i - 1] / 2;
	}

	//#2 me fijo los restos y los ordeno de atras para adelante
	for (int i = 0; i < INT32; i++)
		bin[i] = aux[INT32 - 1 - i] % 2;

	//#3 imprimo
	for (int i = 0; i < INT32; i++)
		printf("%d ", bin[i]);
}


