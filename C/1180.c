//https://judge.beecrowd.com/pt/problems/view/1180
#include <stdio.h>
void menor(int *x,int n){
    int menor=x[0],pos;
    for(int i=0;i<n;i++){
        if(menor>x[i]){ 
            menor=x[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);
}
int main() {
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    menor(x,n);
    return 0;
}