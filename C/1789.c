#include <stdio.h>
 
int main() {
 
    int n;
   while(scanf("%d",&n)!=EOF){
       int maior;
       for(int i=0;i<n;i++){
           int t;
           scanf("%d",&t);
          if(i==0) maior = t;
          else if(t>maior) maior =t;
       }
       if(maior<10) printf("1\n");
       else if(maior<20) printf("2\n");
       else printf("3\n");
   }
 
    return 0;
}