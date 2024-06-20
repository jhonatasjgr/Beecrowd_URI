//https://judge.beecrowd.com/pt/problems/view/1185
#include <stdio.h>
 
int main() {
 
    char op;
    double matriz[12][12], soma,limCol=10;
    int qtd=0;
    scanf("%c",&op);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%lf",&matriz[i][j]);
    for(int i=0;i<11;i++){
        for(int j=0;j<=limCol;j++){
            soma+=(float)matriz[i][j];
            qtd++;
        }
        limCol--;
    }
    if(op=='S') printf("%.1lf\n",(double)soma);
    else printf("%.1lf\n",(double)soma/qtd);
 
    return 0;
}