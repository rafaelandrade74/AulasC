#include <stdio.h>


int main() {
    int codigo1,numero1, codigo2, nummero2;
    double valor1,valor2;

    scanf("%d %d %lf", &codigo1, &numero1, &valor1);
    scanf("%d %d %lf", &codigo2, &nummero2, &valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", (numero1*valor1 + nummero2*valor2));
    return 0;
}
