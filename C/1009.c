#include<stdlib.h>
#include<stdio.h>
#define COMISSAO 0.15

int main(){
	double salario, totalVendas, bonus;
	scanf("%*s %lf %lf", &salario, &totalVendas);
	bonus = totalVendas * COMISSAO;
	printf("TOTAL = R$ %.2lf\n", bonus+salario);
	
	return(0);
}
