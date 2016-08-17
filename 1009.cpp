#include <stdio.h>

int main() {

	char funcionario;
	float salario,comisao,diferenca;

	scanf("%s %f %f", &funcionario,&salario,&comisao);


	diferenca = comisao *15/100;
	
	

	
	printf("TOTAL = R$ %.2f\n",salario + diferenca);

	return 0;
}
