/*Bloque de librerias*/
#include<stdio.h>

/*Bloque del programador
programa:bloques.
Desarrollo:Carlos Alcantara Garcia
Descripcion:programa que tiene los tres bloques principales
Fecha:17/10/2023
version:1
variables:
*/

/*Esta es la funcion principal*/
main ()
{
	/*Bloque de declaracion de variables*/
	float voltaje;
	float intensidad;
	float resistencia;
	
	/*Bloque de solicitud de datos*/
	printf ("Introduzca la intensidad de amperios => \n");
	scanf ("%f", &intensidad);
	printf( "Introdusca la resistencia en ohmios => \n");
	scanf ("%f", &resistencia);
	
	/*Bloque de operaciones*/
	voltaje = intensidad * resistencia;
	
	/*Bloque de impresion*/
	printf ("El valor del voltaje es %f voltios \n", voltaje);
}