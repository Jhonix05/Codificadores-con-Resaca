/*
48. Se llevará a cabo en la Universidad el concurso Srita. Simpatía.
Existen dos candidatas: Hortencia y Anacreta.  E.P. que lea el voto de
los 500 alumnos y que determine e imprima el nombre de la ganadora.
Considerar la posibilidad de votos nulos y empate en el concurso.
*/
#include <stdio.h>

int main()
{
int VH= 0, VA= 0, N= 0, V, i;
printf("Para Votar por Hortencia elija  1\n");
printf("Para Votar por Anacleta elija  2\n\n");

for(i=1; i<11; i++) 
{
	printf("Voto #%d ",i);
	scanf("%d",&V);
	if(V==1) 
	{
		VH++;
	} 
	else if(V==2) 
	{
		
		VA++;
	} 
	else
	{
		N++;
	}
}
if(VH>VA) 
{
	printf("La Srita. Simpatía es para Hortencia con %d", VH); printf(" Votos");
	printf("\nExisten: %i",N); printf(" Votos Nulos");
}
else if(VA>VH) 
{
	printf("La Srita. Simpatía es para Anacleta con %d", VA); printf(" Votos");
	printf("\nExisten: %i",N); printf(" Votos Nulos");
} 
else 
{
	printf("\nNo se puede determinar una ganadora, por lo tanto, es Empate\nExisten %d Votos Nulos", N);
}
return 0;
}
