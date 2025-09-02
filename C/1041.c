#include<stdio.h>

int main(){
    double ponto_x, ponto_y;
    scanf("%lf %lf", &ponto_x, &ponto_y);
    
    if(ponto_x > 0) {
        if(ponto_y > 0) {
            printf("Q1\n");
        } else if(ponto_y<0){
            printf("Q4\n");
        } else{
        	printf("Eixo X\n");
		}
    } else if(ponto_x < 0) {
        if(ponto_y > 0) {
            printf("Q2\n");
        } else if(ponto_y<0){
            printf("Q3\n");
        } else{
        	printf("Eixo X\n");
		}
    } else if(ponto_y != 0) {
        printf("Eixo Y\n");
    } else {
        printf("Origem\n");
    }

    return 0;
}

