#include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200

char pergunta[length],torrada[length];


void torradaperg() {
	
	printf("\nO que voc� coloca em uma torradeira? \n");
	gets(torrada);
	
	if(strstr(torrada,("pao"))!=0) {
		 puts("\nCerta resposta");
	}
	
	else if(strstr(torrada,("torrada"))!=0){
		puts("\nResposta errada");
	}
	
	return;
}

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\t\t\t\t---Bem vindo---\n\n\n");
	
	printf("Voc� quer come�ar o quiz?\na)come�ar\nb)exit\n\n");
	
	printf("Resposta: ");
	gets(pergunta);
	
	if(strcmp(pergunta,"come�ar")==0 || strcmp(pergunta,"a")==0) {
		
		 torradaperg();
		
	}
	
	
	
	
	
	
	return 0;
}
