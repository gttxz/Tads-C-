#include <stdio.h>//biblioteca

int main(){//classe principal

int idade;//declarando uma variavel

printf("Digite sua idade");//imprimindo uma mensagem na tela
scanf("%d", &idade);//capturar uma variavel

if (idade >=18){//se a pessoa é maior de idade
	
	printf("Voce e maior de idade \n");// mostra esse mensagem na tela
}else{// se a pessoa for menor de idade
	
	printf("Voce e menor de idade");//imprime essa mensagem na tela
	
}
}
