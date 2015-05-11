#include <iostream>

using namespace std;

int main() {
    char jogadorXis, jogadorBola, vencedor;
    char jogadorVez, jogadorOponente;
    char branco, tabuleiro[7][6];

    branco = ' ';
    jogadorVez = 'X';
    jogadorOponente = 'O';
    vencedor = 'Vazio';

    //ESCOLHA DOS JOGADORES
    cout << "Escolha para jogar com X (Xis)\n"
            "'P' para pessoa ou 'C' para computador: ";
    cin >> jogadorXis;

    cout << "\nEscolha para jogar com O (Bola)\n"
            "'P' para pessoa ou 'C' para computador: ";
    cin >> jogadorBola;


    //DESENHA O TABULEIRO ANTES DO JOGO
    //PREENCHE TODOS OS CAMPOS COM ESPAÇOS EM BRANCO
    cout << "\n";
    int i, j;

    for (i=0; i<7; i++) {
        for (j=0; j<6; j++) {
            tabuleiro[7][6] = branco;
        }
    }

    //COLOCA MOLDURA NO TABULEIRO
    //COLUNA 0
    /*
    for (i=0; i<7; i++) {
        tabuleiro[i][0] = 'm';
    }

    //LINHA 0
    for (j=0; j<6; j++) {
        tabuleiro[0][j] = 'm';
    }

    //ÚLTIMA COLUNA
    for (i=0; i<7+1; i++) {
        tabuleiro[i][7+1] = 'm';
    }

    //ÚLTIMA LINHA
    for (j=0; j<6+1; j++) {
        tabuleiro[6+1][j] = 'm';
    }
    */

    //IMPRIME O TABULEIRO
    i=0, j=0;
    int linha=1, coluna=1;

    //IMPRIME ATÉ O MÁXIMO DE LINHAS
    while (i<6) {
        cout << "   ";

        for (j=0; j<7; j++) {
            cout << "+---";
        }
        cout << "+\n" << "L" << linha;
        linha++;
        cout << " ";

        i++;

        for (j=0; j<7; j++) {
            cout << "|   ";
        }
        cout << "|\n";
    }

    //IMPRIME A ÚLTIMA LINHA
    if (i==6) {
        cout << "   ";

        for (j=0; j<7; j++) {
            cout << "+---";
        }
        cout << "+\n   ";

        for (j=0; j<7; j++) {
            cout << "  C" << coluna;
            coluna++;
        }
    }

    cout << "\n";

    /*
    //INICIA O JOGO
    while (vencedor == 'Vazio') {
        cout << "Lig 4\n";

    }
    */
}
