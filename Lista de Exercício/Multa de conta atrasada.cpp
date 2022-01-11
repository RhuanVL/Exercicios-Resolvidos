#include <stdio.h>

int main(void)
{
	float c1=200.00, c2=120.00, sal=1200.00, m=1.02, conta=0;
	
	conta=sal-(c1*m + c2*m);
	
	printf("\nRestara apenas %.2f do salario de Joao!",conta);
	
getchar();
return 0;	
}
