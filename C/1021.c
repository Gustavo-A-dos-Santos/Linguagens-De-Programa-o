#include<stdio.h>
int main(){
	double valor;
	int resultado;
	scanf("%lf", &valor);
	printf("NOTAS:\n");
	resultado = valor/100;
	valor = valor-resultado*100;
	printf("%d nota(s) de R$ 100.00\n", resultado);
	resultado = valor/50;
	valor = valor-resultado*50;
	printf("%d nota(s) de R$ 50.00\n", resultado);
	resultado = valor/20;
	valor = valor-resultado*20;
	printf("%d nota(s) de R$ 20.00\n", resultado);
	resultado = valor/10;
	valor = valor-resultado*10;
	printf("%d nota(s) de R$ 10.00\n", resultado);
	resultado = valor/5;
	valor = valor-resultado*5;
	printf("%d nota(s) de R$ 5.00\n", resultado);
	resultado = valor/2;
	valor = valor-resultado*2;
	printf("%d nota(s) de R$ 2.00\n", resultado);
	printf("MOEDAS:\n");
	resultado = valor/1;
	valor = valor-resultado*1;
	printf("%d moeda(s) de R$ 1.00\n", resultado);
	resultado = valor/0.5;
	valor = valor-resultado*0.5;
	printf("%d moeda(s) de R$ 0.50\n", resultado);
	resultado = valor/0.25;
	valor = valor-resultado*0.25;
	printf("%d moeda(s) de R$ 0.25\n", resultado);
	resultado = valor/0.10;
	valor = valor-resultado*0.10;
	printf("%d moeda(s) de R$ 0.10\n", resultado);
	resultado = valor/0.05;
	valor = valor-resultado*0.05;
	printf("%d moeda(s) de R$ 0.05\n", resultado);
	resultado = valor/0.01;
	valor = valor-resultado*0.01;
	printf("%d moeda(s) de R$ 0.01\n", resultado);
	
	return(0);
}

