#include <stdio.h>
#include <stdlib.h>

int torre();

int main() {
	int a,b;
	int op;
	menu();
	scanf("%d",op);
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				torre();
				break;
			case 2:
				rey();
				break;
			case 3:
				reina();
				break;
			case 4:
				caballo();
				break;
			case 5:
				printf("Adios\n");
				break;
			default:
				printf("Opcion no valida\n");
				break;
		}
	}while(op != 5);
	return 0;
}
