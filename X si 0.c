#include <cstdio>
using namespace std;
void instructiuni ()
{
    printf("\t\t\t ***X si 0***\n\n\n\n");
    printf("Pentru a plasa piesa intr-un patrat\ntrebuie sa scrii litera corespunzatoare acestuia.\n\n");
    printf("Astfel,corespondenta patrat litera este urmatoarea : \n\n");
	printf("\t  1 | 2 | 3 \n");
    printf("\t ---+---+---\n");
    printf("\t  4 | 5 | 6 \n");
    printf("\t ---+---+---\n");
    printf("\t  7 | 8 | 9 \n\n\n");
}

char alegerePiesa()
{
    char piesaPlayer;
    printf ("Cu ce piesa vrei sa joci (X/0) : ");
    scanf ("%c",&piesaPlayer);
    while (piesaPlayer != 'X' && piesaPlayer != 'x' && piesaPlayer != '0') {
        printf ("\n\nAi ales o piesa invalida.");
        printf ("\n\nCu ce piesa vrei sa joci (X/0) : ");
        scanf ("%c",&piesaPlayer);
    }
    if ( piesaPlayer == 'X' || piesaPlayer == 'x') {
        return 'X';
    }
    else if ( piesaPlayer == '0' ) { 
        return '0';
    }
}
void tablaGoala(char xTabla[])

{
    for ( int i = 0 ; i < 9 ; i++ ) { 
        xTabla[i] = ' ';
    }
}

void afisareTabla(char xTabla[])

{
    printf ("\t  %c | %c | %c \n",xTabla[0],xTabla[1],xTabla[2]);
    printf ("\t ---+---+---\n");
    printf ("\t  %c | %c | %c \n",xTabla[3],xTabla[4],xTabla[5]);
    printf ("\t ---+---+---\n");
    printf ("\t  %c | %c | %c \n\n\n",xTabla[6],xTabla[7],xTabla[8]);
}
void playerMove (char xTabla[],char player)
{
    int mPlayer;

    printf ("Alege patratul in care vrei sa plasezi piesa (1-9) : ");
    scanf ("%d",&mPlayer);
    printf ("\n\n");
    while ( mPlayer < 1 || mPlayer > 9 || xTabla [mPlayer-1] != ' ') {
    	printf("Alegerea ta este invalida.Patratul ales este ocupat sau nu exista.\n\n");
    	printf("Alege patratul in care vrei sa plasezi piesa (1-9) : ");
        scanf("%d",&mPlayer);
        printf("\n\n");
    }
    for ( int i = 1 ; i < 10 ; i ++) {
        if ( mPlayer == i && xTabla[i-1] == ' '){
                xTabla[i-1] = player;
            }
    }
}

