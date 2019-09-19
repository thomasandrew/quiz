#include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200
#define height 2
#define width 2

char pergunta[length],torrada[length],voo[length],kingdom_hearts[length],difi[length],play2[length];
int i,j;

void pergtorrada(char *pperg1,char *pperg2,char *pperg3,char *pperg4);

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
	char ptorrada;
	char *ppergunta = pergunta,*pdifi = difi;
	
	printf("\t\t\t\tBem vindo\n\n");
	
	printf("Voce quer começar?\n1)sim\n2)não\n\n");
  fgets(ppergunta,length,stdin);
	
  if(strcmp(ppergunta,"sim")==1 || strcmp(ppergunta,"1")==0) {
  	
  	 puts("\n");
  	
     printf("Ecolha a dificuldade:\n1)Facil\n2)Medio\n3)Dificil\n\n");
		 fgets(pdifi,length,stdin);
		 
		 if(strstr(pdifi,"facil")!=0 || strstr(pdifi,"1")!=0) {
		 		
		 		system("cls");
		 		
				system("color 72");
  	
        printf("\n\n");
			
        pergtorrada(&torrada,&voo,&kingdom_hearts,&play2); 
		 } 
    
  } 
  
 return 0;
}

void pergtorrada(char *pperg1,char *pperg2,char *pperg3,char *pperg4) {
	
	printf("O que coloca em uma torradeira?\n\n\t\t1)torrada \t \t\t2)pao\n\nresposta: ");
	fgets(pperg1,length,stdin);
	
	if(strstr(pperg1,"pao")!=0 || strstr(pperg1,"2")!=0){
	  puts("\nResposta certa\n");
  }
	else if(strstr(pperg1,"torrada")!=0 || strstr(pperg1,"1")!=0) {
		puts("\nResposta errada\n");
	}
	
	printf("\nUm avião fazia um voo de Curitiba para São Paulo. Acontece que no meio da viagem, houve uma falha mecânica, e a aeronave caiu exatamente na fronteira do Parana com São Paulo. Onde devem ser enterrados os sobreviventes?\n1)São Paulo\n2)Párana\n3)Rio de Janeiro\n4)não é nescessário enterrá-los\n\nresposta: ");
	fgets(pperg2,length,stdin);
	
	if(strstr(pperg2,"não é nescessário enterrá-los")!=1 || strstr(pperg2,"4")!=0) {
		puts("\nResposta certa\n");
	} else {
  	puts("\nResposta errada\n");
	}
	
	printf("Qual é o nome do jogo que tem um personagem chamado sora:\n1)Kingdom Hearts\n2)Final Fantasy\n3)Dragonballz\n4)The third birthday\n\nResposta: ");
	fgets(pperg3,length,stdin);
	
	if(strstr(pperg3,"kingdom hearts")!=0 || strstr(pperg3,"1")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("Em que ano o playstation 2 foi lançado:\n1)2003\n2)2006\n3)2000\n4)2010\n\nResposta: ");
	fgets(pperg4,length,stdin);
	
	if(strstr(pperg4,"2000")!=0 || strstr(pperg4,"3")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
 return;	
}
