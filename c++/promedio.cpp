//Programa recibe datos devuelve su promedio.
#include <conio.h>
#include <stdio.h>
int main () {
	float dato1, dato2, promedio;
	printf ("Bienvenido. \n");
	printf ("Este programa obtiene el promedio de dos numeros \n");
	//printf ("Teclee sus datos separados por un espacio \n");
	//scanf("%f %f", &dato1, &dato2);
	printf ("Ingrese primer dato \n");
	scanf("%f", &dato1);
	printf ("Infrese segundo dato\n");
	scanf("%f", &dato2);	
	promedio =((dato1 + dato2)/2);
	//printf ("El promedio es  %4.1f", promedio);
	printf ("El promedio es %f ", promedio);
	
	printf ("\n\n Oprima cualquier tecla para terminar...");
	getch ();
}
