#include <stdio.h>
#include <stdlib.h>
float media(){ //Fun��o realiza uma m�dia de n n�meros e retorna o valor como um float.
	float n, resul;
	int cont=0, sys;
		for(sys=1; sys!=0;){
			cont++;
			scanf("%f",&n);
			resul=resul+n;
			printf("%2f = numero, %2f = resultado, %d = contador.", n, resul, cont);
			scanf("%d", &sys);
		}
		system("PAUSE");
	return(resul/cont);
}
int main(){
	float n;
	n = media();//Chama fun��o "M�dia".
	printf("Resultado: %2f",n);
	return(0);// 0 = sem retorno.
}
