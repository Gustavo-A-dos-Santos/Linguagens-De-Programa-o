#include<stdio.h>
#include<stdlib.h>
int mult(float a, float b, float c){//Multiplica 3 números.
	printf("%f.\n",(a*b*c));
	return(0);
}
int main(){
	float x, y, z;
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	mult(x,y,z);
		system("PAUSE");
	return(0);
}
