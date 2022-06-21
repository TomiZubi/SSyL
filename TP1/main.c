// Tomas Zubizarreta

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    printf ("Ingrese :");
    scanf ("%d", p);
    while ((p=getchar())!= EOF){
        if (islower (p))
            putchar (toupper (p));
        if (isupper (p))
            putchar (tolower (p));
        if (ispunct (p))
            putchar (p) ;
        if (isspace (p))
            putchar (p) ;
    }
    printf ("Devuelve %d", p);
    return 0;
}
