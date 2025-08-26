#include<stdlib.h>
#include<stdio.h>
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main(){
	double A, B, C, MEDIA;
	scanf("%lf %lf %lf", &A, &B, &C);
	MEDIA = (A * PESO1 + B * PESO2 + C * PESO3)/10;
	printf("MEDIA = %.1lf\n", MEDIA);
	
	
	return(0);
}
