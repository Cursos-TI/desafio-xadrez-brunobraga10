#include <stdio.h>

int main(){

int Torre = 1; //variavel da torre
int Bispo = 1; // variavel bispo


//movimento da torre

printf("\nmovimento da torre\n");


while(Torre < 6)
{
  printf("direita\n");
  Torre++;
}

// movimento do bispo

printf(" \nmovimento do bispo \n");

do
{
  printf("cima,direita \n");
  Bispo++;
}while(Bispo < 6);

// movimento da rainha
printf("\nmovimento da Rainha \n");

for(int Rainha = 1;Rainha < 9;Rainha++) //inicialização,condição e incremento
{
  printf("esquerda\n");
}

return 0;
}
