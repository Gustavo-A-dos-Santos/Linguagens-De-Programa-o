#include<stdio.h>
#define MINUTOS 60

int main(){
    int hi, mi, hf, mf;
    int mit, mft;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
   	mit = hi*MINUTOS+mi;
   	mft = hf*MINUTOS+mf;
   	if(mit<mft){
   		int ht = (mit-mft)/60*-1;
   		int mt = (mit-mft)%60*-1;
   		printf("Duracao %d Horas %d Minutos\n", ht, mt);
	} else if(mit>mft){
		int ht = (mit-mft)-24*60*-1/60;
		int mt = (mit-mft)-24*60*-1%60;
		printf("Duracao %d Horas %d Minutos\n", ht, mt);
	} else{
		printf("Duracao 24 Horas 0 Minutos\n");
	}
    return 0;
}

