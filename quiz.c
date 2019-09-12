#include <stdio.h>
#include <string.h>
#include <locale.h>

#define length 200

char pergunta[length],torrada[length];


void torradaperg() {
	
	printf("\nO que você coloca em uma torradeira? \n");
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
	
	printf("Você quer começar o quiz?\na)começar\nb)exit\n\n");
	
	printf("Resposta: ");
	gets(pergunta);
	
	if(strcmp(pergunta,"começar")==0 || strcmp(pergunta,"a")==0) {
		
		 torradaperg();
		
	}
	
	
	
	
	
	
	return 0;
}
