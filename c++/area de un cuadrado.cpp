//Programa recibe un lado de un cuadrado.
#include <conio.h>
#include <stdio.h>
int main () {
	float lado, resultado;
	printf ("Ingrese el lado de un cuadrado \n");
	scanf("%f", &lado);
	resultado = (lado)*2; 
	printf ("El promedio es %f ", resultado);
	
	printf ("\n\n Oprima cualquier tecla para terminar...");
	getch ();
}

