#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {
	int codigos[TAM];
	float precios[TAM];
	int codigo;
	float precio;
	int mayor;
	int menor;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio\n", TAM);
	
	for(int i=0;i<TAM;i++){
		do{
			printf("\nIngrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo);
			if(codigo<1||codigo>999999999)
				printf("\nError. El codigo de barras debe estar entre 1 y 999999999\n");
		} while(codigo<1||codigo>999999999);
		codigos[i]=codigo;
		
		do{
			printf("\nIngrese el precio: ");
			scanf("%f", &precio);
			if(precio<0)
				printf("\nError. El precio no puede ser negativo");
		} while(precio<0);
		precios[i]=precio;
	}
	
	printf("\n   Codigo      Precio\n-------------------------");
	for(int i=0;i<TAM;i++)
		printf("\n%9d %12.2f\n", codigos[i], precios[i]);
	
	mayor=0;
	menor=0;
		
	for(int i=1;i<TAM;i++){
		if(precios[i]>precios[mayor])
			mayor=i;
		
		if(precios[i]<precios[menor])
			menor=i;
	}
	
	printf("\nMas caro: codigo:[%d] precio:%.2f", codigos[mayor], precios[mayor]);
	printf("\nMas barato: codigo:[%d] precio:%.2f", codigos[menor], precios[menor]);
	
	return 0;
}

