//https://judge.beecrowd.com/pt/problems/view/1145
#include <stdio.h>
int main(){
    int x,y,q=0;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++){
        q++;
        printf("%d",i);
        if(q==x){
            printf("\n");
            q=0;
        }else{
            printf(" ");
        }
    }
    return 0;
}