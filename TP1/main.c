#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define BLOCK 100

//Tomas Zubizarreta

char * eliminar ( char * string, int inicio, int fin ) {
  int i = 0, k = 0;
  int len = strlen(string);
  char * aux = malloc(len+1);
  while ( string[i] != 0 ){
    if ( i < inicio || i > fin ){
    aux[k++] = string[i];
    //printf("\nACA\n");
    }
  }
  return aux;
}

void evaluar( char * string ) {
  int l = strlen(string)+1;
  for ( int i = 0 ; i < l ; i++ ){
    char c = string[i];
    if ( isupper(c) )
      c = tolower(c);
    else if ( islower(c) )
      c = toupper(c);
    /*else if ( c == ','){
        int k = i;
        while ('0' <= c <= '9'){
            i++;
            string [i] = c;
        }
        i = k;
        string = eliminar (string, k, i);
    }*/
    string[i] = c;
  }
  return;
}


/*void evaluar( char * string ){
  char c;
  int i=0;
  while (c = getchar()!='\n'){
    char c = string[i];
    if ( isupper(c) )
      c = tolower(c);
    else if ( islower(c) )
      c = toupper(c);
    string[i] = c;
    i++;
  }
}*/

int main() {
    printf ("Por favor ingrese una palabra: ");
    char string[BLOCK];
    scanf ("%s", string);
    //fgets(string,BLOCK,stdin);
    gets(string);
    evaluar(string);
    printf ("Devuelve %s", string);
    return 0;
}
