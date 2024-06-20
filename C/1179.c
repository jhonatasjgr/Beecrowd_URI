//https://judge.beecrowd.com/pt/problems/view/1179
#include <stdio.h>
int main() {
    int par[5];
    int impar[5];
    int posP=0,posI=0;
    for(int i=0;i<15;i++){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            par[posP] = x;
            posP++;
            if(posP==5) {
               for(int j=0;j<5;j++){
                    printf("par[%d] = %d\n",j,par[j]);
                } 
                posP=0;
                
            }
        }else{
            impar[posI] = x;
            posI++;
            if(posI==5){
                for(int j=0;j<5;j++){
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                posI=0;
            }
        }
    }
    for (int i=0;i<posI;i++)
        printf("impar[%d] = %d\n", i, impar[i]);


  for (int i=0;i<posP;i++)
        printf("par[%d] = %d\n", i, par[i]);
    return 0;
}