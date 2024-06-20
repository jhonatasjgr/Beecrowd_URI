//https://judge.beecrowd.com/pt/problems/view/1149
#include <stdio.h>
int main() {
    int a,n,soma=0;
    scanf("%d",&a);
    while(scanf("%d",&n)){
        if(n<=0) scanf("%d",&n);
        for(int i=0;i<n;i++)
           soma+=(a+i);
        if(n>0) break;
    }
    printf("%d\n",soma);
 
    return 0;
}