#include <stdio.h>
#include <stdlib.h>

int main (void){

int segundos;
    scanf("%d", &segundos);

printf("%d:%d:%d\n", segundos/3600, (segundos%3600)/60, (segundos%3600)%60);

system("pause");
return 0;
}
