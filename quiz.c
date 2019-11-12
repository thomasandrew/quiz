#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "quiz.h"

int i,j;

void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4);
void medio(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5);
void quiz();
void dificil(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5);

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  facil1 pergunta1;
  medio2 pergunta2;
  dificil2 pergunta3;
  
	char ptorrada;
	char *ppergunta = pergunta1.pergunta,*pdifi = pergunta1.difi;
	
	quiz(i,j);
	
	printf("\t\t\t\tBem vindo\n\n");
	
	printf("Voce quer começar?\n1)sim\n2)não\n\nResposta: ");
  fgets(ppergunta,length,stdin);
	
  if(strcmp(ppergunta,"sim")==1 || strcmp(ppergunta,"1")==0) {
		
  	 puts("\n");
  	
     printf("Ecolha a dificuldade:\n1)Facil\n2)Medio\n3)Dificil\n\n");
		 fgets(pdifi,length,stdin);
		 
		 if(strstr(pdifi,"facil")!=0 || strstr(pdifi,"1")!=0) {
		 		
		 		system("cls");
		 		
				system("color 72");
  	
        printf("\n\n");
			
        facil(pergunta1.torrada,pergunta1.voo,pergunta1.kingdom_hearts,pergunta1.play2); 
        
		 } else if(strstr(pdifi,"medio")!=0 || strstr(pdifi,"2")!=0) {
		 	  
		 	  system("cls");
		 	  
		 	  printf("\n\n");
		 	  
	      medio(pergunta2.livro,pergunta2.frase,pergunta2.chuveiro,pergunta2.presidente,pergunta2.elementos_quimicos);
		 } else if (strstr(pdifi,"dificil") != 0 || strstr(pdifi,"3") != 0) {
		 	  
				system("cls");
				
				printf("\n\n");
				
				dificil(pergunta3.origem,pergunta3.magos,pergunta3.deuses,pergunta3.espaco,pergunta3.literatura);
		 }
  } 
  
 
  
 return 0;
}

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

