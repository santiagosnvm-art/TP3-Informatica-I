#include <stdio.h>
#define PI 3.1415

float CalcularAreaRectangulo(float longitud,float altura);
float CalcularPerimetroRectangulo(float longitud,float altura);
float CalcularAreaCirculo(float radio);
float CalcularPerimetroCirculo(float radio);
void ImprimirResultados(float area,float perimetro);

int main(int argc, char *argv[]) {
	int elegir;
	float longitud,altura,radio;
	float area,perimetro;
	
	printf("Elija la figura que quiere calcular:");
	printf("\n1 Rectangulo || 2 circulo");
	printf("\nOpcion:");
	scanf("%d", &elegir);
	
	while(elegir!=1 && elegir!=2){
		printf("Opcion invalida, Ingrese 1 o 2: ");
		scanf("%d", &elegir);
	}

	if(elegir==1){
		printf("\nEligio la opcion del rectangulo\n");
		printf("\nIngrese longitud del rectangulo: ");
		scanf("%f", &longitud);
		printf("Ingrese altura del rectangulo: ");
		scanf("%f", &altura);
		
		area=CalcularAreaRectangulo(longitud,altura);
		perimetro=CalcularPerimetroRectangulo(longitud,altura);
		
		ImprimirResultados(area,perimetro);
	}
	else{
		printf("\nEligio la opcion del circulo");
		printf("\nIngrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area=CalcularAreaCirculo(radio);
		perimetro=CalcularPerimetroCirculo(radio);
		
		ImprimirResultados(area,perimetro);
	}
	
	return 0;
}

float CalcularAreaRectangulo(float longitud,float altura){
	return longitud*altura;
}
float CalcularPerimetroRectangulo(float longitud,float altura){
	return 2*(longitud+altura);
}
float CalcularAreaCirculo(float radio){
	return PI*radio*radio;
}
float CalcularPerimetroCirculo(float radio){
	return 2*PI*radio;
}
void ImprimirResultados(float area,float perimetro){
	printf("\nEl area es: %.2f", area);
	printf("\nEl perimetro es %.2f", perimetro);
}
