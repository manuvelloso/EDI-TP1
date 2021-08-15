#include <stdio.h>
/*
Ejercicio 3: Bases numéricas
La función printf permite imprimir caracteres con cierto formato. Dentro de los
caracteres de escape que permiten hacerlo, existe por ejemplo “%i”,“%x” y “%o” que permiten
representar un número en forma entera, hexadecimal y octal respectivamente. Realizar un
programa que genere una tabla donde se permitan ingresar dos números enteros A y B, y se
represente en forma de tabla todos los números entre A y B inclusive, mostrando su
representación decimal, hexadecimal y octal (se pueden encolumnar los valores con el carácter
de escape de printf “\t”)
*/
int main()
{
	int A, B;
	printf("\t\nIngrese un numero entero: ");
	scanf_s("%d", &A);
	printf("\t\nIngrese otro numero entero: ");
	scanf_s("%d", &B);

	printf("\t------------- TABLA -------------\n");
	printf("\t%i\t%x\t%o\n", A, A, A);
	printf("\t%i\t%x\t%o\n", B, B, B);

	return 0;
}