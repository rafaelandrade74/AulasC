#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

double A,B,C,R2,R1,X2;

R2=0;
R1=0;

scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);

X2=sqrt((B*B)-(4*(A*C)));

if (A > 0 && X2 > 0){

			R2=(-B-X2)/(2*A);
			R1=(-B+X2)/(2*A);

			printf("R1 = %.5lf\n",R1);
			printf("R2 = %.5lf\n",R2);
		
			}else{
				printf("Impossivel calcular\n");
				}
				
	
	return 0;
}

