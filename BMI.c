#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso;
	float altura;
	float BMI;
	
	printf("Ingresar su peso y altura para calcular su indice de masa corporal\n\n");
	
	printf("Peso(kg): ");
	scanf("%f", &peso);
	
	printf("\nAltura(m): ");
	scanf("%f", &altura);
	
	BMI = (float)peso/(altura*altura);

	printf("\nSu indice de masa corporal es: %.1f\n", BMI);
	
	printf("\n       Indice     |      Condicion");
	printf("\n\n-----------------------------------------\n");
	printf("\n      < 18.5      |      Bajo peso");
	printf("\n     18.5-24.9    |       Normal");
	printf("\n     25.0-29.9    |      Sobre peso");
	printf("\n      >= 30       |       Obesidad");
	
	return 0;
}

