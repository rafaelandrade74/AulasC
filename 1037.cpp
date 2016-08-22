#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double entrada;

scanf("%lf",&entrada);

if (entrada > 0 && entrada <= 25.0000){
	printf("Intervalo (0,25]\n");
}
else if(entrada > 25.0000 && entrada <= 50.0000){
	printf("Intervalo (25,50]\n");
}
else if (entrada > 50.0000 && entrada <= 75.0000){
	printf("Intervalo (50,75]\n");
}
else if (entrada > 75.0000 && entrada <= 100.0000){
	printf("Intervalo (75,100]\n");
}
else {
	printf("Fora de intervalo\n");
}

	return 0;
}
