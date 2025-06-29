#include <iostream>
using namespace std;

struct Filme {
    string nome;
    string genero;
    string tema;
};

Filme filmes[] = {
    {"Top Gun: Maverick", "Acao", "Militar"},
    {"Velozes e Furiosos 5", "Acao", "Corrida"},
    {"Auschwitz", "Documentario", "Guerra"},
    {"The Vietnam War", "Documentario", "Guerra"},
    {"Titanic", "Romance", "Catastrofe"},
    {"Orgulho e Preconceito", "Romance", "Epoca"},
    {"Shrek", "Animacao", "Comedia"},
    {"Chernobyl", "Documentario", "Desastre"},
    {"Guerras do Brasil", "Documentario", "Historia Brasileira"},
    {"Ditadura Militar", "Documentario", "Historia Brasileira"},
    {"Toy Story", "Animacao", "Infantil"},
    {"La La Land", "Romance", "Musical"},
    {"Brilho Eterno de Uma Mente Sem Lembrancas", "Romance", "Drama"},
    {"Mulan", "Animacao", "Infantil"},
    {"Matrix", "Acao", "Ficcao Cientifica"},
    {"Vingadores", "Acao", "Heroi"},
};

int perfis[5][16] = {
    {5, 3, 4, 0, 2, 2, 0, 5, 0, 0, 0, 0, 3, 0, 4, 1},
    {4, 0, 5, 3, 0, 0, 0, 4, 3, 5, 0, 0, 0, 2, 5, 0},
    {0, 4, 0, 5, 0, 0, 5, 0, 5, 3, 0, 0, 0, 0, 0, 4},
    {0, 1, 0, 0, 4, 5, 3, 0, 0, 0, 1, 5, 5, 4, 0, 0},
    {0, 0, 5, 5, 0, 0, 0, 4, 5, 5, 0, 0, 0, 0, 4, 0}
};

int notasUsuarioAtual[16] = {0};

// Variável para controlar se é novo usuário
bool novoUsuario = true;

void recomendarPorGenero(string generoEscolhido) {
    cout << "\n=========== FILMES DO GENERO '" << generoEscolhido << "' ===========\n";
    for (int i = 0; i < 16; i++) {
        if (filmes[i].genero == generoEscolhido) {
            cout << i << " - " << filmes[i].nome << " (Tema: " << filmes[i].tema << ")\n";
        }
    }
    cout << "==========================================================\n";
}

