//https://judge.beecrowd.com/pt/problems/view/1146
#include <stdio.h>
int main(){
   
   int x;
    while(scanf("%d",&x)){
        if(x==0)
            break;
        for(int i=1;i<=x;i++){
            printf("%d",i);
            if(i!=x) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}