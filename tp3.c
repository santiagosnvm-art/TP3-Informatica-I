#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float peso;
	float altura;
	float BMI;
	
	printf("Ingresar su peso y altura para calcular su indice de masa corporal\n\n");
	
	printf("Peso (kg): ");
	scanf("%f", &peso);
	
	while (peso < 0){
	printf("ERROR\nEl peso no puede ser negativo.\n");
	printf("Ingrese nuevamente el peso: ");
	scanf("%f", &peso);}
	
	printf("\nAltura (m): ");
	scanf("%f", &altura);
	
	while (altura < 0){
	printf("ERROR\nLa altura no puede ser negativa.\n");
	printf("Ingrese nuevamente la altura: ");
	scanf("%f", &altura);}
	
	BMI= peso/(altura*altura);
	
	printf("\nSu indice de masa corporal es: %.1f\n", BMI);
	
	printf("\n       Indice     |      Condicion");
	printf("\n\n-----------------------------------------\n");
	printf("\n      < 18.5      |      Bajo peso");
	printf("\n     18.5-24.9    |       Normal");
	printf("\n     25.0-29.9    |      Sobrepeso");
	printf("\n      >= 30       |       Obesidad");
	
	printf("\n\nSu condicion es: ");
	
	if (BMI < 18.5){
	printf("Bajo peso");}
	
	else if (BMI < 25.0){
	printf("Normal");}
	
	else if (BMI < 30.0){
	printf("Sobrepeso");}
	
	else{
	printf("Obesidad");}

	return 0;
}
