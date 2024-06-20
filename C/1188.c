//https://judge.beecrowd.com/pt/problems/view/1188
#include <stdio.h>
 
int main() {
 
    char op;
    double matriz[12][12], soma=0,linIn=5,linFim=6;
    int qtd=0;
    scanf("%c",&op);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%lf",&matriz[i][j]);
    for(int i=7;i<=11;i++){
        for(int j=linIn;j<=linFim;j++){
            soma+=matriz[i][j];
            qtd++;
        } 
        linIn--;
        linFim++;
        if(linIn==0||linFim==11) break;
    }
    if(op=='S') printf("%.1lf\n",(double)soma);
    else printf("%.1lf\n",(double)soma/qtd);
 
    return 0;
}