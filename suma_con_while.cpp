#include <stdio.h>
#define LIM 5
int main(){

int i;
int numx = 0;
int total = 0;

	while (i < LIM){
		printf("Escriba un numero: ");
		scanf("%d", &numx),
		total = total + numx;
		i++; 
	}
	printf("El total es igual a: %d", total);
	return 0;
}
