#include <stdio.h>

int main (){// classe principal
	
	float nota1,nota2,media;
	printf("Digite a primeira nota:");// imprimir a mensagem
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1+nota2) / 2; //calculo é dividido
	
	printf("A media final e: %.2f \n",media);
	
	return 0;	
	
}
