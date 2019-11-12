#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "quiz.h"
#include "quiz_dois.h"
#include "quiz_tres.h"
#include "quiz_quatro.h"

void facil(char *pperg1,char *pperg2,char *pperg3,char *pperg4);
void medio(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5);
void quiz();
void dificil(char *pperg1,char *pperg2,char *pperg3,char *pperg4,char *pperg5);

int i,j;

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
		 	  
		 	  system("color 21");
		 	  
		 	  printf("\n\n");
		 	  
	      medio(pergunta2.livro,pergunta2.frase,pergunta2.chuveiro,pergunta2.presidente,pergunta2.elementos_quimicos);
		 } else if (strstr(pdifi,"dificil") != 0 || strstr(pdifi,"3") != 0) {
		 	  
				system("cls");
				
				system("color FC");
				
				printf("\n\n");
				
				dificil(pergunta3.origem,pergunta3.magos,pergunta3.deuses,pergunta3.espaco,pergunta3.literatura);
		 }
  } 
  
  bye();
  
 return 0;
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
