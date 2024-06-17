//https://judge.beecrowd.com/pt/problems/view/1153
#include <stdio.h>
int main(){
   int n,f;
   scanf("%d",&n);
   f=n;
   for(int i=n-1;i>1;i--){
       f*=i;
   }
   printf("%d\n",f);
    return 0;
}