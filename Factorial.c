#Include <stdio.h>

int main()
{
  int valor = 0
  
  int valor;
  printf ("\n Inserte un valor del 0 al 5 \n);
  scanf ("%d", &valor);
  
  long factorial (int valor);
    //int valor = 5;
    //int valor = 4;
    //int valor = 3;
    //int valor = 2;
    //int valor = 1;
    //int valor = 0;
    if (valor == 0) /* Caso base */
      //return 1;
      return 1; /* como 0! = 1, regresa 1*/
    else
      //return 5 * factorial (4)
      //return 4 * factorial (3)
      //return 3 * factorial (2);
      //return 2 * factorial (1);
      //return 1 * factorial (0)
      return valor * factorial (valor - 1); /* llamada a esta misma funcion */
    if (valor == 1) 
          //return 2;
          return 2; 
    else 
      //return 5 * factorial (4)
      //return 4 * factorial (3)
      //return 3 * factorial (2);
      //return 2 * factorial (1);
          return valor * factorial (valor - 2);
     if (valor == 2) 
            //return 3;
            return 3;
     else 
      //return 5 * factorial (4)
      //return 4 * factorial (3)
      //return 3 * factorial (2);
          return valor * factorial (valor -3);
     if (valor == 4)
          }
          
          }
