#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[100];
    int matricula;
    float nota[3];
};

struct Aluno adicionarAluno(struct Aluno aluno){
        int i;
        printf("Nome: ");
        fgets(aluno.nome, 100, stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%i", &aluno.matricula);

        for (i = 0; i < 3; i++)
        {
            printf("Nota%d: ", i+1);
            scanf("%f", &aluno.nota[i]);
        }
        return aluno;
}

float calcularMedia(struct Aluno aluno){
    float media;
    return media = (aluno.nota[0] + aluno.nota[1] + aluno.nota[2]) / 3.0;
}

void imprimirAluno(struct Aluno aluno, float media){
    printf("\n\nNome do Aluno: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Notas:\n1=> %.1f\n2=> %.1f\n3=> %.1f\n", aluno.nota[0], aluno.nota[1], aluno.nota[2]);
    printf("Media: %.1f", media);
}


int main(){
    struct Aluno aluno = adicionarAluno(aluno);
    float media = calcularMedia(aluno);
    imprimirAluno(aluno, media);

    return 0;
}