#include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200
#define height 2
#define width 2

char pergunta[length],torrada[length],continuar;
int i,j;

void pergtorrada(char *ptorrada);

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
	char ptorrada;
	char *ppergunta = pergunta;
	
	printf("\t\t\t\tBem vindo\n\n");
	
 do {
	
	printf("Voce quer começar?\na)sim\nb)não\n\n");
  fgets(ppergunta,length,stdin);
	
  if(strstr(ppergunta,"sim")!=0 || strstr(ppergunta,"a")!=0) {
  	
  	system("color 72");
  	
    printf("\n\n");
			
    pergtorrada(&torrada);
  } 
  
  if(strstr(ppergunta,"não")!=0) {
  printf("Voce quer continuar?\na)sim\nb)nao\n\nresposta: ");
  scanf(" %c",&continuar);
}
} while(continuar == 's' || continuar != 'a');
   
  printf("Good bye"); 
   
 return 0;
}

void pergtorrada(char *ptorrada) {
	
	printf("O que coloca em uma torradeira?\n\n\t\ta)torrada \t \t\tb)pao\n\nresposta: ");
	fgets(ptorrada,length,stdin);
	
	if(strstr(ptorrada,"pao")!=0 || strstr(ptorrada,"b")!=0){
	puts("\nResposta certa");
} else {
	puts("\nResposta errada");
}

 return;	
}
