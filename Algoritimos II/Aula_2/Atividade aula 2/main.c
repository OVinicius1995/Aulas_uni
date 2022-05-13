#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main(int argc, char const *argv[]){
   float p1, p2, p3, media = 0.0;

   printf("Digite a nota 1\n");
   scanf("%f", &p1);
   printf("Digite a nota 2\n");
   scanf("%f", &p2);
   printf("Digite a nota 3\n");
   scanf("%f", &p3);

  media = (p1+p2+p3)/3;
 

  if(media <= 5.0){
       printf("Reprovado\n");
  } else {
  
    if(media < 7.0){
        printf("Recuperação\n");
  } else {
  if(media >= 7.0 || media <= 10.0){
         printf("Aprovado\n");
  } 
 }
}
 printf("Média calculada %f\n", media);
  return 0;
}
