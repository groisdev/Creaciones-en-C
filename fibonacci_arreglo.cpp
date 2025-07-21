/*Serie Fibonacci
Kenneth Grois
95.425.358
Turno mañana*/
#include <stdio.h>
int main(){

int n = 0;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	
int fib[n + 2];
fib[0] = 0;
fib[1] = 1;

	for(int i = 2; i < n + 2; i++){
	fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	for(int i = 0; i < n + 2; i++){
		if(i < n + 1){
			printf("%d, ", fib[i]);	
		}else{
			printf("%d", fib[i]);	
		}
	}
	
	return 0;
}
