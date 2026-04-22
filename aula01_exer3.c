#include <stdio.h>

int main() {
	int quantidade = 1;

	float preco_coca_cola = 7.65;
	float preco_salgadinho_doritos = 9.99;
	float preco_chocolate_kitkat = 2.75;
	float preco_pacoquinha = 2.00;
	float preco_rosquinha_frita = 3.15;

	float total_coca = quantidade * preco_coca_cola;
	float total_salgadinho = quantidade * preco_salgadinho_doritos;
	float total_chocolate = quantidade * preco_chocolate_kitkat;
	float total_pacoquinha = quantidade * preco_pacoquinha;
	float total_rosquinha = quantidade * preco_rosquinha_frita;

	printf("Produto: coca-cola\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_coca_cola);
	printf("O valor total e: R$ %.2f\n", total_coca );

	printf("Produto: salgadinho_doritos\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_salgadinho_doritos);
	printf("O valor total e: R$ %.2f\n", total_salgadinho );

	printf("Produto: chocolate_kitkat\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_chocolate_kitkat);
	printf("O valor total e: R$ %.2f\n", total_chocolate );

	printf("Produto: pacoquinha\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_pacoquinha);
	printf("O valor total e: R$ %.2f\n", total_pacoquinha );

	printf("Produto: rosquinha-frita\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_rosquinha_frita);
	printf("O valor total e: R$ %.2f\n", total_rosquinha );
	
	return 0;
}
