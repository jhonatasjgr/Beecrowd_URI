//https://judge.beecrowd.com/pt/problems/view/1164
#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        int d=0;
        scanf("%d",&x);
        for(int j=1;j<x;j++){
            if(x%j==0) d+=j;
        }
        if(x==d) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
    }
 
    return 0;
}