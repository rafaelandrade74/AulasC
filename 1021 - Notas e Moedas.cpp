#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main() {
    
    double dindin, cem, cinquenta, vinte, dez, cinco, dois, md_um, md_cinquenta, md_vinte_cinco, md_dez, md_cinco, md_1;
    
    scanf("%lf",&dindin);
    
    int dinheiro=dindin;
    int centavos=(dindin-dinheiro)*100;
    cem = dinheiro/100;
    dinheiro = dinheiro%100;
    cinquenta = dinheiro/50;
    dinheiro = dinheiro%50;
    vinte = dinheiro/20;
    dinheiro = dinheiro%20;
    dez = dinheiro/10;
    dinheiro = dinheiro%10;
    cinco = dinheiro/5;
    dinheiro = dinheiro%5;
    dois = dinheiro/2;
    dinheiro = dinheiro%2;
    md_um = dinheiro/1;
    dinheiro = dinheiro%1;
    md_cinquenta = centavos/50;
    centavos = centavos%50;
    md_vinte_cinco = centavos/25;
    centavos = centavos%25;
    md_dez = centavos/10;
    centavos = centavos%10;
    md_cinco = centavos/5;
    centavos = centavos%5;
    md_1 = centavos/1;

    printf ("NOTAS:\n");
    printf ("%.0lf nota(s) de R$ 100.00\n",cem);
    printf ("%.0lf nota(s) de R$ 50.00\n",cinquenta);
    printf ("%.0lf nota(s) de R$ 20.00\n",vinte);
    printf ("%.0lf nota(s) de R$ 10.00\n",dez);
    printf ("%.0lf nota(s) de R$ 5.00\n",cinco);
    printf ("%.0lf nota(s) de R$ 2.00\n",dois);
    printf ("MOEDAS:\n");
    printf ("%.0lf moeda(s) de R$ 1.00\n",md_um);
    printf ("%.0lf moeda(s) de R$ 0.50\n",md_cinquenta);
    printf ("%.0lf moeda(s) de R$ 0.25\n",md_vinte_cinco);
    printf ("%.0lf moeda(s) de R$ 0.10\n",md_dez);
    printf ("%.0lf moeda(s) de R$ 0.05\n",md_cinco);
    printf ("%.0lf moeda(s) de R$ 0.01\n",md_1);
    
    system("pause");
    return 0;
}
