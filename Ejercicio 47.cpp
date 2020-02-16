/*
47. E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificación mayor al promedio de grupo.
*/
#include <stdio.h>

int main() 
{
	int i, mejorpromedio=0;
	float calificacion=0, calificaciongeneral=0, promedio=0;
	
	for(i=1; i<50; i++)
	{
	
	printf("Ingrese su calificación: ");
	scanf("%f", &calificacion);
	calificaciongeneral= calificaciongeneral+calificacion;
	promedio = calificaciongeneral/50;
	
	if(calificacion>promedio)
	{
		mejorpromedio++;
	}
	}
	printf("La Calificación del grupo es de: %.2f", promedio);
	printf("\nSolamente %i", mejorpromedio); printf(" obtuvieron Mejor Promedio\n");
	return 0;
}
