#include <stdio.h>
#include <string.h>

struct Territorio //Criando a strutura de territorio
{
   char nome [30];
   char cor [10];
   int tropas;
};

int main(){
    struct Territorio territorios[4]; //Delimitando a quantidade de territorios

printf("--- Bem vindo ao jogo War! ---\n\n");
printf("Por favor, siga com o cadastro de 5 territorios para continuar:\n\n");

for (int i = 0; i < 5; i++) //laço de repetição para preenchimento dos dados
{
    printf("Digite as informacoes do territorio numero %d: \n", i + 1);
    
    printf("------------------------------------------------------\n");

    printf("Digite o nome do territorio: ");
    fgets(territorios[i].nome, 30, stdin);

    printf("Digite a cor do territorio: ");
    fgets(territorios[i].cor, 10, stdin);

    printf("Digite o numero de tropas deste territorio: ");
    scanf("%d", &territorios[i].tropas);

    printf("\n\n");

    while (getchar() != '\n');//Limpeza de Buffer
}

for (int i = 0; i < 5; i++) //laço de repetição para exibição dos dados
{
    printf("Segue abaixo as informacoes cadastradas dos 5 territorios:\n\n");

    printf("Territorio %d\n", i + 1);
    printf("Nome: %s", territorios[i].nome);
    printf("Cor: %s", territorios[i].cor);
    printf("Quantidade de tropas: %d", territorios[i].tropas);

    printf("\n------------------------------------------------------\n\n");
}

return 0;
}

    // 1. Configuração Inicial (Setup):
    // - Define o locale para português.
    // - Inicializa a semente para geração de números aleatórios com base no tempo atual.
    // - Aloca a memória para o mapa do mundo e verifica se a alocação foi bem-sucedida.
    // - Preenche os territórios com seus dados iniciais (tropas, donos, etc.).
    // - Define a cor do jogador e sorteia sua missão secreta.

    // 2. Laço Principal do Jogo (Game Loop):
    // - Roda em um loop 'do-while' que continua até o jogador sair (opção 0) ou vencer.
    // - A cada iteração, exibe o mapa, a missão e o menu de ações.
    // - Lê a escolha do jogador e usa um 'switch' para chamar a função apropriada:
    //   - Opção 1: Inicia a fase de ataque.
    //   - Opção 2: Verifica se a condição de vitória foi alcançada e informa o jogador.
    //   - Opção 0: Encerra o jogo.
    // - Pausa a execução para que o jogador possa ler os resultados antes da próxima rodada.

    // 3. Limpeza:
    // - Ao final do jogo, libera a memória alocada para o mapa para evitar vazamentos de memória.



// --- Implementação das Funções ---

// alocarMapa():
// Aloca dinamicamente a memória para o vetor de territórios usando calloc.
// Retorna um ponteiro para a memória alocada ou NULL em caso de falha.

// inicializarTerritorios():
// Preenche os dados iniciais de cada território no mapa (nome, cor do exército, número de tropas).
// Esta função modifica o mapa passado por referência (ponteiro).

// liberarMemoria():
// Libera a memória previamente alocada para o mapa usando free.

// exibirMenuPrincipal():
// Imprime na tela o menu de ações disponíveis para o jogador.

// exibirMapa():
// Mostra o estado atual de todos os territórios no mapa, formatado como uma tabela.
// Usa 'const' para garantir que a função apenas leia os dados do mapa, sem modificá-los.

// exibirMissao():
// Exibe a descrição da missão atual do jogador com base no ID da missão sorteada.

// faseDeAtaque():
// Gerencia a interface para a ação de ataque, solicitando ao jogador os territórios de origem e destino.
// Chama a função simularAtaque() para executar a lógica da batalha.

// simularAtaque():
// Executa a lógica de uma batalha entre dois territórios.
// Realiza validações, rola os dados, compara os resultados e atualiza o número de tropas.
// Se um território for conquistado, atualiza seu dono e move uma tropa.

// sortearMissao():
// Sorteia e retorna um ID de missão aleatório para o jogador.

// verificarVitoria():
// Verifica se o jogador cumpriu os requisitos de sua missão atual.
// Implementa a lógica para cada tipo de missão (destruir um exército ou conquistar um número de territórios).
// Retorna 1 (verdadeiro) se a missão foi cumprida, e 0 (falso) caso contrário.

// limparBufferEntrada():
// Função utilitária para limpar o buffer de entrada do teclado (stdin), evitando problemas com leituras consecutivas de scanf e getchar.
