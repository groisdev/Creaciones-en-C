#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGO 10
int main(){
	
/*Por cada segundo en el rango del rand,
se genera un numero aleatorio, lo que hay es una semilla
integrada a una funcion ya que el rand solo genera un numero partiendo siempre
de la misma posicion de la lista*/	

srand(time(NULL));	
int x = rand() % RANGO;
int numa;

/*Para comprobar el funcionamiento del código, borrar este comentario y escribir
el siguiente codigo en "linea 16":	printf("%d\n", x); */
	
	printf("Intenta adivinar el numero entre 0 y 9, elige un numero para comenzar: ");
	scanf("%d", &numa);
	

	
	if(numa != x){
		while(numa != x){
			printf("El numero es incorrecto, prueba de nuevo: ");
			scanf("%d", &numa);
		}
	}
	
	printf("Adivinaste!!, el numero correcto era %d", x);
	return 0;
}
