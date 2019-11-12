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
	
} while (bye.continuar == 'a' || bye.continuar == 's');

  printf("bye");
	
    free(pperg1);
    free(pperg2);
    free(pperg3);
    free(pperg4);
    free(pperg5);
	return; 
}
