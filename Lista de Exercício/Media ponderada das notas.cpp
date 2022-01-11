#include <stdio.h>

int main(void)
{
	float n1, n2, m;
	
	printf("\nEntre com a nota 1 e nota 2: \n");
	scanf("%f %f",&n1,&n2);
	
	m=(n1*2+n2*3)/5;
	
	printf("\nA media do aluno eh %.2f",m);
	
getchar();
return 0;	
}
