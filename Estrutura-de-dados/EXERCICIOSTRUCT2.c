/******************************************************************************
Exercício 2: Declare uma struct chamada Ponto que represente um ponto no plano cartesiano (x, y). Em
seguida, crie uma função que calcule a distância entre dois pontos.
Sejam os pontos ‘C’ e ‘D’:
distCD² = (xD – xC)² + (yD – yC)
*******************************************************************************/
#include <stdio.h>
#include <math.h>
struct pc{
    int x;
    int y;
    
};
int main()

{
    struct pc valorc;
    printf("Defina o valor de X de C : ");
    scanf("%d",&valorc.x);
    printf("Defina o valor de Y de C : ");
    scanf("%d",&valorc.y);
    
    struct pc valord;
    printf("Defina o Valor de X de D: ");
    scanf("%d",&valord.x);
    printf("Defina o Valor de Y de D: ");
    scanf("%d",&valord.y);
 
 int discd1;
 int discd2;
 int discd3;
 
discd1 = (valord.x-valorc.x);
discd2 = (valord.y-valorc.y);
discd1 = pow(discd1,2);
discd2 = pow(discd2,2);
discd3 = discd1+discd2;

printf("o valor é %d",discd3);


    return 0;
}
