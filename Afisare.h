#ifndef AFISARE_H_INCLUDED
#define AFISARE_H_INCLUDED

char alegerePiesa() {
    char piesaPlayer;
    while (piesaPlayer != 'X' && piesaPlayer != 'x' && piesaPlayer != '0') {
        printf("\n\nAi ales o piesa invalida.");
        printf("\n\nCu ce piesa vrei sa joci (X/0) : ");
        scanf("%c", &piesaPlayer);
    }

    if (piesaPlayer == 'X' || piesaPlayer == 'x') {
        return 'X';
    } else if (piesaPlayer == '0') {
        return '0';
    }
}

void instructiuni () {
    printf("\t\t\t ***X si 0***\n\n\n\n");
    printf("Pentru a plasa piesa intr-un patrat\ntrebuie sa scrii litera corespunzatoare acestuia.\n\n");
    printf("Astfel,corespondenta patrat litera este urmatoarea : \n\n");
    printf("\t  1 | 2 | 3 \n");
    printf("\t ---+---+---\n");
    printf("\t  4 | 5 | 6 \n");
    printf("\t ---+---+---\n");
    printf("\t  7 | 8 | 9 \n\n\n");
}

void tablaGoala(char xTabla[]) {
    for (int i = 0; i < 9; i++) {
        xTabla[i] = ' ';
    }
}

void afisareTabla(char xTabla[]) {
    printf ("\t  %c | %c | %c \n", xTabla[0], xTabla[1], xTabla[2]);
    printf ("\t ---+---+---\n");
    printf ("\t  %c | %c | %c \n", xTabla[3], xTabla[4], xTabla[5]);
    printf ("\t ---+---+---\n");
    printf ("\t  %c | %c | %c \n\n\n", xTabla[6], xTabla[7], xTabla[8]);
}


#endif // AFISARE_H_INCLUDED
