#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){

    int *p;
    p = (int*) malloc (sizeof (int)); // o ponteiro vai apontar para o endereço da alocação de memoria
    *p= 3; // que vai apontar o valor 
    
    double *f;
    f = (double*) malloc (sizeof(double));
    *f = 3.2;
    
    char *a;
    a = (char*) malloc (sizeof(char));
    printf ("Digite uma letra: ");
    scanf ("%c", a);
 

    printf ("Valor: %d\n", *p);
    printf("Valor: %f\n", *f);
    printf ("Valor: %c\n", *a);
    printf ("Endereço ponteiro: %p\n", &a);
    printf ("Endereço malloc: %p\n", a);


    free(p); //libera o espaço de memória alocada
    free(f);
    free(a);
    return 0;
}