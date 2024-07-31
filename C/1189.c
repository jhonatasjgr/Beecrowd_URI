//https://judge.beecrowd.com/pt/problems/view/1189
#include <stdio.h>

int main(){
    double soma=0,matriz[12][12];
    char op;
    int qtd,lim=0;
    scanf("%c",&op);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%lf",&matriz[i][j]);
        
    for(int i=1;i<=5;i++){
        for(int j=0;j<=lim;j++){
            soma+=matriz[i][j];
            qtd++;
        }
        lim++;
    }
    lim=4;
    for(int i=6;i<=10;i++){
        for(int j=lim;j>=0;j--){
            soma+=matriz[i][j];
            qtd++;
        }
        lim--;
    }
    if(op=='S') printf("%.1lf\n",soma);
    else printf("%.1lf\n",soma/qtd);

    return 0;
}