#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("color f9");
	setlocale(LC_ALL,"portuguese");
	float n1, n2, s=0;
	int c;
	printf("\nEntre com dois numeros reais:\n");
	
	while(c==0)
	{
		scanf("%f %f",n1,n2);
		if(n1 > 1 && n1 < 100 && n2 > 1 &&  n2 < 100)
		{
			s=n1+n2;
			printf("\n%.2f\n",s);
		}	
		else
		{ c=1;}	
	}
	
	system("pause");
	return 0;
}
