#include <stdio.h>
int main(){
    int questoes[]={1094,1145,1146,1149,1150,1151,1153,1154,1157,1158,1159,1160,1164,1165,1172,1173,1174,1175,1176,1177,1178,1179,1180,1181,1182,1183,1184,1185,1186,1187,1188,1864,1866};
    int ultima_questao = sizeof(questoes)/sizeof(int);
    int i, quebra=1;
    printf("%d\n\n",ultima_questao);
    for(int i=0;i<ultima_questao;i++){
        for(int j=i;j<ultima_questao;j++){
            
            if(questoes[i]>questoes[j]){
                int x = questoes[i];
                questoes[i] = questoes[j];
                questoes[j] = x;
            }
        }
    }
    
    for(i=0;i<ultima_questao;i++){
     printf("|[%d](https://www.beecrowd.com.br/repository/UOJ_%d.html)",questoes[i],questoes[i]);//link pra questão no beecrowd
     printf("|[%d](https://github.com/jhonatasjgr/Beecrowd-Caxingo/blob/main/C/%d.c)",questoes[i],questoes[i]);//link pra solução no git
     
     if(quebra==4){
         printf("|\n");
         quebra=0;
     }
     quebra++;
    }

    return 0;
}
