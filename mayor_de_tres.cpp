#include <stdio.h>

int main(){
int x, y, z;

	printf("Escriba un numero: ");
	scanf("%d", &x);
	
	printf("Escriba un numero: ");
	scanf("%d", &y);
	
	printf("Escriba un numero: ");
	scanf("%d", &z);
		
	if(x > y && x > z){
		printf("El numero mas grande es %d", x);
	} else if(y > z && y > x){
		printf("El numero mas grande es %d", y);
	} else{
		printf("El numero mas grande es %d", z);
	}
	
	return 0;
}
