#include <stdio.h>
#include <ctype.h>

int main(){
char c;

	printf("Escribe un caracter: ");
	scanf("%c", &c);
	fflush(stdin);	
		
	if (!isspace(c)){
		while(!isspace(c)){
			printf("Escribe un caracter: ");
			scanf("%c", &c);		
			fflush(stdin);	
		}
	}
	printf("Tiene un espacio su caracter");
	
	return 0;
}
