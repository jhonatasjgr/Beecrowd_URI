//https://judge.beecrowd.com/pt/problems/view/1094
#include <stdio.h>
int total(int *quantia){
    int t=0;
    for(int i=0;i<3;i++){
        t+=quantia[i];
    }
    return t;
}
int main(){
    int n;
    int quantia[]={0,0,0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       int qtd;
       char tp;
       scanf("%d %c",&qtd,&tp);
       if(tp=='C') quantia[0]+=qtd;
       else if(tp=='R') quantia[1]+=qtd;
       else if(tp=='S') quantia[2]+=qtd;
    }
    printf("Total: %d cobaias\n",total(quantia));
    printf("Total de coelhos: %d\n",quantia[0]);
    printf("Total de ratos: %d\n",quantia[1]);
    printf("Total de sapos: %d\n",quantia[2]);
    printf("Percentual de coelhos: %.2f %%\n",(float)quantia[0]*100/total(quantia));
    printf("Percentual de ratos: %.2f %%\n",(float)quantia[1]*100/total(quantia));
    printf("Percentual de sapos: %.2f %%\n",(float)quantia[2]*100/total(quantia));

    return 0;
}