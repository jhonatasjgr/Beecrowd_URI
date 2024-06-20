//https://judge.beecrowd.com/pt/problems/view/1184
#include <stdio.h>
 
int main() {
 
    char op;
    double matriz[12][12], soma;
    int qtd=0;
    scanf("%c",&op);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&matriz[i][j]);
            if(j<i){
                soma+=(float)matriz[i][j];
                qtd++;
            }
        }
    }
    if(op=='S') printf("%.1lf\n",(double)soma);
    else printf("%.1lf\n",(double)soma/qtd);
 
    return 0;
}