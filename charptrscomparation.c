#include <stdio.h>

//s1 input usuario do nome para guardar na memoria
//s1 adicionado na memoria alocando o tamanho de um espaço de bytes nome
//s1 fica na lista de nomes
//s2 input do usuario para buscar o nome e dizer se essa palavra esta na lista ou nao. se estiver na lista entao retorna o nome procurado
int strCmp (char *s1, char *s2) {
    //traverse both strings until a mismatch
    //is found or one of the string ends

    while (*s1 && (*s1 == *s2)) {

        //move to the next character in str1

        s1++;
        s2++;
    }
    //if the both are equal, this will return 0

    return (*s1 - *s2);
}

int main () {
    char s1 [] = "oioioi";
    char s2 [] = "oi";

    int res = strCmp(s1, s2);

    if (res < 0 || res > 0) {
        printf ("%s não tem essa palavra na lista.\n",s1);
    }  else {
        printf ("o nome %s está na lista\n", s1);
    }
    
    return 0;
}