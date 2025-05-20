#include <stdio.h>
#include <string.h>

#define MAX 100
#define TOTAL_TURMAS 15

// Tipos de usuarios
typedef enum {
    COORDENACAO = 3,
    PROFESSOR = 2,
    ALUNO = 1
} NivelAcesso;

// Estrutura para usuario
typedef struct {
    char nome[50];
    int idade;
    char cpf[15];
    char sexo[10];
    char telefone[15];
    char email[50];
    NivelAcesso nivel;
} Usuario;

// Estrutura para disciplina
typedef struct {
    char nome[50];
} Disciplina;

// Estrutura para situacao do aluno
typedef struct {
    float frequencia;
    float desempenho;
    float notas;
    int trabalhos_entregues;
    int avaliacoes_realizadas;
} SituacaoAluno;

// Banco de dados simples
Usuario usuarios[MAX];
Disciplina disciplinas[TOTAL_TURMAS] = {
    {"turma 1"}, {"turma 2"}, {"turma 3"}, {"turma 4"}, {"turma 5"},
    {"turma 6"}, {"turma 7"}, {"turma 8"}, {"turma 9"}, {"turma 10"},
    {"turma 11"}, {"turma 12"}, {"turma 13"}, {"turma 14"}, {"turma 15"}
};
SituacaoAluno situacoes[MAX];
int totalUsuarios = 0;

// Funcao de login
int autenticar(char email[], NivelAcesso nivelNecessario) {
    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0 && usuarios[i].nivel >= nivelNecessario) {
            return i; // Retorna o indice do usuario
        }
    }
    return -1;
}

// Cadastro de usuario
void cadastrarUsuario() {
    Usuario u;
    printf("Nome: "); scanf(" %[^\n]", u.nome);
    printf("Idade: "); scanf("%d", &u.idade);
    printf("CPF: "); scanf(" %[^\n]", u.cpf);
    printf("Sexo: "); scanf(" %[^\n]", u.sexo);
    printf("Telefone: "); scanf(" %[^\n]", u.telefone);
    printf("Email: "); scanf(" %[^\n]", u.email);
    printf("Nivel (1=Aluno, 2=Professor, 3=Coordenacao): ");
    scanf("%d", (int*)&u.nivel);
    usuarios[totalUsuarios++] = u;
    printf("Cadastro realizado com sucesso!\n");
}

// Mostrar disciplinas do curso
void mostrarDisciplinas() {
    printf("\nCurso: Ciencia da Computacao\n");
    printf("Turmas:\n");
    for (int i = 0; i < TOTAL_TURMAS; i++) {
        printf("- %s\n", disciplinas[i].nome);
    }
}

// Consultar situacao do aluno
void consultarSituacao(int alunoIndex) {
    SituacaoAluno s = situacoes[alunoIndex];
    printf("Frequencia: %.2f%%\n", s.frequencia);
    printf("Desempenho: %.2f%%\n", s.desempenho);
    printf("Nota media: %.2f\n", s.notas);
    printf("Trabalhos entregues: %d\n", s.trabalhos_entregues);
    printf("Avaliacoes feitas: %d\n", s.avaliacoes_realizadas);
}

// Cadastrar notas (professor)
void cadastrarNotas() {
    char emailProf[50], emailAluno[50];
    printf("Email do professor: ");
    scanf(" %[^\n]", emailProf);

    int idxProf = autenticar(emailProf, PROFESSOR);
    if (idxProf == -1) {
        printf("Professor nao encontrado ou sem permissao.\n");
        return;
    }

    printf("Email do aluno: ");
    scanf(" %[^\n]", emailAluno);
    int idxAluno = autenticar(emailAluno, ALUNO);
    if (idxAluno == -1) {
        printf("Aluno nao encontrado.\n");
        return;
    }

    printf("Informe os dados da situacao do aluno:\n");
    printf("Frequencia (0-100): ");
    scanf("%f", &situacoes[idxAluno].frequencia);
    printf("Desempenho (0-100): ");
    scanf("%f", &situacoes[idxAluno].desempenho);
    printf("Nota media (0-10): ");
    scanf("%f", &situacoes[idxAluno].notas);
    printf("Trabalhos entregues: ");
    scanf("%d", &situacoes[idxAluno].trabalhos_entregues);
    printf("Avaliacoes realizadas: ");
    scanf("%d", &situacoes[idxAluno].avaliacoes_realizadas);

    printf("Dados atualizados com sucesso!\n");
}

// Menu principal
int main() {
    int opcao;
    char email[50];

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Cadastrar usuario\n");
        printf("2. Mostrar turmas\n");
        printf("3. Consultar situacao do aluno\n");
        printf("4. Cadastrar notas (professor)\n");
        printf("5. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                mostrarDisciplinas();
                break;
            case 3:
                printf("Email do aluno: ");
                scanf(" %[^\n]", email);
                {
                    int idx = autenticar(email, ALUNO);
                    if (idx == -1) {
                        printf("Aluno nao encontrado.\n");
                    } else {
                        consultarSituacao(idx);
                    }
                }
                break;
            case 4:
                cadastrarNotas();
                break;
            case 5:
                return 0;
            default:
                printf("Opcao invalida.\n");
        }
    }
}
