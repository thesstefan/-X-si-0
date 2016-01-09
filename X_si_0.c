#include <stdio.h>
#include "Afisare.h"
#include "Calcule.h"

int main () {
    char player;
    char computer;
    char tabla[10];
    instructiuni();
    tablaGoala(tabla);
    alegerePiesa();

    if (alegerePiesa() == 'X') {
        computer = '0';
        player = 'X';
    } else {
        computer = 'X';
        player = '0';
    }

    printf("\nOk.Eu voi juca cu %c , iar tu vei juca cu %c.\n\n", computer, player);
    afisareTabla(tabla);
    int t = 0;
    while (t <= 9 && !castigator(tabla,player,computer)) {
      playerMove(tabla,player);
      afisareTabla(tabla);
      computerMove(tabla,player,computer);
      afisareTabla(tabla);
      castigator(tabla,player,computer);
      t = t + 2;
    }
    switch (castigator(tabla, player, computer)) {
         case 1: printf("\nAi castigat.Bucura-te cat mai poti.Jur ca nu se va mai intampla.");
                 break;
         case 2: printf("\nAi pierdut.Era de asteptat ca nu vei reusi sa ma invingi.");
                 break;
         case 0: printf("\nM-ai egalat.Ai fost norocos.");
                 break;
    }
    return 0;
}
