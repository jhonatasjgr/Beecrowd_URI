//https://judge.beecrowd.com/pt/problems/view/1173
#include <stdio.h>
 
int main() {
 
    int n[10];
    int v;
    scanf("%d",&n[0]);
    for(int i=1;i<10;i++){
        n[i]=n[i-1]*2;
    }
    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}