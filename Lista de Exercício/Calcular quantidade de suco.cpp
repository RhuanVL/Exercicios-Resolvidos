#include <stdio.h>

int main(void)
{
	float lts, qta=800, qts=200, calc1=0, calc2=0; 	
		
	printf("\nEntre com os litros de suco que o senhor deseja: ");
	scanf("%f",&lts);
	
	calc1=qta*lts;
	calc2=qts*lts;
	calc1=calc1/1000;
	calc2=calc2/1000;
	
	printf("\nSera necessario %.2f l. de agua e %.2f l. de suco para se fazer o refresco!",calc1,calc2);

	getchar();
	return 0;	
}
