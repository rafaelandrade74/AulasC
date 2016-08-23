#include <stdio.h>
#include <stdlib.h>

int main() {
   
   //declaração das variaveis
   
   int dias,meses,anos;
   
   //solicita entrada
   scanf("%d",&dias);
   
   anos=dias/365;
   
   meses=(dias%365)/30;
   
   dias=(dias%365)%30;
   
   if(meses>=12){
      anos++;
      meses=0;
   }
   //exibe saida
   printf("%d ano(s)\n",anos);
   
   printf("%d mes(es)\n",meses);   
   
   printf("%d dia(s)\n",dias);
    
   system("pause");
   return 0;
}
