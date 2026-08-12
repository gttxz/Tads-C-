#include <stdio.h>//biblioteca

int main(){//classe principal
	
	const float preco_ingresso = 30.00;//declara o preço do ingresso
	
	int quantidade;// declarando uma variavel do tipo inteiro
	float total;//declarando uma variavel do tipo float(decimal)
	
	printf("Digite a quantidade de ingressos desejado:");//imprime uma mensagem
	scanf("%d" , &quantidade);//captura uma variavel
	 
	 total = quantidade * preco_ingresso;//calculo do preço dos ingresso de acordo com a quantidade de ingresso digitados
	 
	 printf("O valor da compra e: R$ %.2f \n", total);//imprime uma mensagem
	 
	 return 0;//fim do programa
}
