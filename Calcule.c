#include <stdio.h>
#include "Calcule.h"

void playerMove(char xTabla[], char player ,char mPlayer) {
    int i;
    for (i = 1; i < 10; i++) {
        if (mPlayer == i && xTabla[i-1] == ' ') {
            xTabla[i-1] = player;
        }
    }
}

void computerMove(char xTabla[], char player, char computer) {
        if (xTabla[0] == computer && xTabla[1] == computer && xTabla[2] == ' ')
        xTabla[2] = computer;
    else if (xTabla[0] == computer && xTabla[1] == ' '      && xTabla[2] == computer)
        xTabla[1] = computer;
    else if (xTabla[0] == ' '      && xTabla[1] == computer && xTabla[2] == computer)
        xTabla[0] = computer;
    else if (xTabla[0] == ' '      && xTabla[3] == computer && xTabla[6] == computer)
        xTabla[0] = computer;
    else if (xTabla[0] == computer && xTabla[3] == ' '      && xTabla[6] == computer)
        xTabla[3] = computer;
    else if (xTabla[0] == computer && xTabla[3] == computer && xTabla[6] == ' ')
        xTabla[6] = computer;
    else if (xTabla[0] == ' '      && xTabla[4] == computer && xTabla[8] == computer)
        xTabla[0] = computer;
    else if (xTabla[0] == computer && xTabla[4] == ' '      && xTabla[8] == computer)
        xTabla[4] = computer;
    else if (xTabla[0] == computer && xTabla[4] == computer && xTabla[8] == ' ')
        xTabla[8] = computer;
    else if (xTabla[6] == computer && xTabla[7] == computer && xTabla[8] == ' ')
        xTabla[8] = computer;
    else if (xTabla[6] == computer && xTabla[7] == ' '      && xTabla[8] == computer)
        xTabla[7] = computer;
    else if (xTabla[6] == ' '      && xTabla[7] == computer && xTabla[8] == computer)
        xTabla[6] = computer;
    else if (xTabla[6] == ' '      && xTabla[4] == computer && xTabla[2] == computer)
        xTabla[6] = computer;
    else if (xTabla[6] == computer && xTabla[4] == ' '      && xTabla[2] == computer)
        xTabla[4] = computer;
    else if (xTabla[6] == computer && xTabla[4] == computer && xTabla[2] == ' ')
        xTabla[2] = computer;
    else if (xTabla[8] == ' '      && xTabla[5] == computer && xTabla[2] == computer)
        xTabla[8] = computer;
    else if (xTabla[8] == computer && xTabla[5] == ' '      && xTabla[2] == computer)
        xTabla[5] = computer;
    else if (xTabla[8] == computer && xTabla[5] == computer && xTabla[2] == ' ')
        xTabla[2] = computer;
    else if (xTabla[3] == ' '      && xTabla[4] == computer && xTabla[5] == computer)
            xTabla[3] = computer;
    else if (xTabla[3] == computer && xTabla[4] == ' '      && xTabla[5] == computer)
        xTabla[4] = computer;
    else if (xTabla[3] == computer && xTabla[4] == computer && xTabla[5] == ' ')
        xTabla[5] = computer;
    else if (xTabla[1] == computer && xTabla[4] == ' '      && xTabla[7] == computer)
        xTabla[4] = computer;
    else if (xTabla[1] == ' '      && xTabla[4] == computer && xTabla[7] == computer)
        xTabla[1] = computer;
    else if (xTabla[1] == computer && xTabla[4] == computer && xTabla[7] == ' ')
        xTabla[7] = computer;
    else {
                if (xTabla[0] == player      && xTabla[1] == player && xTabla[2] == ' ')
                xTabla[2] = computer;
            else if (xTabla[0] == player && xTabla[1] == ' '    && xTabla[2] == player)
                xTabla[1] = computer;
            else if (xTabla[0] == ' '    && xTabla[1] == player && xTabla[2] == player)
                xTabla[0] = computer;
            else if (xTabla[0] == ' '    && xTabla[3] == player && xTabla[6] == player)
                xTabla[0] = computer;
            else if (xTabla[0] == player && xTabla[3] == ' '    && xTabla[6] == player)
                xTabla[3] = computer;
            else if (xTabla[0] == player && xTabla[3] == player && xTabla[6] == ' ')
                xTabla[6] = computer;
            else if (xTabla[0] == ' '    && xTabla[4] == player && xTabla[8] == player)
                xTabla[0] = computer;
            else if (xTabla[0] == player && xTabla[4] == ' '    && xTabla[8] == player)
                xTabla[4] = computer;
            else if (xTabla[0] == player && xTabla[4] == player && xTabla[8] == ' ')
                xTabla[8] = computer;
            else if (xTabla[6] == player && xTabla[7] == player && xTabla[8] == ' ')
                xTabla[8] = computer;
            else if (xTabla[6] == player && xTabla[7] == ' '    && xTabla[8] == player)
                xTabla[7] = computer;
            else if (xTabla[6] == ' '    && xTabla[7] == player && xTabla[8] == player)
                xTabla[6] = computer;
            else if (xTabla[6] == ' '    && xTabla[4] == player && xTabla[2] == player)
                xTabla[6] = computer;
            else if (xTabla[6] == player && xTabla[4] == ' '    && xTabla[2] == player)
                xTabla[4] = computer;
            else if (xTabla[6] == player && xTabla[4] == player && xTabla[2] == ' ')
                xTabla[2] = computer;
            else if (xTabla[8] == ' '    && xTabla[5] == player && xTabla[2] == player)
                xTabla[8] = computer;
            else if (xTabla[8] == player && xTabla[5] == ' '    && xTabla[2] == player)
                xTabla[5] = computer;
            else if (xTabla[8] == player && xTabla[5] == player && xTabla[2] == ' ')
                xTabla[2] = computer;
            else if (xTabla[3] == ' '    && xTabla[4] == player && xTabla[5] == player)
                xTabla[3] = computer;
            else if (xTabla[3] == player && xTabla[4] == ' '    && xTabla[5] == player)
                xTabla[4] = computer;
            else if (xTabla[3] == player && xTabla[4] == player && xTabla[5] == ' ')
                xTabla[5] = computer;
            else if (xTabla[1] == player && xTabla[4] == ' '    && xTabla[7] == player)
                xTabla[4] = computer;
            else if (xTabla[1] == ' '    && xTabla[4] == player && xTabla[7] == player)
                xTabla[1] = computer;
            else if (xTabla[1] == player && xTabla[4] == player && xTabla[7] == ' ')
                xTabla[7] = computer;
        else {
            if (xTabla[4] == ' ')
                xTabla[4] = computer;
            else if (xTabla[0] == ' ')
                xTabla[0] = computer;
            else if (xTabla[6] == ' ')
                xTabla[6] = computer;
            else if (xTabla[8] == ' ')
                xTabla[8] = computer;
            else if (xTabla[2] == ' ')
                xTabla[2] = computer;
            else {
                if (xTabla[3] == ' ')
                    xTabla[3] = computer;
                if (xTabla[7] == ' ')
                    xTabla[7] = computer;
                if (xTabla[5] == ' ')
                    xTabla[5] = computer;
                if (xTabla[1] == ' ')
                    xTabla[1] = computer;
            }
        }
    }
}

