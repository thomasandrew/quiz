#include <stdio.h>

#define tam 5

int main() {
	
	int borracha[tam],i,j,max;
	
	for (i = 0; i<tam;i++) {
		
		printf("Digite: [%d]",i);
		scanf("%d",&borracha[i]);
		
	}
	
	for (i=0;i<tam;i++) {
		
		max = borracha[i];
		
		for (j=0;j<max;j++) {
			  printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
