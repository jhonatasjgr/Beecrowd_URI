#include <stdio.h>
 
int main() {
 
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        int n,s=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i%2==0) s-=1;
            else s+=1;
        }
        printf("%d\n",s);
    }
    return 0;
}