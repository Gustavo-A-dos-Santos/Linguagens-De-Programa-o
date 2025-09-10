#include <stdio.h>
#include <stdbool.h>

int main(){
	int X1, Y1, X2, Y2, sum, c;
	do{
		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
		if((X1 >= 1 && X1 <= 8) && (Y1 >= 1 && Y1 <= 8) && (X2 >= 1 && X2 <= 8) && (Y2 >= 1 && Y2 <= 8)){
			printf("Deu certo\n");
			c=0;
			while(){
				if(((X1+c==X2) && (Y1+c==Y2)) || ((X1+c==X2) && (Y1-c==Y2)) || ((X1-c==X2) && (Y1+c==Y2)) || ((X1-c==X2) && (Y1-c==Y2)))
					printf("1\n");
				else if()
			}
			if(X1==X2 || Y1==Y2 || || ((X1+1==X2) && (Y1+1==Y2)) || ((X1+1==X2) && (Y1-1==Y2)) || ((X1-1==X2) && (Y1+1==Y2)))
				printf("1\n");
			else if(X1==X2 && Y1==Y2)
				printf("0\n");
			else
				printf("2\n");
		}
		
 		sum = X1+X2+Y1+Y2;
	}while(sum!=0);
}
