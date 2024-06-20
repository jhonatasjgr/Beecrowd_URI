//https://judge.beecrowd.com/pt/problems/view/1176
#include <stdio.h>

long long int fib(int n){
    long long int p=0, s=1, x;
    for(int i=0;i<n;i++){
        x = p;
        p = s;
        s = p+x;
    }
    return p;
}

int main() {
 
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,fib(n));
    }
 
    return 0;
}