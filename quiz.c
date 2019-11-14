#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "quiz.h"
#include "quiz_dois.c"
#include "quiz_tres.c"
#include "quiz_quatro.c"
#include "quiz_um.c"
#include "tilemap.c"

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  quiz_number_um();
  
 return 0;
}

