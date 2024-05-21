#include <stdio.h>
#include <stdbool.h>
#include <locale.h>


int main()
{
    char tabuleiro [3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}
    };

    bool Ganhador = false;
    char JogadorAtual = 'x';
    char SegundoJogador = 'O';
    int JogadasDisponiveis = 10;
    int posicao = 0; // escolher de 0 a 8 //
    int pe = 0;

    printf("--Jogo da Velha--\n");
    do
    {
        JogadasDisponiveis = JogadasDisponiveis - 1;

        // condição de vitoria (jogador O)
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro [1][0] == SegundoJogador && tabuleiro [2][0] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][1] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][1] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == SegundoJogador && tabuleiro[1][2] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][0] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro[0][1] == SegundoJogador && tabuleiro[0][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[1][0] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[1][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[2][0] == SegundoJogador && tabuleiro[2][1] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
    
            // Empate //
        if (JogadasDisponiveis == 0)
        {
            Ganhador = true;
            break;
        }

            // primeiro jogador //
        printf("Jogador %c \n", JogadorAtual);
        printf("Escolha uma posicao de 1 ate 9: ");
        scanf("%d", &posicao);
        posicao = posicao - 1;
        
            // preenchendo o tabuleiro //
        if (posicao == 0 || posicao == 1 || posicao == 2)
        {
            tabuleiro[0][posicao] = JogadorAtual;
        } else if (posicao == 3 || posicao == 4 || posicao == 5)
        {
            tabuleiro[1][posicao-3] = JogadorAtual;
        } else if (posicao == 6 || posicao == 7 || posicao == 8)
        {
            tabuleiro[2][posicao-6] = JogadorAtual;
        }       

            // Imprime Tabuleiro //
        for (int linha = 0; linha < 3; linha++)
        {
            for (int coluna = 0; coluna < 3; coluna++)
            {
                printf("%c ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }
                // condições de vitoria de X //
        if (tabuleiro[0][0] == JogadorAtual && tabuleiro[0][1] == JogadorAtual && tabuleiro[0][2] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[1][0] == JogadorAtual && tabuleiro[1][1] == JogadorAtual && tabuleiro[1][2] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[2][0] == JogadorAtual && tabuleiro[2][1] == JogadorAtual && tabuleiro[2][2] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == JogadorAtual && tabuleiro[1][0] == JogadorAtual && tabuleiro[2][0] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][1] == JogadorAtual && tabuleiro[1][1] == JogadorAtual && tabuleiro[2][1] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == JogadorAtual && tabuleiro[1][2] == JogadorAtual && tabuleiro[2][2] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == JogadorAtual && tabuleiro[1][1] == JogadorAtual && tabuleiro[2][2] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == JogadorAtual && tabuleiro[1][1] == JogadorAtual && tabuleiro[2][0] == JogadorAtual)
        {
            Ganhador = true;
            break;
        }

            JogadasDisponiveis = JogadasDisponiveis - 1;

         // Empate //
        if (JogadasDisponiveis == 0)
        {
            Ganhador = true;
            break;
        }

          // segundo jogador //
        printf("Jogador %c \n", SegundoJogador);
        printf("Escolha uma posicao de 1 ate 9: ");
        scanf("%d", &pe);
        pe = pe-1;

         // preenchendo o tabuleiro (segundo jogador) //
        if (pe == 0 || pe == 1 || pe == 2)
        {
            tabuleiro[0][pe] = SegundoJogador;
        } else if (pe == 3 || pe == 4 || pe == 5)
        {
            tabuleiro[1][pe-3] = SegundoJogador;
        } else if (pe == 6 || pe == 7 || pe == 8)
        {
            tabuleiro[2][pe-6] = SegundoJogador;
        }       

              // Imprime Tabuleiro (segundo jogador) //
        for (int linha = 0; linha < 3; linha++)
        {
            for (int coluna = 0; coluna < 3; coluna++)
            {
                printf("%c ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }


            // condições de vitoria de O //
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro[0][1] == SegundoJogador && tabuleiro[0][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[1][0] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[1][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[2][0] == SegundoJogador && tabuleiro[2][1] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro[1][0] == SegundoJogador && tabuleiro[2][0] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][1] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][1] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == SegundoJogador && tabuleiro[1][2] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][0] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][2] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }
        if (tabuleiro[0][2] == SegundoJogador && tabuleiro[1][1] == SegundoJogador && tabuleiro[2][0] == SegundoJogador)
        {
            Ganhador = true;
            break;
        }

            // Empate //
        if (JogadasDisponiveis == 0)
        {
            Ganhador = true;
            break;
        }
        

    } while (Ganhador == false && JogadasDisponiveis > 0);
    

    return 0;
}
