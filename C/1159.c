//https://judge.beecrowd.com/pt/problems/view/1159
#include <stdio.h>
int main() {
    int x;
    while(scanf("%d",&x)&&x!=0){
        int s=0;
        for(int i=1;i<=5;i+0){
            if(x%2==0){
                s+=x;
                i++;
            }
            x++;
        }
        printf("%d\n",s);
    }
    return 0;
}