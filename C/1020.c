#include<stdio.h>
#define ANO 365
#define MES 30
int main(){
	int dias, ano=0, mes=0;
	scanf("%d", &dias);
	ano = dias/ANO;
	dias = dias%ANO;
	mes = dias/MES;
	dias= dias%MES;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
	
	return(0);
}