int castigator(char xTabla[], char player, char computer) {

    if (xTabla[0] == player          && xTabla[1] == player   && xTabla[2] == player) {
        return 1;
    } else if (xTabla[0] == computer && xTabla[1] == computer && xTabla[2] == computer) {
        return 2;
    } else if (xTabla[3] == player   && xTabla[4] == player   && xTabla[5] == player) {
        return 1;
    } else if (xTabla[3] == computer && xTabla[4] == computer && xTabla[5] == computer) {
        return 2;
    } else if (xTabla[6] == player   && xTabla[7] == player   && xTabla[8] == player) {
        return 1;
    } else if (xTabla[6] == computer && xTabla[7] == computer && xTabla[8] == computer) {
        return 2;
    } else if (xTabla[0] == player   && xTabla[3] == player   && xTabla[6] == player) {
        return 1;
    } else if (xTabla[0] == computer && xTabla[3] == computer && xTabla[6] == computer) {
        return 2;
    } else if (xTabla[1] == player   && xTabla[4] == player   && xTabla[7] == player) {
        return 1;
    } else if (xTabla[1] == computer && xTabla[4] == computer && xTabla[7] == computer) {
        return 2;
    } else if (xTabla[2] == player   && xTabla[5] == player   && xTabla[8] == player) {
        return 1;
    } else if (xTabla[2] == computer && xTabla[5] == computer && xTabla[8] == computer) {
        return 2;
    } else if (xTabla[0] == player   && xTabla[4] == player   && xTabla[8] == player) {
        return 1;
    } else if (xTabla[0] == computer && xTabla[4] == computer && xTabla[8] == computer) {
        return 2;
    } else if (xTabla[6] == player   && xTabla[4] == player   && xTabla[2] == player) {
        return 1;
    } else if (xTabla[6] == computer && xTabla[4] == computer && xTabla[2] == computer) {
        return 2;
    } else
        return 0;
}
