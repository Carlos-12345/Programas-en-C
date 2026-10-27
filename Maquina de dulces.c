#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Bloque del programador.
* Programa: Maquina de dulces.
* Desarrollado por: Carlos Alcántara.
* Descripción: Este programa muestra en pantalla lo que elijas del menu, como si 
* fuera una maquina expendedora. Le faltan detalles. 
* Fecha: 15/08/2026.
* Versión: 2. 
*/

struct Producto
{ 
  char Nombre[50];
  float Precio;
};

float 
Calculo (float Precio, int Cantidad)
{
  float total, dinero, cambio;
  printf ("¿Cuantos quiere? \n");
  scanf ("%d", &Cantidad);
  total = Cantidad * Precio;
  printf ("La cantidad a pagar es: $%.2f\n", total);
  printf ("Ingrese las monedas o billetes \n");
  scanf ("%f", &dinero);
  if (dinero >= total)
    {
        printf ("\n Tome su producto \n");
        cambio = dinero - total;
        printf ("Su cambio es: $%.2f \n", cambio);
    }  
  else
    {
        cambio = total - dinero;
        printf ("Falto ingresar: $%.2f  \n", dinero);
        printf ("Vuelve a intentarlo \n");
    }
  printf ("\nPresiona Enter para continuar...");
  getchar ();  
  getchar ();  
      
  return 0;  
}

int 
main ()
{
  struct Producto p[10];
  int opcion, Cantidad;

  strcpy (p[0].Nombre, "Donas");
  p[0].Precio = 20.00;

  strcpy (p[1].Nombre, "Palomitas");
  p[1].Precio = 15.00;

  strcpy (p[2].Nombre, "Refresco");
  p[2].Precio = 18.50;

  strcpy (p[3].Nombre, "Cacahuates");
  p[3].Precio = 10.00;

  strcpy (p[4].Nombre, "Bombones");
  p[4].Precio = 8.00;

  strcpy (p[5].Nombre, "Chocolate");
  p[5].Precio = 24.00;

  strcpy (p[6].Nombre, "Burritos");
  p[6].Precio = 22.00;

  strcpy (p[7].Nombre, "Galletas");
  p[7].Precio = 28.50;

  strcpy (p[8].Nombre, "Jugo");
  p[8].Precio = 16.00;

  strcpy (p[9].Nombre, "Sabritas");
  p[9].Precio = 25.00;

  do
    {
        system ("clear");
        printf (" BIENVENIDO A LA MAQUINA DE DULCES \n");
        printf ("Elija el producto que quiera 1 - 10 \n"); 
        for (int i = 0; i < 10; i++)
          {
              printf ("%d. - %s - $%.2f \n", i + 1, p[i].Nombre, p[i].Precio);
          }
         
        printf ("11. Salir del programa \n");
        scanf ("%d", &opcion);
    
    if (opcion == 11)
      {
          printf ("Saliendo del programa............................................\n");
          printf (".................................................................\n");
          break;
      }
    if (opcion >= 1 && opcion <= 10)
      {
         printf ("Elegiste: %s \n",p[opcion - 1].Nombre);
         Calculo (p[opcion - 1].Precio, Cantidad); 
      } 
    else
      {
         printf("Opcion invalida, intente de nuevo \n");
      }  
    }   
  while (opcion != 11);
  return 0;  
}