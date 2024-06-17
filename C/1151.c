//https://judge.beecrowd.com/pt/problems/view/1151
#include <stdio.h>
int main(){
   
   int n,p=0,s=1;
   scanf("%d",&n);
   for(int i=1;i<=n;++i){
       printf("%d",p);
        int t=s;
        s=p;
        p = s+t;
       if(i==n) printf("\n");
       else printf(" ");
   }
   
    return 0;
}