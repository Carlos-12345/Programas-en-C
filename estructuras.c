#include <stdio.h>
#include <string.h>

/* Bloque del programador.
* Programa: Estructuras.
* Desarrollado por: Carlos Alcántara.
* Descripción: Este programa muestra una lista de alumnos con los datos definidos. 
* Fecha: 25/06/2026.
*/

struct Alumnos
{
  char nombre[50];
  int edad;
  float promedio;
};

int 
main ()
{
  struct Alumnos a1, a2, a3;
  //---------------------------------------
  strcpy (a1.nombre, "Carlos");
  a1.edad = 24;
  a1.promedio = 9.5;
  //---------------------------------------
  strcpy (a2.nombre, "Ana");
  a2.edad = 23;
  a2.promedio = 8.5;
  //---------------------------------------
  strcpy (a3.nombre, "Veronica");
  a3.edad = 25;
  a3.promedio = 8.7;
  //---------------------------------------
  printf ("== Lista de alumnos == \n");
  printf ("Nombre: %s - Edad: %d - Promedio: %.1f  \n", a1.nombre, a1.edad, a1.promedio);
  printf ("Nombre: %s - Edad: %d - Promedio: %.1f  \n", a2.nombre, a2.edad, a2.promedio);
  printf ("Nombre: %s - Edad: %d - Promedio: %.1f  \n", a3.nombre, a3.edad, a3.promedio);
  return 0;
}