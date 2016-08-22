#include <stdio.h>
 
int main() {
 

    double a, b, litros;
    scanf("%lf", &a);
    scanf("%lf", &b);
    litros = ( b / 12) * a;
    printf("%.3lf\n", litros);

    return 0;
}
