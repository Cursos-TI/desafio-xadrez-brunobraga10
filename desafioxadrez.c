#include <stdio.h>

int main(){

int Torre = 1; //variavel da torre
int Bispo = 1; // variavel bispo
int cavalo = 1; // variavel do cavalo

//movimento da torre
printf("\nmovimento da torre\n");


while(Torre < 6) // condição, para executar movimento 5 vezes apenas
{
    printf("direita\n"); // imprimindo movimento para navegante
    Torre++; // inclementar 1 cada vez que rodar código
}

// movimento do bispo

printf(" \nmovimento do bispo \n");

do
{
    printf("cima,direita \n"); // imprimindo movimento para navegante
    Bispo++; // inclementar 1 cada vez que o código rodar
}while(Bispo < 6); // condição, para executar até 5 vezes apenas

// movimento da rainha
printf("\nmovimento da Rainha \n");

for(int Rainha = 1;Rainha < 9;Rainha++) //inicialização,condição e inclemento
{
    printf("esquerda\n"); //impressão de movimento para navegante
}

printf("\n\nmovimento do cavalo \n");

for(cavalo = 1;cavalo <= 1;cavalo++)//inicialização,condição e inclemento (loop externo)
{
//imprime duas vezes para baixo
printf("baixo\n");
printf("baixo\n");

    for(int cavalo1 = 1;cavalo1 <= cavalo;cavalo1++)//inicialização,condição e inclemento (loop interno)
    printf("esquerda \n"); // imprime uma vez para esquerda
}
return 0;
}