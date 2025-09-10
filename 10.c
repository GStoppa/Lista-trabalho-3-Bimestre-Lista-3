#include <stdio.h>
#include <string.h>

void lerNomes(char nomes[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("Aluno %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
}

void ordenarNomes(char nomes[][50], int n) {
    char aux[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
}

void mostrarNomes(char nomes[][50], int n) {
    printf("\nNomes em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }
}

int pesquisarNome(char nomes[][50], int n, char pesquisa[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nomes[i], pesquisa) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int qtd = 40;
    char nomes[40][50];
    char pesquisa[50];

    printf("Digite os nomes dos %d alunos:\n", qtd);
    lerNomes(nomes, qtd);

    ordenarNomes(nomes, qtd);
    mostrarNomes(nomes, qtd);

    printf("\nDigite um nome para pesquisar: ");
    fgets(pesquisa, 50, stdin);
    pesquisa[strcspn(pesquisa, "\n")] = '\0';

    int pos = pesquisarNome(nomes, qtd, pesquisa);

    if (pos != -1) {
        printf("Nome '%s' encontrado na posicao %d.\n", pesquisa, pos + 1);
    } else {
        printf("Nome '%s' nao encontrado.\n", pesquisa);
    }

    return 0;
}
