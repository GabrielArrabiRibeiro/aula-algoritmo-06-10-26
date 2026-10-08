#include <stdio.h>
float volume(float l, float a, float p);
int main() {
	float larg, alt, prof;
	printf("digite a largura da caixa em cm: ");
	scanf("%f", &larg);
	printf("digite a altura da caixa em cm: ");
	scanf("%f", &alt);
	printf("digite a profundidade da caixa em cm: ");
	scanf("%f", &prof);
	printf("O volume da caixa e %.4f m³\n", volume(larg, alt, prof));
	return 0;
}
float volume(float l, float a, float p) {
	float res;
	res = (l/100) * (a/100) * (p/100);
	return res;
}
