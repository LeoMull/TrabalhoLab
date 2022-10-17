#include <stdio.h>
#include <stdlib.h>

int main() {
  int op = 0, pc, player;

  do {
    pc = rand() % 5 + 1;

    do {
      printf("Escolha seu objeto\n 1-PEDRA\n 2-PAPEL\n 3-TESOURA\n 4-LAGARTO\n "
             "5-SPOCK\n");
      scanf("%d", &player);
    } while (player < 1 || player > 5);

    if (player == 1)
      printf("Voce escolheu PEDRA\n");
    else if (player == 2)
      printf("Voce escolheu PAPEL\n");
    else if (player == 3)
      printf("Voce escolheu TESOURA\n");
    else if (player == 4)
      printf("Voce escolheu LAGARTO\n");
    else if (player == 5)
      printf("Voce escolheu SPOCK\n");

    if (pc == 1)
      printf("O computador escolheu PEDRA\n");
    else if (pc == 2)
      printf("O computador escolheu PAPEL\n");
    else if (pc == 3)
      printf("O computador escolheu TESOURA\n");
    else if (pc == 4)
      printf("O computador escolheu LAGARTO\n");
    else if (pc == 5)
      printf("O computador escolheu SPOCK\n");

    if (pc == player)
      printf("Empate!!!\n");

    else if (player == 1) {
      if (pc == 2)
        printf("O computador VENCEU!!!\n");
      else if (pc == 3)
        printf("Voce VENCEU!!!\n");
      else if (pc == 4)
        printf("Voce VENCEU!!!\n");
      else if (pc == 5)
        printf("O computador VENCEU!!!\n");

    } else if (player == 2) {
      if (pc == 1)
        printf("Voce VENCEU!!!\n");
      else if (pc == 3)
        printf("O computador VENCEU!!!\n");
      else if (pc == 4)
        printf("O computador VENCEU!!!\n");
      else if (pc == 5)
        printf("Voce VENCEU!!!\n");

    } else if (player == 3) {
      if (pc == 1)
        printf("O computador VENCEU!!!\n");
      else if (pc == 2)
        printf("Voce VENCEU!!!\n");
      else if (pc == 4)
        printf("Voce VENCEU!!!\n");
      else if (pc == 5)
        printf("O computador VENCEU!!!\n");

    } else if (player == 4) {
      if (pc == 1)
        printf("O computador VENCEU!!!\n");
      else if (pc == 2)
        printf("Voce VENCEU!!!\n");
      else if (pc == 3)
        printf("O computador VENCEU!!!\n");
      else if (pc == 5)
        printf("Voce VENCEU!!!\n");

    } else if (player == 5) {
      if (pc == 1)
        printf("Voce VENCEU!!!\n");
      else if (pc == 2)
        printf("O computador VENCEU!!!\n");
      else if (pc == 3)
        printf("Voce VENCEU!!!\n");
      else if (pc == 4)
        printf("O computador VENCEU!!!\n");
    }

    printf("Deseja jogar novamente? 1- Sim 2-Nao\n");
    scanf("%d", &op);
  } while (op != 2);
  return 0;
}