#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Ola mundo!");

	int idade;
	int aluguel;
	char genero;
	int total_aleatorio;

	idade = 6;
	aluguel = 1;

	total_aleatorio = idade + aluguel;
	printf("Tem que mostrar o valor da variavel %d",total_aleatorio);
	
	return 0;
}
