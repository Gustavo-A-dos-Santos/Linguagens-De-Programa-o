#include<stdio.h>
#include<stdlib.h>
int main(){
	int Dias;
	float Anos;
	printf("Entre com o número de dias:");
	scanf("%d",&Dias);
	Anos = Dias/365.25;
	printf("\n\n%d dias equivalem a %f anos.\n",Dias,Anos);
		system("PAUSE");
	return(0);
}
