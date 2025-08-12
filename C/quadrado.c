#include<stdio.h>
#include<stdlib.h>
int square(int x){//Calcula o quadrado de x.
	printf("O quadrado e %d.\n",(x*x));
	return(0);
}
int main(){
	int num;
	printf("Entre com um número:");
	scanf("%d",&num);
	printf("\n\n");
	square(num);
		system("PAUSE");
	return(0);
}
