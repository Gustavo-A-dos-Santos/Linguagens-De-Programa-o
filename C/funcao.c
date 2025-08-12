#include <stdio.h>
#include <stdlib.h>
int mensagem(){ //Função simples só imprime "Olá!".
	printf("Olá!\n");
		system("PAUSE");
	return(0);
}
int main(){
	mensagem();//Chama função "Mensagem".
	printf("Estou apredendo a programar em C no IFTM.\n");
		system("PAUSE");
	//Retorna um valor 
	return(0);// 0 = sem retorno.
}
