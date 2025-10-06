#include<stdio.h>

int main(){
	int a, v, c, t=1;
	do{
		scanf("%d %d", &a, &v);
		if(a==0 && v==0){
			return 0;
		}
		int ta[a+1], x, y, m=0;
		for(c=0; c<a+1; c++){ta[c]=0;}
		for(c=0; c<v; c++){
			scanf("%d %d", &x, &y);
			ta[x]++;
			ta[y]++;
		}
		for(c=1; c<a+1; c++){
			if(ta[c]>m){
				m=ta[c];
			}
		}
		printf("Teste %d\n", t);
		for(c=1; c<a+1; c++)
			if (ta[c] == m) printf("%d ", c);
		printf("\n\n");
		t++;
		
	}while(1);
}
