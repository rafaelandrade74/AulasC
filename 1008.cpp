#include <stdio.h>

int main() {

	int funcionario,horas;
	float salario;

	scanf("%d %d %f", &funcionario,&horas,&salario);


	salario = horas*salario;

	printf("NUMBER = %d\n",funcionario);
	printf("SALARY = U$ %.2f\n",salario);

	return 0;
}
