#include <stdio.h>

int main(){
    int primeira_questao = 1000;//numero da menor questão que commitou
    int ultima_questao = 1010;//numero da ultima questão que commitou
    int i, quebra=1;
    
    for(i=primeira_questao;i<=ultima_questao;i++){
     printf("|[%d](https://www.beecrowd.com.br/judge/pt/problems/view/%d)",i,i);//link pra questão no beecrowd
     printf("|[resposta](https://github.com/jhonatasjgr/Beecrowd-Caxingo/questoes_c/%d.c)",i);//link pra solução no git
     if(quebra==4){
         printf("|\n");
         quebra=1;
     }
     quebra++;
    }

    return 0;
}
