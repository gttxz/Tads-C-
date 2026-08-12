#include <stdio.h>//biblioteca

int main(){//classe principal

int idade; // declarando uma variavel

  printf("digite a sua idade:");//imprime a mensagem
  scanf("%d",&idade);//(&) busca uma variável

  if (idade >=18){//se idade for maior ou igual a 18, ele pode dirigir
  printf("Voce ja pode tirar a carteira de motorista! \n"); //imprime uma mensagem
  
  }
  
  printf("Fim do programa. \n"); //imprime uma mensagem na tela
  
  return 0;// fim do programa
}
  
