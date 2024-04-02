#include <stdio.h>
#include <string.h>
#define max 50

typedef struct 
{
    char nome[100];
    char email[100];
}Pessoas;

int main(){
    Pessoas alunos[max];
    int continua = 0, i = 0, j = 0;
    char x;

    do
    {
        printf("Digite o nome completo: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite o email completo: ");
        fgets(alunos[i].email, sizeof(alunos[i].email), stdin);
        alunos[i].email[strcspn(alunos[i].email, "\n")] = '\0';


        printf("Deseja continuar[S/N]? ");
        scanf("%c", &x);
        fflush(stdin);

        i++;

        if (x == 'N' || x == 'n')
        {
            continua = 1;
        }
        
    } while (continua != 1);
    printf("\n");
    for (j = 0; j < i; j++)
    {
        printf("~~~~~~~~~~ %d ~~~~~~~~~~\n", j);
        printf("Nome_____%s\n", alunos[j].nome);
        printf("Email____%s\n", alunos[j].email);
    }
    
    printf("\nPrograma Encerrado!");

    return 0;
    
}
