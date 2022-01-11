#include <stdio.h>

int main(void)
{
	float n1, n2, d;
	
	printf("\nEntre com o primeiro e segundo numero: \n");
	scanf("%f %f",&n1,&n2);
	
	d=n1/n2;
	
	printf("\nO resultado da divisao de %.2f por %.2f = %.2f",n1,n2,d);
	
	getchar();
	return 0;	
}
