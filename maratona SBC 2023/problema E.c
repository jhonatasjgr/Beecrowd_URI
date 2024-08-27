#include <stdio.h>
int posMaior(int *f,int n){
    int pos=0;
    for(int i=0;i<n;i++)
        if(f[i]>f[pos]) pos = i;
    return pos;
}
int soma(int n){
    if(n==0) return 0;
    int x=0;
    while(n!=0){
        x+=n%10;
        n/=10;
    }
    return x;
}
int main()
{
   int n,k;
   scanf("%d %d",&n,&k);
   int f[n];
   for(int i=0;i<n;i++)
    scanf("%d",&f[i]);
    
    for(int i=0;i<k;i++)
        if(i+1==k) printf("%d",soma(f[posMaior(f,n)]));
        else f[posMaior(f,n)] -= soma(f[posMaior(f,n)]);

    return 0;
}