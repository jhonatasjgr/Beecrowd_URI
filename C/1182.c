//https://judge.beecrowd.com/pt/problems/view/1182
#include <stdio.h>

int main(){
    int c;
    float s=0,m[12][12];
    char t;
    
    scanf("%d %c",&c,&t);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&m[i][j]);
            if(c==j) s+=m[i][j];
        }
    }
    if(t=='S') printf("%.1f\n",s);
    else if(t=='M') printf("%.1f\n",s/12);
    return 0;
}