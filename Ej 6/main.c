
#include <stdint.h>
#include <stdio.h>

/*
Ejercicio 6: Variables signadas y no signadas.
La función printf cuenta con un sub-especificador que permite fijar el largo de la
variable a imprimir (ver referencia). Se puede utilizar el sub-especificador “h”, colocando este
carácter entre el signo “%” y el especificador de tipo para fijar el largo de la variable a mostrar a
16 bits. Por ejemplo, para fijar un entero signado de 16 bits quedaría “%hd”. Cree una función
que reciba un entero de 16 bits con signo y que imprima el contenido de esta variable en
hexadecimal, como entero no signado de 16 bits y como entero signado de 16 bits, con una
leyenda que lo aclare para cada caso. El prototipo de la función es el siguiente:
void ImprimirContenidoEntero (int16_t numeroRepresentar);

Luego cree un main donde se declare una variable con signo de 16 bits guardando el
número en hexadecimal “0x7FFF”. Utilizando la función anterior, muestre el contenido de esta
variable en los 3 formatos. ¿Hay alguna diferencia en la representación? Luego incremente el
valor de esta variable en uno (utilizando ++ por ejemplo). Vuelva a llamar a la función anterior
para mostrar el contenido de la variable en los 3 formatos. ¿Por qué se ven diferencias?
Vuelva a asignar el valor “0x0000” a la variable antes declarada, y muestre el contenido
en los 3 formatos utilizando la función anterior. Luego decremente el contenido de la variable
(utilizando -- por ejemplo) y vuelva a mostrar el contenido utilizando la función. ¿Qué
diferencias se observan?

*/

void ImprimirContenidoEntero(int16_t num);

int main()
{
	int16_t var = 0x7fff;
	printf("\n----------------- 1 ----------------\n");
	printf("\tDec: %d\n", var);
	ImprimirContenidoEntero(var);

	var++; //-> cuando se hace ++ el numero binario obtenido empieza en 1 => negativoo!
	printf("\n----------------- 2 ----------------\n");
	printf("\tDec: %d\n", var);
	ImprimirContenidoEntero(var);
	
	var = 0x0000;
	printf("\n----------------- 3 ----------------\n");
	printf("\tDec: %d\n", var);
	ImprimirContenidoEntero(var);

	var--;
	printf("\n----------------- 4 ----------------\n");
	printf("\tDec: %d\n", var);
	ImprimirContenidoEntero(var); // Imprime el complemento!

	return 0;
}

void ImprimirContenidoEntero(int16_t num)
{
	if (num >= 0) //no signado
		printf("\t0x%x\n", num);
	if (num < 0)//signado
		printf("\t0x%hx\n", num);
}
