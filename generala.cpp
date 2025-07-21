#include <stdio.h>

int main(){
int a = 0;
int uno = 0;
int dos = 0;
int tres = 0;
int cuatro = 0;
int cinco = 0;
int seis = 0;
	
	for(int i = 0; i < 5; i++){
		printf("Tira un dado: ");
		scanf("%d", &a);
		
		switch(a){
			
			case 1:
				uno++;
			break;
			
			case 2:
				dos++;
			break;			
			
			case 3:
				tres++;
			break;			

			case 4:
				cuatro++;
			break;
			
			case 5:
				cinco++;
			break;

			case 6:
				seis++;
			break;			
		}
	}
	
	if(uno == 5 || dos == 5 || tres == 5 || cuatro == 5 || cinco == 5 || seis == 5)
		printf("GANASTE GENERALA!!!");
	
	else if (uno == 4 || dos == 4 || tres == 4 || cuatro == 4 || cinco == 4 || seis == 4)
		printf("GANASTE POKER!!!");
		
	else if(uno == 3 || dos == 3 || tres == 3 || cuatro == 3 || cinco == 3 || seis == 3)
		printf("GANASTE FULL!!!");
		
	else
		printf("No ganaste nada");
		
	return 0;
}
