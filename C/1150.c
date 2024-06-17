//https://judge.beecrowd.com/pt/problems/view/1150
#include <stdio.h>
int main(){
   
    int x,z,som=0;
    scanf("%d",&x);

    while(scanf("%d",&z)){
        if(z>x){
            for(int i=0;som<=z;i+0){
                som+= x+i++;
                if(som>=z) printf("%d\n",i);
            }
            break;
        }  
    }
    return 0;
}