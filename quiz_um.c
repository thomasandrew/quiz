#include "quiz_um.h"

int i,j;

void quiz_number_um() {

    facil1 pergunta1;
    medio2 pergunta2;
     dificil2 pergunta3;
  
	char ptorrada;
	char *ppergunta = pergunta1.pergunta,*pdifi = pergunta1.difi;
	
	quiz_tilemap(i,j);
	
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
  } else {
  	
  	 system("cls");
  	 
  	 printf("\t\t\t\t\nGood bye");
	}

return;
}
