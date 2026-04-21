#include <stdio.h>

int main() {
	float dolar = 5.22;
	float valor_a_comprar = 50.00;
	float valor_final = valor_a_comprar / dolar;

	printf("Valor final da compra: R$ %2.f\n", valor_final);

	return 0;

}