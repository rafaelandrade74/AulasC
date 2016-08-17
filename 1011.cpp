#include <stdio.h>

main () {
	
	double R, A;
	
	scanf("%lf",&R);
	
	A = (4/3.0)*3.14159*R*R*R;
	
	printf("VOLUME = %.3lf\n",A);
		
	return 0;
}
