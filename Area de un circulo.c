#include <stdio.h>

/* Bloque del programador.
* Programa: Área de un círculo.
* Desarrollado por: Carlos Alcántara.
* Descripción: Este programa cálcula el área del círculo pidiendo el valor del rádio al usuario.
* fecha: 30/10/2023
* Variables: r, radio = es el radio que proporciona el usuario area, total = es el valor del area calculada.
*/
 
float 
calcula_area (float r);
 
int 
main (void)
{
  float area;
  float radio;
 	
  printf ("dame el radio=> \n");
  scanf ("%f", &radio);
 	
  area = calcula_area (radio);
 	
  printf ("el area de un circulo de radio %5.2f es: \n", radio);
  printf ("%5.2f unidades cuadradas \n", area);
  return 0;
}

float 
calcula_area (float r)
{
 
  float total;
  float pi = 3.141516;
 
  total = pi * r * r;
  return (total);
}