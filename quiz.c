#include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200
#define height 2
#define width 2

//
char pergunta[length],torrada[length],voo[length],kingdom_hearts[length],difi[length],play2[length];
int i,j;

typedef struct{
	
	char livro[length];
	char frase[length];
	char chuveiro[length];
	
	
	
	
}medio2;


//
void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4);
void medio(char *pperg1,char *pperg2,char *pperg3);

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  medio2 pergunta2;
  
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
			
        facil(&torrada,&voo,&kingdom_hearts,&play2); 
		 } else if(strstr(pdifi,"medio")!=0 || strstr(pdifi,"2")!=0) {
		 	  
		 	  system("cls");
		 	  
		 	  printf("\n\n");
		 	  
	      medio(&pergunta2.livro,&pergunta2.frase,&pergunta2.chuveiro);
		 }
    
  } 
  
 return 0;
}

void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4) {
	
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

void medio(char *pperg1,char *pperg2,char *pperg3) {
	
	printf("Normalmente, quantos litros de sangue uma pessoa tem? Em média, quantos são retirados numa doação de sangue?\n\n1)Tem entre 2 a 4 litros.São retirados 450 mililitros\n2)Tem entre 4 a 6 litros.São retirados 450 mililitros\n3)Tem 10 litros.São retirados 2 litros\n\nResposta: ");
	gets(pperg1);
	fflush;
	
	if(strstr(pperg1,"2")!=0 || strstr(pperg1,"Tem entre 2 a 4 litros.São retirados 450 mililitros")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("De quem é a famosa frase - Penso logo existo?\n\n1)Platão\n2)Galileu Galilei\n3)Descartes\n4)Sócrates\n5)Francis Bacon\n\nResposta: ");
	gets(pperg2);
	fflush;
	
  if(strstr(pperg2,"3")!=0 || strstr(pperg2,"Descartes")!=0 || strstr(pperg2,"descartes")!=0) {
  	puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("De onde é a invenção do chuveiro elétrico?\n\n1)França\n2)Inglaterra\n3)Brasil\n4)Autrália\n5)Itália\n\nResposta: ");
	gets(pperg3);
	fflush;
	
	
	return; 
}

