/*
45. Una Compa��a efect�a c�lculos para su reporte anual de utilidades
y a�adir� un peque�o incentivo de antig�edad para sus empleados
que consiste en un porcentaje de su sueldo, de acuerdo a la siguiente
tabla:

Antiguedad        Porcentaje

De 1 a 3 a�os         1 %

De 4 a 6 a�os         3 %

De 7 a 9 a�os         5 %

De 10 a 15 a�os       7 %

E.P. que lea el nombre, la antig�edad y sueldo de cada uno de los 100
empleados y que calcule e imprima la cantidad que le corresponde a
cada uno.

*/
#include<stdio.h>
int main()
{
	int i, antiguedad=0;
	char nombre [81];
	float sueldo=0, pago=0;;
	
	
	for(i=0; i<100; i++)
	{
		fflush(stdin);
		printf("\nIngrese su nombre: ");
		gets(nombre);
		printf("Ingrese su Sueldo: $");
		scanf("%f", &sueldo);
		printf("Ingrese el tiempo que ha trabajado en la compa�ia: "); 
		scanf("%i", &antiguedad);
		if(antiguedad>=1 && antiguedad<=3)
		{
			pago=sueldo+(sueldo*0.1);
			printf("\nEl pago a %s", nombre); 
			printf(" ser� de: $%.2f", pago); printf("\n");
		}
		else if(antiguedad>=4 && antiguedad<=6)
		{
			pago=sueldo+(sueldo*0.3);
			printf("\nEl pago a %s", nombre); 
			printf(" ser� de: $%.2f", pago); printf("\n");
		}
		else if(antiguedad>=7 && antiguedad<=9)
		{
			pago=sueldo+(sueldo*0.5);
			printf("\nEl pago a %s", nombre); 
			printf(" ser� de: $%.2f", pago); printf("\n");
		}
		else if(antiguedad>=10 && antiguedad<=15)
		{
			pago=sueldo+(sueldo*0.7);
			printf("\nEl pago a %s", nombre); 
			printf(" ser� de: $%.2f", pago); printf("\n");
		}
		fflush(stdin);
	}
	return 0;
}
