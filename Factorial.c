/*
	- Como primer paso pediremos al usuario el valor que desea realizar el cálculo de factorial.
	- Cambiar el tipo de dato para poder hacer cálculo más grande.
	- Tendremos que validar la entrada del usuario mediante un número positivo, si este requisito no se cumple será invalidado.
	- Cuando el cálculo de del usuario finalice, el programa deberá preguntar nuevamente si se desea hacer otro cálculo.
	
*/

#include <stdio.h>

double factorial(double x);

int main(){
	
	double numero, calculo;
	int condicion;
	
	do{
	
		//Ingresamos el número, para obtener el factorial.
		
		printf("\n\nIngrese un numero: ");
		scanf("%lf", &numero);
		
		
		//Si el número es mayor a 0, se hará el cálculo del factorial. 
		if(numero > 0){
		
			
			calculo = factorial (numero);
			
			printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
			
			
		}
		
		//En caso de que sea negativo, va a mostrar el siguiente mensaje, 
		//hasta que el usuario ingrese un número positivo.
		else{
			
			do{
					
				printf("\nOpcion invalida, intente de nuevo\n");
				
				printf("\nIngrese un numero positivo: ");
				scanf("%lf", &numero);
			
				
			}while(numero < 0);	
			
			calculo = factorial (numero);
			
			printf("\nEl factorial del numero %.0lf es de: %.0lf ", numero, calculo);
						
		}
		
			//El número 1 servirá para poder hacer otro cálculo.
			//En caso contrario si oprime el 0 el programa llegará a su fin.
			
			printf("\n¿Desea realizar otro calculo? [Si=1][No=0]: ");
			scanf("%d", &condicion);
		
	}while(condicion != 0); 
		
	//Una vez que el programa se terminé veremos la siguiente pantalla.
		
	printf("\nQue tenga un excelente día\n");
	
	return 0;
}

double factorial(double x){
	
	if(x == 0 || x == 1){
		
		return 1;
	}
	
	else{
		
		return x * factorial (x - 1);
	}
	
}
