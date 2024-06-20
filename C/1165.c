//https://judge.beecrowd.com/pt/problems/view/1165
#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        int d=0;
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            if(x%j==0) d++;
        }
        if(d==2) printf("%d eh primo\n",x);
        else printf("%d nao eh primo\n",x);
    }
 
    return 0;
}