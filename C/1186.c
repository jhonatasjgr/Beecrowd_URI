//https://judge.beecrowd.com/pt/problems/view/1186
#include <stdio.h>
 
int main() {
 
    char op;
    double matriz[12][12], soma=0,limCol=11;
    int qtd=0;
    scanf("%c",&op);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%lf",&matriz[i][j]);
    for(int i=1;i<12;i++){
        for(int j=11;j>=limCol;j--){
            soma+=matriz[i][j];
            qtd++;
        }
        limCol--;
        if(limCol==0) break;
    }
    if(op=='S') printf("%.1lf\n",(double)soma);
    else printf("%.1lf\n",(double)soma/qtd);
 
    return 0;
}