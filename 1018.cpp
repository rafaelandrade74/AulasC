#include <stdio.h>
 
int main() {
 
 	int Valor;	
	
scanf ("%d", &Valor);
printf ("%d\n",Valor);
 
int notas = ( Valor - (Valor%100))/100;
printf ("%d nota(s) de R$ 100,00\n", notas);
Valor = Valor%100 ;

notas = ( Valor - (Valor%50))/50;
printf ("%d nota(s) de R$ 50,00\n", notas);
Valor = Valor%50 ;

notas = ( Valor - (Valor%20))/20;
printf ("%d nota(s) de R$ 20,00\n", notas);
Valor = Valor%20 ;

notas = ( Valor - (Valor%10))/10;
printf ("%d nota(s) de R$ 10,00\n", notas);
Valor = Valor%10 ;

notas = ( Valor - (Valor%5))/5;
printf ("%d nota(s) de R$ 5,00\n", notas);
Valor = Valor%5 ;

notas = ( Valor - (Valor%2))/2;
printf ("%d nota(s) de R$ 2,00\n", notas);
Valor = Valor%2 ;
 
 
printf ("%d nota(s) de R$ 1,00\n", Valor);
    return 0;
}
