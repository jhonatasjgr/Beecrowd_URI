//https://judge.beecrowd.com/pt/problems/view/1177
#include <stdio.h>
 
int main() {
 
    int t,c=0,n[1000];
    scanf("%d",&t);
    for(int i=0;i<1000;i++){
        n[i]=c;
        if(c==t-1) c=0;
        else c++;
    }
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
 
    return 0;
}