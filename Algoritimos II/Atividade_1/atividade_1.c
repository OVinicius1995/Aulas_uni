#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int apt;
	double litros;
	double total = 0.0;
	int contador;
	int ap; 
	
	printf("Digite a quantidade de apartamentos: \n");
	scanf("%d",&apt);
	
	printf("qtde apatartamentos: %d \n", apt);
	
	for (contador = 1; contador<= apt; contador++){
	printf("Digite a qtde de litros do apartamento: %d \n", contador);
	scanf("%d", &litros);
	
	if (contador == 1){
		total=litros;
		ap=contador;
		
		//printf("contador %d \n", contador);
		
		
	}else{
		if(litros>total){
			total = litros;
			ap=contador;
		}
	
	}

}
	
	//printf("O apartamento que mais gastou foi: %d \n", apt);
	//printf("gastou: %d",total);
	
	
	printf("O apartamento que mais gastou foi: %d \n", ap);
	printf("E gastou: %d",total / 1000.0);
	printf(" metros cubicos \n");
	
	system("pause");
	return 0;
}
