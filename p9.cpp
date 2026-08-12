#include <stdio.h>
int main(){

float preco;
const float selo = 25.00;
int total;

printf("Digite o preco total da compra");

scanf("%f", &preco);

 total = preco / selo;
 
 if (preco >= 25.00){
 
 printf("Voce ganhou %d selo(s)",total);
}else{

	printf("Voce nao ganhou nenhum selo");
	
}

return 0;

}
