#include <stdio.h>

/* Bloque del programador.
* Programa: Mostrar dirección de memoria.
* Desarrollado por: Carlos Alcántara.
* Descripción: Este programa muestra la dirección de memoria donde esta edad.
* Fecha: 7/05/2026.
*/

int 
main ()
{
  int edad = 5;
  int *p = &edad;
 
  printf ("la direccion es:%p \n", &edad);

  return 0;
}