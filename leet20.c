#include <stdio.h>

// Definição do tamanho máximo da pilha
#define N 100

// Declaração das funções antes do uso
void criapilha(void);
void empilha(char y);
char desempilha(void);
int pilhavazia(void);
int bemFormada(char s[]);

// Variáveis globais da pilha
char pilha[N];
int t;

// Função que verifica se a string contém uma sequência bem-formada de parênteses e colchetes
int bemFormada(char s[]) {
    criapilha();
    for (int i = 0; s[i] != '\0'; ++i) {
        char c;
        switch (s[i]) {
            case ')': if (pilhavazia()) return 0;
                      c = desempilha();
                      if (c != '(') return 0;
                      break;
            case ']': if (pilhavazia()) return 0;
                      c = desempilha();
                      if (c != '[') return 0;
                      break;
            case '}': if (pilhavazia()) return 0;
                      c = desempilha();
                      if (c != '{') return 0;
                      break;
            default:  empilha(s[i]);
        }
    }
    return pilhavazia();
}

// Implementação das funções auxiliares da pilha
void criapilha(void) {
    t = 0;
}

void empilha(char y) {
    pilha[t++] = y;
}

char desempilha(void) {
    return pilha[--t];
}

int pilhavazia(void) {
    return t <= 0;
}

// Função principal para testar
int main() {
    char teste1[] = "([])";
    char teste2[] = "([)]";
    char teste3[] = "[()]";
    char teste4[] = "[(])";
    char teste5[] = "[()()]";

    printf("Teste 1: %s -> %s\n", teste1, bemFormada(teste1) ? "Válido" : "Inválido");
    printf("Teste 2: %s -> %s\n", teste2, bemFormada(teste2) ? "Válido" : "Inválido");
    printf("Teste 3: %s -> %s\n", teste3, bemFormada(teste3) ? "Válido" : "Inválido");
    printf("Teste 4: %s -> %s\n", teste4, bemFormada(teste4) ? "Válido" : "Inválido");
    printf("Teste 5: %s -> %s\n", teste5, bemFormada(teste5) ? "Válido" : "Inválido");

    return 0;
}