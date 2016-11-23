#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gravar(char ch[],FILE *p_arq){
	
	int i;
	p_arq = fopen("novo.txt","a");
	for (i=0; i <= 5;i++){
		 	printf("Escreva uma frase \n");
	 		gets(ch);
			fprintf(p_arq,"%s\n", ch);
		}
		fclose(p_arq);
}
void ler(char ch[], FILE *p_arq){
	
	p_arq = fopen("novo.txt","r");
	while (fgets(ch,200,p_arq)!=NULL){
			
		 	printf("\nFrase recuperada= ");
	 		puts(ch);
	 		
	 		
	 	}
	 	fclose(p_arq);
}



 main (){
 	
 	char ch[200];
	 int i,num = 0;
	 FILE *p_arq;
 	
 	p_arq = fopen("novo.txt","a");
 	
 	if (p_arq == NULL)
 	{
 		printf("Erro na abertura do arquivo.");
 		getch();
 		return 1;
	 }
	gravar(ch,p_arq);
	
	ler(ch,p_arq);
	
	fclose(p_arq);
		 
		 

 
 	
 	return 0;
 }
