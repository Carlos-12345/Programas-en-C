#include <stdio.h>

/* Bloque del programador.
* Programa: Conversión de temperaturas.
* Desarrollado por: Carlos Alcántara.
* Descripción: Programa que muestra una tabla con todas las conversiones ingresando un número.
* Fecha: 7/05/2026.
* Licencia: GPL-v3.
*/

float 
Kelvin_Fahrenheit ()
{
  total = (valor1 - 273.15) * 9 / 5 + 32;
  return total;
}

float 
Kelvin_Celsius ()
{
  total = valor1 - 273.15;
  return total;
}

float 
Fahrenheit_Kelvin ()
{
  total = (valor1 - 32) * 5 / 9 + 273.15;
  return total;
}

float 
Fahrenheit_Celsius ()
{
  total = (valor1 - 32) * 5 / 9;
  return total;
}

float 
Celsius_Kelvin ()
{
  total = valor1 + 273.15;
  return total;
}

float 
Celsius_Fahrenheit ()
{
  total = (valor1 * 9 / 5) + 32;
  return total;
}

float valor1, total;

int 
main ()
{
  char Salir = 'N';
  while(Salir == 'N' || Salir == 'n')
    {
        printf (":::::::::::::::::::::::::::::::: \n");
        printf (":: CONVERSIÓN DE TEMPERATURAS :: \n");
        printf (":::::::::::::::::::::::::::::::: \n");
        printf ("\n Ingrese un mumero para hacer las conversiones \n");
        scanf ("%f", &valor1);
        printf ("=================================================== \n");
        printf ("== Grados     == Kelvin == Fahrenheit == Celsius == \n");
        printf ("=================================================== \n");
        printf ("== Kelvin     ==  %.2f  ==   %.2f     ==  %.2f   == \n", valor1, Kelvin_Fahrenheit (), Kelvin_Celsius ());
        printf ("=================================================== \n");
        printf ("== Fahrenheit ==  %.2f  ==   %.2f     ==  %.2f   == \n", Fahrenheit_Kelvin (), valor1, Fahrenheit_Celsius ());
        printf ("=================================================== \n");
        printf ("== Celsius    ==  %.2f  ==   %.2f     ==  %.2f   == \n", Celsius_Kelvin (), Celsius_Fahrenheit (), valor1);
        printf ("=================================================== \n");
        printf ("¿Quieres continuar? (S/N): \n");
        scanf ("%c", &Salir );
        if (Salir == 'S' || Salir == 's')
          {
              printf ("Adiós Hasta pronto... \n");
          }
        else
          {
              printf ("Error vuelve a intentarlo \n");
          }
    }
  return 0;
}