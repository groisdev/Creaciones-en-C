#include <stdio.h>
#define LIM 3

int main(){

int a, suma, promedio;
int i = 0;

	while (i < LIM){
			printf("Escribe un numero: ");
			scanf("%d", &a);
			if(a <= 0){
				while(a <= 0) {
				printf("El numero no puede ser menor o igual 0, vuelva a colocar otro: ");
				scanf("%d", &a);	
				}	
			}
		suma = suma + a;	
	i++;
	}
		
	promedio = suma / LIM;
	printf("Tu promedio es igual a: %d", promedio);
	
	return 0;
}
