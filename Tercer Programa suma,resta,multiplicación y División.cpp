#include <stdio.h>
int main (){
	int a,b;
	printf("ingrese dos numeros separados por enter: ");
	scanf("%d %d",&a,&b);
	printf("la Suma de %d mas %d es %d \n",a,b,a+b);
	printf("la Resta de %d menos %d es %d \n",a,b,a-b);
	printf("la Multiplicacion de %d por %d es %d \n",a,b,a*b);
	printf("la Divicion de %d entre %d es %d \n",a,b,a/b);
	return 0;
}
