#include <stdio.h>

float calculadoraAreaTriangulo(float base, float altura);

int main() {
	float base, altura;
	int cont = 1;
	while (cont<=3)
	{
		printf("Qual a base do %d.o triangulo? ",cont);
		scanf("%f", &base);
		printf("Qual a altura do %d.o triangulo? ",cont);
		scanf("%f", &altura);
		printf("Area = %.2f\n", calculadoraAreaTriangulo(base, altura));
		cont = cont + 1; //contador
	}	
	return 0;
}

float calculadoraAreaTriangulo (float base, float altura) {
	float area;
	area = (base * altura)/2;
	return area;
}
