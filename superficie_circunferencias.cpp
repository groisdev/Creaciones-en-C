#include <stdio.h>
#define PI 3.14159
int main(){
int radio = 1;
int i = 0;
float circ = 0;
while(radio != 0){
	do{
		printf("Escribe el radio de la circunferencia: ");
		scanf("%d", &radio);
	}while(radio < 0);
	
	circ = PI * (radio * radio);
		if(radio != 0){
			printf("La circunferencia es: %.2f\n", circ);
			i++;
		}
}
printf("\nSe pudieron calcular %d circunferencias", i);
	
	return 0;
}
