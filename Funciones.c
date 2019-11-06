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
	while((a.x>8)||(a.y>8)||(a.x<1)||(a.y<1)){
		printf("Pocisión fuera del tablero, ingrese otras coordenadas");
		scanf("%d %d",&a.x , &a.y);
	}
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

void alfil(pos a, pos b)
{
	int pen;
	pen=(b.y-a.y)/(b.x-a-x);
	if((pen==1)||(pen==-1)){
		printf("El movimiento para el alfil es valido\n");
	}else{
		printf("El movimiento para el alfil no es valido\n");
	}
}
	   
void reina(pos a, pos b)
{
	int pen;
	pen=(b.y-a.y)/(b.x-a-x);
	if((pen==1)||(pen==-1)||(a.x-b.x == 0)||(a.y-b.y == 0)){
		printf("El movimiento para la reina es valido\n");
	}else{
		printf("El movimiento para la reina no es valido\n");
	}
}

void caballo(pos a, pos b)
{
	if((b.y==a.y+2)||(b.y==a.y-2)){
		if((b.x==a.x+1)||b.x==a.x-1))
			printf("El movimiento para el caballo es valido\n");
	}else{
		if((b.x==a.x+2)||(b.x==a.x-2)){
			if((b.y==a.y+1)||b.y==a.y-1))
			printf("El movimiento para el caballo es valido\n");
		}else{
			printf("El movimiento para el caballo no es valido\n");
		}
	}
}


