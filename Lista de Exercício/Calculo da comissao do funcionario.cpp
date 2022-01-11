#include <stdio.h>

int main(void)
{
	float c=0.04, vsf, vv, calc1=0, calc2=0;
	
	printf("\nEntre com o salario fixo e seu valor de vendas: ");
	scanf("%f %f",&vsf,&vv);
	
	calc1=(vv*c);
	calc2=vsf+(vv*c);
	
	printf("\nO valor da comissao eh %.2f e salario final eh %.2f",calc1,calc2);
	
getchar();
return 0;	
}
