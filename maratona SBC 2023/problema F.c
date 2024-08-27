#include <stdio.h>

int main()
{
    int d,c,r,qtd=0;
    scanf("%d %d %d",&d,&c,&r);
    int cs[c],rs[r];
    for(int i=0;i<c;i++)
        scanf("%d",&cs[i]);
    for(int i=0;i<r;i++)
        scanf("%d",&rs[i]);
    if(c>=r){
        for(int i=0;i<c;i++){
            if(d>cs[i]){
                d-=cs[i];
                qtd++;
            } 
        if(i<r){
           d+=rs[i]; 
           qtd++;
        } 
    }
    }else{
        for(int i=0;i<r;i++){
            if(i<c && d>cs[i]){
                d-=cs[i];
                qtd++;
            }
            d+=rs[i];
            qtd++;
        }
    }
    printf("%d",qtd);

    return 0;
}