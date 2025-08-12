#include<stdio.h>
#include<stdlib.h>
 int prod(int a, int b){//Multiplica 2 números.
	return(a*b);
}
int main(){
	int saida;
	saida=prod(12,7);
	printf("A saída e:%d\n",saida);
		system("PAUSE");
	return(0);
}
