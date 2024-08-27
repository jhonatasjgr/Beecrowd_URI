#include <stdio.h>
int qtd(int n){
   int soma=0;
   while(1){
       soma+=n%10;
       n%=10;
       if(n<=1) break;
   }
   return soma;
}
int main()
{
    printf("123=%d",qtd(123));
    
    return 0;
}