//https://judge.beecrowd.com/pt/problems/view/1154
#include <stdio.h>
int main(){
   int n,m=0,i=0;;
   while(scanf("%d",&n)){
       if(n<0) break;
       i++;
       m+=n;
   }
   printf("%.2f\n",(float)m/i);
    return 0;
}