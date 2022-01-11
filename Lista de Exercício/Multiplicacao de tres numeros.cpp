#include <stdio.h>

int main(void)
{
	int n1, n2, n3, m;
	
	printf("\nEntre com o tres numeros: \n");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	m=n1*n2*n3;
	
	printf("\nA multiplicacao desses numeros eh %i x %i x %i = %i",n1,n2,n3,m);
	
	getchar();
	return 0;	
}
