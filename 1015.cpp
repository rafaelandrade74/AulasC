#include <stdio.h>
#include <math.h>


int main() {

	double xzum, xdois, yum,ydois, distancia,b;
	
	scanf("%lf %lf",&xzum,&yum);
	scanf("%lf %lf",&xdois,&ydois);
	
	distancia = (xdois - xzum) * (xdois - xzum) + (yum - ydois) * (yum - ydois);
	
	b = (double)sqrt(distancia);
	
	printf("%.4lf\n",b);
		
	return 0;
}
