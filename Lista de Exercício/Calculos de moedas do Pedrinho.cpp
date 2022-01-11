#include <stdio.h>

int main(void)
{
	float t1=0.01, t2=0.05, t3=0.10, t4=0.25, t5=0.50, t6=1.0;		//variaveis de valores 
	float qt1, qt2, qt3, qt4, qt5, qt6;								//variaveis de leitura
	float calc;														//variavel de calculo
	
	printf("\nEntre com a quantidade da moeda de 1 centavo: ");
	scanf("%f",&qt1);
	printf("\nEntre com a quantidade da moeda de 5 centavos: ");
	scanf("%f",&qt2);
	printf("\nEntre com a quantidade da moeda de 10 centavos: ");
	scanf("%f",&qt3);
	printf("\nEntre com a quantidade da moeda de 25 centavos: ");
	scanf("%f",&qt4);
	printf("\nEntre com a quantidade da moeda de 50 centavos: ");
	scanf("%f",&qt5);
	printf("\nEntre com a quantidade da moeda de 1 real: ");
	scanf("%f",&qt6);
	
	calc=qt1*t1+qt2*t2+qt3*t3+qt4*t4+qt5*t5+qt6*t6;
	
	printf("\nA quantidade em reais eh %.2f R$",calc);
	
	getchar();
	return 0;
}
