/*
49. Un restaurante ofrece hamburguesas sencillas, dobles y triples, las
cuales tienen un costo de $60.00, $80.00 y $100.00, respectivamente.
La empresa acepta tarjetas de cr�dito con un cargo adicional de 3%
sobre la compra. Los clientes pueden hacer su pedido con cualquier
cantidad de hamburguesas de los tipos que deseen comer. E.P. para
determinar cu�nto debe pagar cada uno de los N clientes que llegan al
establecimiento. Tambi�n, al final del d�a, se requiere imprimir el
monto total de las ventas y el total de las comisiones por tarjeta de
cr�dito.
*/
#include <stdio.h>

int main() 
{
	int i, sencillas, dobles, triples, n, hamburguesas, metodopago;
	float tarjeta, efectivo, pago, pago1, pago2;
	
	printf("Men� del Restaurante Kangrebursyto\n");
	printf("\nHamburguesa Sencilla: $60.00");
	printf("\nHamburguesa Doble: $80.00");
	printf("\nHamburguesa Triple: $100.00");
	printf("\n\nIngrese la cantidad de clientes del d�a: ");
	scanf("%i",&n);
	for(i=1; i<n+1; i++)
	{
		printf("\nIngrese la cantidad de hamburguesas que desee: ");
		scanf("%i",&hamburguesas);
		
		printf("\n�Cu�ntas van a ser Sencillas? ");
		scanf("%i",&sencillas);
		printf("\n�Cu�ntas van a ser Dobles? ");
		scanf("%i",&dobles);
		printf("\n�Cu�ntas van a ser Triples? ");
		scanf("%i",&triples);
		
		
		pago=sencillas*60.00;
		pago1=dobles*80.00;
		pago2=triples*100.00;
		
		printf("\n�C�mo desea pagar, efectivo o tarjeta?");
		printf("\nPago con Tarjeta = 1");
		printf("\nPago con Efectivo = 2\n");
		scanf("%i", &metodopago);
		if (metodopago==1)
		{
			tarjeta=(pago+pago1+pago2)*.3+pago+pago1+pago2;
			printf("El pago por las hamburguesas es de $%.2f",tarjeta); printf("\n");
		}
		else if (metodopago==2)
		{
			efectivo=pago+pago1+pago2;
			printf("El pago por las hamburguesas es de $%.2f",efectivo); printf("\n");
		}
	}
	return 0;
}
