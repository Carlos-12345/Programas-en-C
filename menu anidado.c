#include <stdio.h>

/* Bloque del programador.
* Programa: Calculadora.
* Desarrollado por: Carlos Alcántara.
* Descripción: Este programa muestra un menu para realizar las operaciones matematicas 
* suma, resta, multiplicación y división.
* Fecha: 7/05/2026.
*/

float 
sumar (float a, float b)
{
  return a + b;
}

float 
restar (float a, float b)
{
  return a - b;
}

float 
multiplicacion (float a, float b)
{
  return a * b;
}

float 
division (float a, float b)
{
  if (a == 0)
    {
        return 0;
    }
  return a / b;
}

void 
menu ()
{
  printf ("elija la opcion con el numero de la operacion \n");
  printf ("0. suma \n");
  printf ("1. resta \n");
  printf ("2. multiplicacion \n");
  printf ("3. division \n");
}

int 
main ()
{
  int opcion;
  float a, b, resultado;
  menu ();
  scanf ("%d", &opcion);
  if (opcion == 0)
    {
        printf ("ingrese el primer valor: \n");
        scanf ("%f", &a);
        printf ("ingrse el segundo valor: \n");
        scanf ("%f", &b);
        resultado = sumar (a, b);
        printf ("el resultado es: %.2f \n", resultado);
    }
  else if (opcion == 1)
    {
        printf ("ingrese el primer valor: \n");
        scanf ("%f", &a);
        printf ("ingrse el segundo valor: \n");
        scanf ("%f", &b);
        resultado = restar (a, b);
        printf ("el resultado es: %.2f \n", resultado);
    }
  else if (opcion == 2)
    {
        printf ("ingrese el primer valor: \n");
        scanf ("%f", &a);
        printf ("ingrse el segundo valor: \n");
        scanf ("%f", &b);
        resultado = multiplicar(a, b);
        printf ("el resultado es: %.2f \n", resultado);
    }
  else if (opcion == 3)
    {
       printf ("ingrese el primer valor: \n");
       scanf ("%f", &a);
       printf ("ingrse el segundo valor: \n");
       scanf ("%f", &b);
       resultado = dividir (a, b);
       printf ("el resultado es: %.2f \n", resultado);
       if (a == 0)
         {
             printf("indefinido \n");
         }
    }
  return 0;
}