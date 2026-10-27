#include<stdio.h>

/*programa:Identificadores.
Desarollo:Carlos Alcántara. 
Descripcion:Este programa nos muestra identificadores.
Fecha:25/09/2023.
Version:1.
Variables: un_caracter, un_entero, un_real.
*/

main ()
{
  char un_caracter;
  int un_entero;
  float un_real;

  un_caracter = 'a';
  un_entero = 15;
  un_real = 27.62;

  printf ("%c es el caracter. /n", un_caracter);
  printf ("%d es el entero. /n", un_entero);
  printf ("%f es el real. /n", un_real);
}