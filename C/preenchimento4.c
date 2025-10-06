#include<stdio.h>

int main(){
	int par[5], impar[5], v, i, p, c;
	for(c=0, i=0, p=0; c<15; c++){
		scanf("%d", &v);
		if(p>=5){
			for(p=0; p<5; p++){
				printf("par[%d] = %d\n", p, par[p]);
				par[p]=0;
			}
			p=0;
		}
		if(i>=5){
			for(i=0; i<5; i++){
				printf("impar[%d] = %d\n", i, impar[i]);
				impar[i]=0;
			}
			i=0;
		}
		if(v%2==0){
			par[p]=v;
			p++;
		} else{
			impar[i]=v;
			i++;
		}
	}
	for(c=0; c<5; c++){
		if(impar[c]==0){
			break;
		}
		printf("impar[%d] = %d\n", c, impar[c]);
	}
	for(c=0; c<5; c++){
		if(par[c]==0){
			break;
		}
		printf("par[%d] = %d\n", c, par[c]);
	}
	
	return 0;
}
