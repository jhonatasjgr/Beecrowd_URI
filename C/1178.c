//https://judge.beecrowd.com/pt/problems/view/1178
#include <stdio.h>
 
int main() {
 
   double n[100];
  scanf("%lf",&n[0]);
  for(int i=1;i<100;i++){
      n[i] = n[i-1]/2;
      printf("N[%d] = %.4lf\n",i-1,n[i-1]);
  }
    printf("N[99] = %.4lf\n",n[99]);
 
    return 0;
}