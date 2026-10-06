#include <stdio.h>
float somaDoisValores (float a, float b);
int main(){
	float x, y;
	printf("Valor 1: ");
	scanf("%f", &x);
	printf("Valor 2: ");
	scanf("%f", &y);
	printf("Resultado: %.f\n", somaDoisValores(x,y));
	return 0;
}
float somaDoisValores(float a, float b){
	float result;
	result = a + b;
	return result;
}
