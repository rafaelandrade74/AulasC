#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void)
{
	int segundos = 0, minutos = 0, horas = 0, s,m,h;
	
	printf("Digite neste formato (HORAS MINUTOS SEGUNDOS 00 00 00\n)");
	scanf("%d %d %d",&h,&m,&s);
	
		while (1 == 1) {
			Sleep (1000);
			segundos++;
			system("cls");

			if (segundos > 59) {
				
				minutos++;
				segundos = 0;
			}
			if (minutos > 59) {
				horas++;
				minutos = 0;
			}
			if (horas > 23) {
				horas = 0;
			}
			if (s == segundos and m == minutos and h == horas){
				system("");
				break;
				
			}
			printf("%d: %d: %d ", horas, minutos, segundos);
			
		}
		

	return 0;
}
