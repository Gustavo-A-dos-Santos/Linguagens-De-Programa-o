#include<stdio.h>

int main(){
	double n[100], t;
	int i;
	scanf("%lf", &t);
	n[0]=t;
	for(i=1; i<100; i++){
		n[i]=n[i-1]/2;
	}
	for(i=0; i<100; i++){
		printf("N[%d] = %.4lf\n", i, n[i]);
	}
	
	return 0;
}
