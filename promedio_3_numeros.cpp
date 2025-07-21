#include <stdio.h>

int main(){
//ambiente, declaración de variables y constantes
int x, y, z;

/*int x;
int y;
int z; */
//paso 1, ingresar los datos
	printf("ingrese un nro: ");
	scanf("%d", &x);
	
	puts("Ingrese un nro: ");
	scanf("%d", &y);
// paso 2. sumar los datos
	z = x + y; //int z = x + y; 
//paso 3. mostrar el resultado
	printf("El resultado de %d + %d es %d\n", x,y,z);
	
    return 0;
}
