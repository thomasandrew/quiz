 #include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200
#define height 50
#define width 15

int i,j;

typedef struct{
	
	char difio[length];
	char pergunta[length];
	char torrada[length];
	char voo[length];
	char kingdom_hearts[length];
	char difi[length];
	char play2[length];
	
}facil1;

typedef struct{
	
	char livro[length];
	char frase[length];
	char chuveiro[length];
	char presidente[length];
	char elementos_quimicos[length];
	
}medio2;

void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4);
void medio(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5);
void quiz();

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  facil1 pergunta1;
  medio2 pergunta2;
  
	char ptorrada;
	char *ppergunta = pergunta1.pergunta,*pdifi = pergunta1.difi;
	
	quiz(i,j);
	
	printf("\t\t\t\tBem vindo\n\n");
	
	printf("Voce quer come�ar?\n1)sim\n2)n�o\n\nResposta: ");
  fgets(ppergunta,length,stdin);
	
  if(strcmp(ppergunta,"sim")==1 || strcmp(ppergunta,"1")==0) {
		
  	 puts("\n");
  	
     printf("Ecolha a dificuldade:\n1)Facil\n2)Medio\n3)Dificil\n\n");
		 fgets(pdifi,length,stdin);
		 
		 if(strstr(pdifi,"facil")!=0 || strstr(pdifi,"1")!=0) {
		 		
		 		system("cls");
		 		
				system("color 72");
  	
        printf("\n\n");
			
        facil(&pergunta1.torrada,&pergunta1.voo,&pergunta1.kingdom_hearts,&pergunta1.play2); 
        
		 } else if(strstr(pdifi,"medio")!=0 || strstr(pdifi,"2")!=0) {
		 	  
		 	  system("cls");
		 	  
		 	  printf("\n\n");
		 	  
	      medio(&pergunta2.livro,&pergunta2.frase,&pergunta2.chuveiro,&pergunta2.presidente,&pergunta2.elementos_quimicos);
		 }
  } 
  
  bye();
  
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
	
	printf("\nUm avi�o fazia um voo de Curitiba para S�o Paulo. Acontece que no meio da viagem, houve uma falha mec�nica, e a aeronave caiu exatamente na fronteira do Parana com S�o Paulo. Onde devem ser enterrados os sobreviventes?\n1)S�o Paulo\n2)P�rana\n3)Rio de Janeiro\n4)n�o � nescess�rio enterr�-los\n\nresposta: ");
	fgets(pperg2,length,stdin);
	
	if(strstr(pperg2,"n�o � nescess�rio enterr�-los")!=1 || strstr(pperg2,"4")!=0) {
		puts("\nResposta certa\n");
	} else {
  	puts("\nResposta errada\n");
	}
	
	printf("Qual � o nome do jogo que tem um personagem chamado sora:\n1)Kingdom Hearts\n2)Final Fantasy\n3)Dragonballz\n4)The third birthday\n\nResposta: ");
	fgets(pperg3,length,stdin);
	
	if(strstr(pperg3,"kingdom hearts")!=0 || strstr(pperg3,"1")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("Em que ano o playstation 2 foi lan�ado:\n1)2003\n2)2006\n3)2000\n4)2010\n\nResposta: ");
	fgets(pperg4,length,stdin);
	
	if(strstr(pperg4,"2000")!=0 || strstr(pperg4,"3")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
 return;	
}

void medio(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5) {
	
	printf("Normalmente, quantos litros de sangue uma pessoa tem? Em m�dia, quantos s�o retirados numa doa��o de sangue?\n\n1)Tem entre 2 a 4 litros.S�o retirados 450 mililitros\n2)Tem entre 4 a 6 litros.S�o retirados 450 mililitros\n3)Tem 10 litros.S�o retirados 2 litros\n\nResposta: ");
	gets(pperg1);
	fflush(stdin);
	
	if(strstr(pperg1,"2")!=0 || strstr(pperg1,"Tem entre 2 a 4 litros.S�o retirados 450 mililitros")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("De quem � a famosa frase - Penso logo existo?\n\n1)Plat�o\n2)Galileu Galilei\n3)Descartes\n4)S�crates\n5)Francis Bacon\n\nResposta: ");
	gets(pperg2);
	fflush(stdin);
	
  if(strstr(pperg2,"3")!=0 || strstr(pperg2,"Descartes")!=0 || strstr(pperg2,"descartes")!=0) {
  	puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("De onde � a inven��o do chuveiro el�trico?\n\n1)Fran�a\n2)Inglaterra\n3)Brasil\n4)Autr�lia\n5)It�lia\n\nResposta: ");
	gets(pperg3);
	fflush(stdin);
	
	if(strstr(pperg3,"brasil")!=0 || strstr(pperg3,"3")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("Qual � o nome do presidente do Brasil que ficou conhecido como Jango?\n\n1)J�nio Quadros\n2)Jacinto Anjos\n2)Get�lio Vargas\n3)Jo�o Figueiredo\n4)Jo�o Goulart\n\nResposta: ");
	gets(pperg4); 
	fflush(stdin);  
	
	if(strstr(pperg4,"joao goulart")!=0 || strstr(pperg4,"4")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
	printf("Atualmente, quantos elementos qu�micos a tabela peri�dica possui?\n\n1) 113\n2) 109\n3) 108\n4) 118\n5) 92\n\nResposta: ");
	gets(pperg5);
	fflush(stdin);
	
	if(strstr(pperg5,"118")!=0 || strstr(pperg5,"4")!=0) {
		puts("\nResposta certa\n");
	} else {
		puts("\nResposta errada\n");
	}
	
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
