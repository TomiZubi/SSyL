// Tomas Zubizarreta

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* evaluar (char string[]) {
    for (int i = 0; string [i] != '\0'; i++){
        if (isupper (string[i]))
            string [i] = tolower (string[i]);
        else if (islower (string[i]))
            string [i] = toupper (string[i]);
        else if (isdigit (string[i]))
            string [i] = NULL;
    }
    return string;
}

int main()
{
    char string [100];
    char* c;
    printf ("Por favor ingrese una palabra: ");
    scanf ("%s", string);
    c = evaluar (string);
    printf ("Devuelve %s", c);
    return 0;
}

