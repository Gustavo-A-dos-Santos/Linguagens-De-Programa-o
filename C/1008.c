#include<stdlib.h>
#include<stdio.h>

int main(){
	int NUMERO,HORAS;
	double VALOR, SALARIO;
	scanf("%d %d %lf", &NUMERO, &HORAS, &VALOR);
	SALARIO = (HORAS * VALOR);
	printf("NUMBER = %d\n", NUMERO);
	printf("SALARY = U$ %.2lf\n", SALARIO);
	
	return(0);
}