void avaliarFilmesPorGenero(string generoEscolhido) {
    int filmeID, nota;
    char continuar;
    do {
        recomendarPorGenero(generoEscolhido);
        cout << "\nDigite o numero do filme do genero '" << generoEscolhido << "' para avaliar: ";
        cin >> filmeID;

        if (filmeID < 0 || filmeID >= 16 || filmes[filmeID].genero != generoEscolhido) {
            cout << ">> Numero invalido ou filme nao pertence ao genero escolhido.\n";
            continue;
        }

        cout << "Digite sua nota para '" << filmes[filmeID].nome << "' (0 a 5): ";
        cin >> nota;

        if (nota < 0 || nota > 5) {
            cout << ">> Nota invalida, tente novamente.\n";
            continue;
        }

        notasUsuarioAtual[filmeID] = nota;

        cout << "Deseja avaliar outro filme do genero '" << generoEscolhido << "'? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');
}

bool perfilGostaDosFilmesDoGenero(int notasPerfil[], string generoEscolhido) {
    for (int i = 0; i < 16; i++) {
        if (notasUsuarioAtual[i] >= 4 && filmes[i].genero == generoEscolhido) {
            if (notasPerfil[i] < 4) {
                return false;
            }
        }
    }
    return true;
}

void recomendarFilmesColaborativos(string generoEscolhido) {
    cout << "\n===== RECOMENDACOES BASEADAS EM OUTROS USUARIOS =====\n";

    bool temRecomendacao = false;
    bool jaRecomendado[16] = {false};  // Vetor para evitar repetir filmes

    for (int p = 0; p < 5; p++) {
        if (perfilGostaDosFilmesDoGenero(perfis[p], generoEscolhido)) {
            for (int i = 0; i < 16; i++) {
                // Se o perfil gostou do filme, o usuario nao avaliou ainda, e o filme ainda nao foi recomendado
                if (perfis[p][i] >= 4 && notasUsuarioAtual[i] == 0 && !jaRecomendado[i]) {
                    cout << "* " << filmes[i].nome << " (" << filmes[i].genero << ")\n";
                    jaRecomendado[i] = true;  // Marca como já recomendado
                    temRecomendacao = true;
                }
            }
        }
    }

    if (!temRecomendacao) {
        cout << "Nenhuma recomendacao disponivel no momento.\n";
    }

    cout << "======================================================\n";
}

// Função para detectar novo usuário e pedir avaliação inicial
void avaliarFilmesPrimeiraVez() {
	cout << "\n======================================================\n";
    cout << "     BEM-VINDO AO SISTEMA DE RECOMENDACAO DE FILMES    \n";
    cout << "======================================================\n";
    cout << "\nPercebemos que e sua primeira vez aqui!\nGostaria de avaliar alguns filmes para melhor recomendacao? (S/N): ";
    char resposta;
    cin >> resposta;

    if (resposta == 'S' || resposta == 's') {
        cout << "Legal! Vamos comecar com a avaliacao de filmes.\n";

        int generoEscolha;
        string genero;

        cout << "Escolha um genero para avaliar:\n";
        cout << "1 - Acao\n2 - Romance\n3 - Documentario\n4 - Animacao\nOpcao: ";
        cin >> generoEscolha;

        while (generoEscolha < 1 || generoEscolha > 4) {
            cout << "Opcao invalida. Tente novamente:\n";
            cout << "1 - Acao\n2 - Romance\n3 - Documentario\n4 - Animacao\nOpcao: ";
            cin >> generoEscolha;
        }

        switch (generoEscolha) {
            case 1: genero = "Acao"; break;
            case 2: genero = "Romance"; break;
            case 3: genero = "Documentario"; break;
            case 4: genero = "Animacao"; break;
        }

        avaliarFilmesPorGenero(genero);
        novoUsuario = false; // Depois da primeira avaliação, não é mais novo
    } else {
        cout << "Ok, sem avaliacoes por enquanto. Voce pode avaliar depois pelo menu.\n";
        novoUsuario = false; // Mesmo que recuse, não repete mais
    }
}

int main() {
    // Se for novo usuário, mostra mensagem e chama avaliação inicial
    if (novoUsuario) {
        avaliarFilmesPrimeiraVez();
    }

    int D;
    string genero;
    char escolha;

    do {
        cout << "\n======================================================\n";
        cout << "     BEM-VINDO AO SISTEMA DE RECOMENDACAO DE FILMES    \n";
        cout << "======================================================\n";
        cout << "Escolha um genero:\n";
        cout << "1 - Acao\n2 - Romance\n3 - Documentario\n4 - Animacao\n";
        cout << "Opcao: ";
        cin >> D;

        while (D < 1 || D > 4) {
            cout << "Opcao invalida. Tente novamente:\n";
            cout << "1 - Acao\n2 - Romance\n3 - Documentario\n4 - Animacao\n";
            cin >> D;
        }

        switch (D) {
            case 1: genero = "Acao"; break;
            case 2: genero = "Romance"; break;
            case 3: genero = "Documentario"; break;
            case 4: genero = "Animacao"; break;
        }

        recomendarPorGenero(genero);

        char querAvaliar;
        cout << "\nDeseja avaliar filmes do genero '" << genero << "'? (S/N): ";
        cin >> querAvaliar;

        if (querAvaliar == 'S' || querAvaliar == 's') {
            avaliarFilmesPorGenero(genero);
        } else {
            cout << ">> Avaliacao ignorada.\n";
        }

        recomendarFilmesColaborativos(genero);

        cout << "\nDigite 'P' para voltar ao menu ou qualquer outra tecla para sair: ";
        cin >> escolha;

    } while (escolha == 'P' || escolha == 'p');

    cout << "\nObrigado por usar nosso sistema! Ate a proxima.\n";
    return 0;
}
