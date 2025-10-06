#include<stdio.h>

int main(){
	int n[1000], t, i, c;
	scanf("%d", &t);
	for(i=0, c=0; i<1000; i++, c++){
		if(c==t){
			c=0;
		}
		n[i]=c;
	}
	for(i=0; i<1000; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}
