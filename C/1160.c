//https://judge.beecrowd.com/pt/problems/view/1160
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int pa,pb,anos=0;
        double g1,g2;
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        while(pa<=pb){
            pa+=pa*g1/100;
            pb+=pb*g2/100;
            anos++;
            if(anos>100) break;
        }
        if(anos>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",(int)anos);
    }
    

    return 0;
}