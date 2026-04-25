#include <stdio.h>

void regressiva (int valor){
	int fim = 0;
	for(; valor > fim; valor--){
		printf("%d ", valor);

	}

	printf("Lift-off!\n");

}
int main(){
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);

	regressiva(numero);
	return 0;
}