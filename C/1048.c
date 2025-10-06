#include <stdio.h>

int main() {
    double salario, salarionv;
    scanf("%lf", &salario);
    
    if(salario <= 400){
    	salarionv = salario*1.15;
    	printf("Novo salario: %.2lf\n Reajuste ganho: %.2lf\n Em percentual: 15%\n", salarionv, salarionv-salario);
	}

    return 0;
}
