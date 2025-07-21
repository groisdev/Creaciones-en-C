#include <stdio.h>
#define LIM 20

int main(){
int x;
int par = 0;
int impar = 0;
int i = 1;	
	
	while(i <= LIM){
		printf("Escribir un numero: ");
		scanf("%d", &x);
		
		if(x % 2 == 0){
		par = par + 1;	
		} else {
		impar = impar + 1;
		}
		
		i++;	
	}
	printf("La cantidad de numeros pares es igual a %d\nLa cantidad de numeros impares es igual a %d", par, impar);
	return 0;
}