void computerMove (char xTabla[],char player,char computer)
{
    if (xTabla[0] == player && xTabla[1] == player && xTabla[2] == ' ')
            xTabla[2] = computer;
    else if (xTabla[0] == player && xTabla[1] == ' ' && xTabla[2] == player)
            xTabla[1] = computer;
    else if (xTabla[0] == ' ' && xTabla[1] == player && xTabla[2] == player)
            xTabla[0] = computer;

    else if (xTabla[0] == ' ' && xTabla[3] == player && xTabla[6] == player)
            xTabla[0] = computer;

    else if (xTabla[0] == player && xTabla[3] == ' ' && xTabla[6] == player)
            xTabla[3] = computer;

    else if (xTabla[0] == player && xTabla[3] == player && xTabla[6] == ' ')
            xTabla[6] = computer;

    else if (xTabla[0] == ' ' && xTabla[4] == player && xTabla[8] == player)
            xTabla[0] = computer;

    else if (xTabla[0] == player && xTabla[4] == ' ' && xTabla[8] == player)
            xTabla[4] = computer;

    else if (xTabla[0] == player && xTabla[4] == player && xTabla[8] == ' ')
            xTabla[8] = computer;

    else if (xTabla[6] == player && xTabla[7] == player && xTabla[8] == ' ')
            xTabla[8] = computer;

    else if (xTabla[6] == player && xTabla[7] == ' ' && xTabla[8] == player)
            xTabla[7] = computer;

    else if (xTabla[6] == ' ' && xTabla[7] == player && xTabla[8] == player)
            xTabla[6] = computer;

    else if (xTabla[6] == ' ' && xTabla[4] == player && xTabla[2] == player)
            xTabla[6] = computer;

    else if (xTabla[6] == player && xTabla[4] == ' ' && xTabla[2] == player)
            xTabla[4] = computer;

    else if (xTabla[6] == player && xTabla[4] == player && xTabla[2] == ' ')
            xTabla[2] = computer;

    else if (xTabla[8] == ' ' && xTabla[5] == player && xTabla[2] == player)
            xTabla[8] = computer;

    else if (xTabla[8] == player && xTabla[5] == ' ' && xTabla[2] == player)
            xTabla[5] = computer;

    else if (xTabla[8] == player && xTabla[5] == player && xTabla[2] == ' ')
            xTabla[2] = computer;

    else if (xTabla[3] == ' ' && xTabla[4] == player && xTabla[5] == player)
            xTabla[3] = computer;

    else if (xTabla[3] == player && xTabla[4] == ' ' && xTabla[5] == player)
            xTabla[4] = computer;

    else if (xTabla[3] == player && xTabla[4] == player && xTabla[5] == ' ')
            xTabla[5] = computer;

    else if (xTabla[1] == player && xTabla[4] == ' ' && xTabla[7] == player)
            xTabla[4] = computer;

    else if (xTabla[1] == ' ' && xTabla[4] == player && xTabla[7] == player)
            xTabla[1] = computer;

    else if (xTabla[1] == player && xTabla[4] == player && xTabla[7] == ' ')
            xTabla[7] = computer;
    else{
            if  (xTabla[0] == computer && xTabla[1] == computer && xTabla[2] == ' ')
                    xTabla[2] = computer;

            else if (xTabla[0] == computer && xTabla[1] == ' ' && xTabla[2] == computer)
                    xTabla[1] = computer;

            else if (xTabla[0] == ' ' && xTabla[1] == computer && xTabla[2] == computer)
                    xTabla[0] = computer;

            else if (xTabla[0] == ' ' && xTabla[3] == computer && xTabla[6] == computer)
                    xTabla[0] = computer;

            else if (xTabla[0] == computer && xTabla[3] == ' ' && xTabla[6] == computer)
                    xTabla[3] = computer;

            else if (xTabla[0] == computer && xTabla[3] == computer && xTabla[6] == ' ')
                    xTabla[6] = computer;

            else if (xTabla[0] == ' ' && xTabla[4] == computer && xTabla[8] == computer)
                    xTabla[0] = computer;

            else if (xTabla[0] == computer && xTabla[4] == ' ' && xTabla[8] == computer)
                    xTabla[4] = computer;

            else if (xTabla[0] == computer && xTabla[4] == computer && xTabla[8] == ' ')
                    xTabla[8] = computer;

            else if (xTabla[6] == computer && xTabla[7] == computer && xTabla[8] == ' ')
                    xTabla[8] = computer;

            else if (xTabla[6] == computer && xTabla[7] == ' ' && xTabla[8] == computer)
                    xTabla[7] = computer;

            else if (xTabla[6] == ' ' && xTabla[7] == computer && xTabla[8] == computer)
                    xTabla[6] = computer;

            else if (xTabla[6] == ' ' && xTabla[4] == computer && xTabla[2] == computer)
                    xTabla[6] = computer;

            else if (xTabla[6] == computer && xTabla[4] == ' ' && xTabla[2] == computer)
                    xTabla[4] = computer;

            else if (xTabla[6] == computer && xTabla[4] == computer && xTabla[2] == ' ')
                    xTabla[2] = computer;

            else if (xTabla[8] == ' ' && xTabla[5] == computer && xTabla[2] == computer)
                    xTabla[8] = computer;

            else if (xTabla[8] == computer && xTabla[5] == ' ' && xTabla[2] == computer)
                    xTabla[5] = computer;

            else if (xTabla[8] == computer && xTabla[5] == computer && xTabla[2] == ' ')
                    xTabla[2] = computer;

            else if (xTabla[3] == ' ' && xTabla[4] == computer && xTabla[5] == computer)
                    xTabla[3] = computer;

            else if (xTabla[3] == computer && xTabla[4] == ' ' && xTabla[5] == computer)
                    xTabla[4] = computer;

            else if (xTabla[3] == computer && xTabla[4] == computer && xTabla[5] == ' ')
                    xTabla[5] = computer;

            else if (xTabla[1] == computer && xTabla[4] == ' ' && xTabla[7] == computer)
                    xTabla[4] = computer;

            else if (xTabla[1] == ' ' && xTabla[4] == computer && xTabla[7] == computer)
                    xTabla[1] = computer;

            else if (xTabla[1] == computer && xTabla[4] == computer && xTabla[7] == ' ')
                    xTabla[7] = computer;

            else{
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

                    else{
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

int castigator (char xTabla[],char player,char computer)

{

    if (xTabla[0] == player && xTabla[1] == player && xTabla[2] == player){
        return 1;
    }

    else if (xTabla[0] == computer && xTabla[1] == computer && xTabla[2] == computer){
        return 2;
    }

    else if (xTabla[3] == player && xTabla[4] == player && xTabla[5] == player){
        return 1;
    }

    else if (xTabla[3] == computer && xTabla[4] == computer && xTabla[5] == computer){
        return 2;
    }

    else if (xTabla[6] == player && xTabla[7] == player && xTabla[8] == player){
        return 1;
    }

    else if (xTabla[6] == computer && xTabla[7] == computer && xTabla[8] == computer){
        return 2;
    }

    else if (xTabla[0] == player && xTabla[3] == player && xTabla[6] == player){
        return 1;
    }

    else if (xTabla[0] == computer && xTabla[3] == computer && xTabla[6] == computer){
        return 2;
    }

    else if (xTabla[1] == player && xTabla[4] == player && xTabla[7] == player){
        return 1;
    }

    else if (xTabla[1] == computer && xTabla[4] == computer && xTabla[7] == computer){
        return 2;
    }

    else if (xTabla[2] == player && xTabla[5] == player && xTabla[8] == player){
        return 1;
    }

    else if (xTabla[2] == computer && xTabla[5] == computer && xTabla[8] == computer){
        return 2;
    }

    else if (xTabla[0] == player && xTabla[4] == player && xTabla[8] == player){
        return 1;
    }

    else if (xTabla[0] == computer && xTabla[4] == computer && xTabla[8] == computer){
        return 2;
    }

    else if (xTabla[6] == player && xTabla[4] == player && xTabla[2] == player){
        return 1;
    }

    else if (xTabla[6] == computer && xTabla[4] == computer && xTabla[2] == computer){
        return 2;
    }

    else return 0;
}

int main ()
{
    char player;
    char computer;
    char tabla[10];
    instructiuni();
    tablaGoala(tabla);
    alegerePiesa();
    if (alegerePiesa() == 'X') {
        computer = '0';
        player = 'X';
    }
    else {
        computer = 'X';
        player = '0';
    }
    printf ("\nOk.Eu voi juca cu %c , iar tu vei juca cu %c.\n\n",computer,player);
    afisareTabla(tabla);
    int t = 0;
    while (t <= 9 && !castigator(tabla,player,computer)){
      playerMove(tabla,player);
      afisareTabla(tabla);
      computerMove(tabla,player,computer);
      afisareTabla(tabla);
      castigator(tabla,player,computer);
      t = t + 2;
    }
	switch (castigator(tabla,player,computer)){
		case 1 : printf ("\nAi castigat.Bucura-te cat mai poti.Jur ca nu se va mai intampla.");
				 break;
		case 2 : printf ("\nAi pierdut.Era de asteptat ca nu vei reusi sa ma invingi.");
				 break;
 	   case 0 : printf ("\nM-ai egalat.Ai fost norocos.");
    }
       return 0;
}
