#include "Funciones.h"

int main() {
	int a,b;
	int op;
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
				alfil();
				break;
			case 6:
				printf("Adios\n");
				break;
			default:
				printf("Opcion no valida\n");
				break;
		}
	}while(op != 6);
	return 0;
}
