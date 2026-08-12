
#include <stdio.h>

int main(){
	//------------------------------------------------------------------------
	// 1. Precedencia de operadores
	//------------------------------------------------------------------------
	// A multiplicação (*) tem precedencia maior que a adição (+)
	int res_precedencia = 5 + 3 * 2; // Equivalentee a 5 + 6 = 11
	printf ("1. precedencia (5 + 3 * 2) = %d\n" , res_precedencia);
	
	// O uso de parenteses altera essa ordem pois possuem prioridade máxima 
	int res_parenteses = (5 + 3) * 2; // Equivalente a 8 * 2 = 16
	printf ("  com parenteses ((5 + 3) * 2) = %d\n" , res_parenteses);
	
	//------------------------------------------------------------------------
	// 2. Modeladores de tipos (casting Explicito 
	//------------------------------------------------------------------------
	int a = 5, b = 2;
	
	// Divisão inteira: o resultado descarta a parte fracionaria (resulta em 2)
	float div_inteira = a / b;
	printf("\n2. Divisao inteira (5 / 2) = %.2f\n" , div_inteira);
	
	// Conversão explicita: tranforma 'a' em float temporariamente para obter a precisão decimal
	float div_com_cast = (float)a / b;
	printf("	Divisao com cast ((float)5 / 2) = %.2f\n" , div_com_cast);

	//------------------------------------------------------------------------
	// 3. Operador Virgula (,)
	//------------------------------------------------------------------------
	// O operador virgula avalia todas as expresões da esquerda para a direita
	// e retorna o valor da ultima expressão.
	int x;
	x = (printf)("\n3. Executando dentro do operador virgula...\n"), 10 + 20;
	
	// o printf foi executado e 'x' recebeu um valor 30
	printf("  Valor final armazenado em x = %d\n" , x);
	
	return 0;
	
}
