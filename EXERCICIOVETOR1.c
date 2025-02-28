/*EXERCICIO 1: FAÇA UM CODIGO QUE CALCULE A SOMA DE 10 NUMEROS INSERIDOS PELO USUARIO USANDO VETORES*/
#include <stdio.h>
 
int main()
{
     int valores[10];
     for (int i=0; i<10;i++){
         printf("adicione um valor:");
         scanf("%d", &valores[i]);
     }
     int soma = 0;{
   for (int i=0; i<10;i++){
       soma=valores[i] + soma;
        printf("vetor[%d]:%d",i,valores[i]);
   }
   printf("a soma dos numeros do vetor é:%d",soma);
   }
    return 0;
}
