
#include <stdint.h>
#include <stdio.h>

/*
Ejercicio 7: Overflow en operaciones y “wrap around”. Carry y borrow.
a) Cree tres variables no signadas de 16 bits, num1, num2 y resultado. En las primeras 2
guarde los números en hexadecimal num1 = 0x8000; y num2 = 0x0001;. Luego asigne a la
variable resultado la resta num1 - num2;. A continuación muestre la variable num1 en
hexadecimal, como entero signado y como entero no signado. Hacer lo mismo para num2 y para
la variable resultado. Viendo los resultados obtenidos, se generó overflow tras la operación?
cómo podemos darnos cuenta de esto?
b) Repetir lo mismo pero asignando los valores num1 = 0x7FFF; y num2 = 0x0001;
Luego asigne resultado = num1 + num2; Muestre las 3 variables en los 3 formatos y saque
conclusiones respecto a la validez de los resultados. ¿Hubo overflow?
c) Asignar los valores num1 = 0xF000; y num2 = 0xFF01; y guardar en resultado la
suma de las dos variables. Mostrar las 3 variables en los 3 formatos anteriores. Sacar
conclusiones de los resultados. ¿Hubo overflow, carry o nada?
d) Asignar los valores num1 = 0x0011; y num2 = 0xFF01; y guardar en resultado la
suma de las dos variables. Mostrar las 3 variables en los 3 formatos anteriores. Sacar
conclusiones de los resultados. ¿Hubo overflow, carry, borrow o nada?
*/

int main()
{
	int16_t num1, num2, result;
	num1 = 0x8000;
	num2 = 0x0001;
	result = num1 - num2;

	//	a) No hubo overflow
	printf("Entero signado num1: 0x%hx\n", num1);
	printf("Entero no signado num1: 0x%x\n", num1);
	printf("Decimal num1: %d\n", num1);

	printf("Entero signado num2: 0x%hx\n", num2);
	printf("Entero no signado num2: 0x%x\n", num2);
	printf("Decimal num2: %d\n", num2);

	printf("Entero signado result: 0x%hx\n", result);
	printf("Entero no signado result: 0x%x\n", result);
	printf("Resultado de num1-num2: %d\n\n", result);
	
	//	b) Hubo overflow -> cambio el signo
	num1 = 0x7FFF;
	num2 = 0x0001;
	result = num1 + num2;
	printf("Entero signado num1: 0x%hx\n", num1);
	printf("Entero no signado num1: 0x%x\n", num1);
	printf("Decimal num1: %d\n", num1);

	printf("Entero signado num2: 0x%hx\n", num2);
	printf("Entero no signado num2: 0x%x\n", num2);
	printf("Decimal num2: %d\n", num2);

	printf("Entero signado result: 0x%hx\n", result);
	printf("Entero no signado result: 0x%x\n", result);
	printf("Resultado de num1 + num2: %d\n\n", result);

	//	c) Hubo carry?
	num1 = 0xF000;
	num2 = 0xFF01;
	result = num1 + num2;
	printf("Entero signado num1: 0x%hx\n", num1);
	printf("Entero no signado num1: 0x%x\n", num1);
	printf("Decimal num1: %d\n", num1);

	printf("Entero signado num2: 0x%hx\n", num2);
	printf("Entero no signado num2: 0x%x\n", num2);
	printf("Decimal num2: %d\n", num2);

	printf("Entero signado result: 0x%hx\n", result);
	printf("Entero no signado result: 0x%x\n", result);
	printf("Resultado de num1 + num2: %d\n\n", result);

	//	d) Hubo carry?
	num1 = 0x0011;
	num2 = 0xFF01;
	result = num1 + num2;
	printf("Entero signado num1: 0x%hx\n", num1);
	printf("Entero no signado num1: 0x%x\n", num1);
	printf("Decimal num1: %d\n", num1);

	printf("Entero signado num2: 0x%hx\n", num2);
	printf("Entero no signado num2: 0x%x\n", num2);
	printf("Decimal num2: %d\n", num2);

	printf("Entero signado result: 0x%hx\n", result);
	printf("Entero no signado result: 0x%x\n", result);
	printf("Resultado de num1 + num2: %d\n\n", result);

	return 0;
}