//https://judge.beecrowd.com/pt/problems/view/1158
#include <stdio.h>
int main(){
      int n;
      scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        int s=0;;
            for(int i=1;i<=y;i+0){
                if(x%2!=0){
                    s+=x;
                    i++;
                }
                x++;
            }
        printf("%d\n",s);
    }
    return 0;
}