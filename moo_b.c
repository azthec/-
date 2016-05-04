#include <stdio.h>

int main () {
	int resultado[2], ctr, actual[2];
	scanf("%d", &ctr);
	scanf("%d %d", &resultado[0], &resultado[1]);
	for(ctr=ctr-1;ctr!=0;ctr--) {
		scanf("%d %d", &actual[0], &actual[1]);
		if(actual[0]>resultado[0]) {
		  resultado[0]=actual[0];
		}
		if(actual[1]<resultado[1]) {
		  resultado[1]=actual[1];
		}
	}
	if(resultado[0]>resultado[1]) {
	printf("impossivel\n");
	}
	
	else if((resultado[1]+resultado[0])%2==0) {
	  printf("%d\n",((resultado[1]+resultado[0])/2) );
	}
	else
	  printf("%d e meia\n",((resultado[1]+resultado[0])/2) );
return 0;
}