void medio(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5) {
	
	cont bye;
	
	pperg1 = (char *) malloc(length * sizeof(char));
	pperg2 = (char *) malloc(length * sizeof(char));
	pperg3 = (char *) malloc(length * sizeof(char));
	pperg4 = (char *) malloc(length * sizeof(char));
	pperg5 = (char *) malloc(length * sizeof(char));
	
do {
	
	printf("Normalmente, quantos litros de sangue uma pessoa tem? Em média, quantos são retirados numa doação de sangue?\n\n1)Tem entre 2 a 4 litros.São retirados 450 mililitros\n2)Tem entre 4 a 6 litros.São retirados 450 mililitros\n3)Tem 10 litros.São retirados 2 litros\n\nResposta: ");
	gets(pperg1);
	fflush(stdin);
	
	if(strstr(pperg1,"2")!=0 || strstr(pperg1,"Tem entre 2 a 4 litros.São retirados 450 mililitros")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("De quem é a famosa frase - Penso logo existo?\n\n1)Platão\n2)Galileu Galilei\n3)Descartes\n4)Sócrates\n5)Francis Bacon\n\nResposta: ");
	gets(pperg2);
	fflush(stdin);
	
  if(strstr(pperg2,"3")!=0 || strstr(pperg2,"Descartes")!=0 || strstr(pperg2,"descartes")!=0) {
  	puts(string);
	} else {
		puts(string_er);
	}
	
	printf("De onde é a invenção do chuveiro elétrico?\n\n1)França\n2)Inglaterra\n3)Brasil\n4)Autrália\n5)Itália\n\nResposta: ");
	gets(pperg3);
	fflush(stdin);
	
	if(strstr(pperg3,"brasil")!=0 || strstr(pperg3,"3")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("Qual é o nome do presidente do Brasil que ficou conhecido como Jango?\n\n1)Jânio Quadros\n2)Jacinto Anjos\n2)Getúlio Vargas\n3)João Figueiredo\n4)João Goulart\n\nResposta: ");
	gets(pperg4); 
	fflush(stdin);  
	
	if(strstr(pperg4,"joao goulart")!=0 || strstr(pperg4,"4")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("Atualmente, quantos elementos químicos a tabela periódica possui?\n\n1) 113\n2) 109\n3) 108\n4) 118\n5) 92\n\nResposta: ");
	gets(pperg5);
	fflush(stdin);
	
	if(strstr(pperg5,"118")!=0 || strstr(pperg5,"4")!=0) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	puts("Voce quer continuar:\n\na)Sim\nb)Nâo\n\nResposta: ");
	scanf(" %c",bye.continuar);
	
} while (bye.continuar != 'a' || bye.continuar != 's');

  printf("bye");
	
    free(pperg1);
    free(pperg2);
    free(pperg3);
    free(pperg4);
    free(pperg5);
	return; 
}

void dificil(char *pperg1,char *pperg2,char *pperg3, char *pperg4, char *pperg5) {
	
	pperg1 = (char *) malloc(length * sizeof(char));
	pperg2 = (char *) malloc(length * sizeof(char));
	pperg3 = (char *) malloc(length * sizeof(char));
	pperg4 = (char *) malloc(length * sizeof(char));
	pperg5 = (char *) malloc(length * sizeof(char));
	
	printf("Qual foi o recurso utilizado inicialmente pelo homem para explicar a origem das coisas?\n\n1)A Filosofia\n2)A biologia\n3)A Matemática\n4)A Astronomia\n5)A mitologia\n\nResposta: ");
	fgets(pperg1,length,stdin);
	
	if (strcmp(pperg1,"a mitologia") == 1 || strcmp(pperg1,"5") == 1) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("Quais os nomes dos três Reis Magos\n\n1)Gaspar, Nicolau e Natanael\n2)Belchior, Gaspar e Baltazar\n3)Belchior, Gaspar e Nataniel\n4)Melchior,Noé e Galileu\n\nresposta: ");
	fgets(pperg2,length,stdin);
	
	if (strcmp(pperg2,"Belchior, Gaspar e Baltazar") == 1 || strcmp(pperg2,"2") == 1) {
		 puts(string);
	} else {
		 puts(string_er);
	}
	
	printf("Jupiter e Plutão são correlatos romanos de quais Deuses gregos?\n\n1)Ares e Hermes\n2)Cronos e Apolo\n3)Zeus e Hades\n4)Dionísio e Demèter\n5)Zeus e Ares\n\nResposta: ");
	fgets(pperg3,length,stdin);
	
	if (strcmp(pperg3,"Zeus e Ares") == 1 || strcmp(pperg3,"5") == 1) {
		 puts(string); 
	} else {
		 puts(string_er);
	}
	
	printf("Nome do primeiro ser vivo a viajar pelo espaço sederal dentro de um foguete:\n\n1)Laika\n2)Mika\n3)George\n4)Twist\n5)Lassie\n\nRespota: ");
	gets(pperg4);
	fflush(stdin);
	
	if (strcmp(pperg4,"laika") == 1 || strcmp(pperg4,"Laika") == 1 || strcmp(pperg4,"1") == 1) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	printf("Tipo de literatura artesanal nordestina em forma de versos cuja a capa é ilustrada com xilogravuras\n\n1)Cordel\n2)Livro de bolso\n3)Poemas\n4)Maracatu\n5)Recital\n\nResposta: ");
	fgets(pperg5,length,stdin);
	
	if (strcmp(pperg5,"Cordel") == 1 || strcmp(pperg5,"cordel") == 1 || strcmp(pperg5,"1") == 1) {
		puts(string);
	} else {
		puts(string_er);
	}
	
	free(pperg1);
	free(pperg2);
	free(pperg3);
	free(pperg4);
	free(pperg5);
	
	return;
}

void quiz(int i,int j) {
	
   int tilemap[width][height] = {
   	
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,2,0,0,0,0,0,0,0,2,0,3,3,3,0,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,2,0,0,0,0,0,0,0,2,0,3,3,3,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0},     	
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,2,2,2,2,2,2,2,2,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0}	
	 }; 
	 
	  for(i=0;i<width;i++) {
	  	for(j=0;j<height;j++) {
	  		if (tilemap[i][j] == 1) {
	  			  printf("q");
				} else if (tilemap[i][j] == 2) {
					  printf("u");
				} else if (tilemap[i][j] == 3) {
					  printf("i");
				} else if (tilemap[i][j] == 4) {
					  printf("z");
				} else {
					  printf(" ");
				}
			}
			printf("\n");
		}
	
	return;
}

void bye() {
	
	printf(" %c",219);
	
	return;
}
