#include <stdio.h>//biblioteca

int main(){//classe principal
	
	const float cotacao_dolar = 5.11;//valor que nao pode ser mudado (const)
	float reais,dolares;//declarando as variaveis
	
	printf("Digite o valor em reais (R$):");//imprime uma mensagem na tela
	
	scanf("%f", &reais);//captura a variavel
	
	dolares = reais / cotacao_dolar;//calculo para descobrir o valor em dolar
	
	printf(" O valor equivalente em dolares e : US$ %.2f \n", dolares);//imprime uma mensagem na tela
	
}
