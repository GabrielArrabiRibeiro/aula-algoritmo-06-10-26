#include <stdio.h>
int minutos(int horas, int minut);
int main() {
	int a, b;
	printf("digite a quantidade de horas: ");
	scanf("%d", &a);
	printf("digite a quantidade de minutos: ");
	scanf("%d", &b);
	printf("a quantidade de minutos que passaram: %d\n", minutos(a,b));
	return 0;
}
int minutos(int horas, int minut) {
	int res;
	res = horas * 60 + minut;
	return res;
}
