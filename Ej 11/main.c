
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define M 5
//Realizar funcion que invierta el orden de un array de enteros y un string

int* InvertInt(int* arr, int N);
char* InvertStr(char* str);

int main()
{
	int list[M] = { 1,2,3,4,5 };
	char* word = "Manuela";

	int* result1 = InvertInt(list, M);
	char* result2 = InvertStr(word);

	printf("\n--------- INT -----------\n");
	printf("Input: ");
	for (int i = 0; i < M; i++)
		printf("%d ", list[i]);

	printf("\nOutput: ");
	for (int i = 0; i < M; i++)
		printf("%d ", result1[i]);

	printf("\n--------- CHAR -----------\n");
	printf("Input: %s", word);
	printf("\nOutput: %s", result2);

	free(result1);

	return 0;
}

int* InvertInt(int* arr, int N)
{
	int* aux = (int*)malloc(N * (sizeof(int)));

	for (int i = 0; i < N; i++)
		aux[i] = arr[N - 1-i];
		
	return aux;
}

char* InvertStr(char* str)
{
	int length = strlen(str);
	char* aux = (char*)malloc(length * (sizeof(char)));

	for (int i = 0; i < length; i++)
		aux[i] = str[length - i-1];

	aux[length] = '\0';

	return aux;
}
