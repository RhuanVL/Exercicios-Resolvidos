#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
	float a=0, c=0, f=0, r1, r2;		//variaveis de calculo e atribuição;
	float vt;							//variavel de leitura;
	
	printf("\nEntre com o valor total da conta do bar: ");
	scanf("%f",&vt);
	
	c=vt/3;
	a=vt/3;
	f=vt/3;
	r1=c-floor(c);
	c=c-r1;
	r2=a-floor(a);
	a=a-r2;
	
	printf("\nUma conta de %.2f R$ resulta em %.2f R$ para Carlos, %.2f R$ para Andre e %.2f R$ para Felipe",vt,c,a,f);
	
	getchar();
	return 0;
}
