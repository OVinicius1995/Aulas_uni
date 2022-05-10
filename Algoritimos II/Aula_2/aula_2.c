#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	int teste;

	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	//printf("A idade digitada foi %d \n", idade);

	if (idade >= 18) {
		printf("Voce e maior.");
		printf("A idade e: %d \n", idade);
	} else {
		printf("Voce e menor.");
		printf("A idade e: %d \n", idade);
	}
	
	int numSemana;
	printf("Digite um numero de 1 a 7 \n");
	scanf("%d", &numSemana);

	switch (numSemana)
	{
	case 1 : {
		printf("Domingo");
		break;
	}

		case 2 : {
		printf("Segunda");
		break;
	}

		case 3 : {
		printf("Terca");
		break;
	}

		case 4 : {
		printf("Quarta");
		break;
	}

		case 5 : {
		printf("Quinta");
		break;
	}

		case 6 : {
		printf("Sexta");
		break;
	}

		case 7 : {
		printf("Sabado");
		break;
	}

	default : {
		printf("Numero invalido");

		break;

	}

	}
	return 0;
}
