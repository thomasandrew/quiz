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
