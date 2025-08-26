#include<stdlib.h>
#include<stdio.h>
#define PESO1 3.5
#define PESO2 7.5

int main(){
	double A, B, MEDIA;
	scanf("%lf %lf", &A, &B);
	MEDIA = (A * PESO1 + B * PESO2)/11;
	printf("MEDIA = %.5lf", MEDIA);
	
	
	return(0);
}
