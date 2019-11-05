#include "Funciones.h"

void menu()
{
	printf("Escoge una pieza\n");
	printf("\t1. Torre\n");
	printf("\t2. Rey\n");
	printf("\t3. Reina\n");
	printf("\t4. Caballo\n");
	printf("\t5. Alfil\n");
	printf("\t6. Salir\n");
}
pos leer_coord(pos a)
{
	printf("Ingresa la fila y la columna\n");
	scanf("%d %d",&a.x , &a.y);
	return a;
}
void torre(pos a, pos b)
{
	if((a.x-b.x == 0)||(a.y-b.y == 0)){
		printf("El movimiento para la torre es valido\n");
	}else{
		printf("El movimiento para la torre no es valido\n");	
	}
}
