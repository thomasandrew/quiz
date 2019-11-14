#include "quiz_dois.h"

void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4) {
	
	pperg1 = (char *) malloc(length * sizeof(char));
	pperg2 = (char *) malloc(length * sizeof(char));
	pperg3 = (char *) malloc(length * sizeof(char));
	pperg4 = (char *) malloc(length * sizeof(char));
	
	printf("O que coloca em uma torradeira?\n\n\t\t1)torrada \t \t\t2)pao\n\nresposta: ");
	fgets(pperg1,length,stdin);
	
	if(strstr(pperg1,"pao")!=0 || strstr(pperg1,"2")!=0){
	  puts(string);
  }
	else if(strstr(pperg1,"torrada")!=0 || strstr(pperg1,"1")!=0) {
		puts(string_er);
	}
	
	printf("\nUm avião fazia um voo de Curitiba para São Paulo. Acontece que no meio da viagem, houve uma falha mecânica, e a aeronave caiu exatamente na fronteira do Parana com São Paulo. Onde devem ser enterrados os sobreviventes?\n1)São Paulo\n2)Párana\n3)Rio de Janeiro\n4)não é nescessário enterrá-los\n\nresposta: ");
	fgets(pperg2,length,stdin);
	
	if(strstr(pperg2,"não é nescessário enterrá-los") !=1 || strstr(pperg2,"4") !=0) {
		puts(string);
	} else {
  	puts(string_er);
	}
	
	printf("Qual é o nome do jogo que tem um personagem chamado sora:\n1)Kingdom Hearts\n2)Final Fantasy\n3)Dragonballz\n4)The third birthday\n\nResposta: ");
	fgets(pperg3,length,stdin);
	
	if(strstr(pperg3,"kingdom hearts")!=0 || strstr(pperg3,"1")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("Em que ano o playstation 2 foi lançado:\n1)2003\n2)2006\n3)2000\n4)2010\n\nResposta: ");
	fgets(pperg4,length,stdin);
	
	if(strstr(pperg4,"2000")!=0 || strstr(pperg4,"3")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
free(pperg1);
free(pperg2);
free(pperg3);
free(pperg4);	
 return;	
}
