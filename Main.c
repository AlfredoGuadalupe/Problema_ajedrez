#include "Funciones.h"

int main() {
	pos a,b;
	int op;
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				leer_coord(&a);
				leer_coord(&b);
				torre(a,b);
				break;
			case 2:
				leer_coord(&a);
				leer_coord(&b);
				rey(a,b);
				break;
			case 3:
				leer_coord(&a);
				leer_coord(&b);
				reina(a,b);
				break;
			case 4:
				leer_coord(&a);
				leer_coord(&b);
				caballo(a,b);
				break;
			case 5:
				leer_coord(&a);
				leer_coord(&b);
				alfil(a,b);
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
