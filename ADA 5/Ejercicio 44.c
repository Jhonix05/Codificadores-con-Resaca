/*}44.- Los estudiantes de Ingeniería presentaron un examen de
admisión con 100 preguntas.  E.P. que lea el nombre y el número de
respuestas correctas para cada una de las 50 personas que
presentaron y que determine e imprima para cada uno su nombre y su
calificación basados en la siguiente tabla:
Respuestas Correctas         Calificación Obtenida
30 > R <= 50                          50
50 > R <= 60                          60
60 > R <= 65                          70
65 > R <= 75                          80
75 > R <= 90                          90
R > 90                               100
*/
#include <stdio.h>

int main() 
{
	int i, cal=0, resp=0;
	for(i=1; i<51; i++)
	{
		printf("\nIntroduzca el Número de Respuestas Para el Alumno %d:", i);
		scanf("%i", &resp);
		if(resp>30 && resp<=50)
		{
			cal=50;
		}
		else if(resp>50 && resp<=60)
		{
			cal=60;
		}
		else if(resp>60 && resp<=65)
		{
			cal=70;
		}
		else if(resp>65 && resp<=75)
		{
			cal=80;
		}
		else if(resp>75 && resp<=90)
		{
			cal=90;
		}
		else if(resp>90)
		{
			cal=100;
		}
		printf("Tu calificacion final es %i\n", cal);
	}
	return 0;
}
