#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{	
	setlocale(LC_ALL,"portuguese");
	system("color c1");
	
	float m, n, n2;
	int a;
		
	for(n=1;n<3;++n)
	{
		for(a=1;a<11;++a)
		{
			printf("\n\nEntre com sua nota1 e nota2:\n");
			scanf("%f %f",&n,&n2);
			m=n+n2/10;
			printf("\nNota %.2f\n",m);
		}
	}
	
system("pause");
getchar();
return 0;	
}
