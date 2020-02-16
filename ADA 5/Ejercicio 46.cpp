/*
46. E.P. que lea 200 números y que calcule e imprima cuantos son
negativos, cuantos son positivos y cuantos fueron iguales a cero.
*/
#include <stdio.h>

int main()
{
	int i, pos=0, neg=0, nulo=0, num;
	
	for(i=1; i<200; i++)
	{
		printf("Ingrese un Número: ");
		scanf("%i", &num);
		if(num>0)
		{
			pos++;
		}
		else if(num<0)
		{
			neg++;
		}
		else
		{
			nulo++;
		}
	}
	printf("\nLa cantidad de positivos fue de %i", pos); 
	printf("\nLa cantidad de negativos fue de %i", neg);
	printf("\nLa cantidad de nulos fue de %i", nulo);
	
	return 0;
}

