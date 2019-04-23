#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char A[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'} };
char B[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '\\'}, {'|', '_', '_', '_', '/'}, {'|', ' ', ' ', ' ', '\\'}, {'|', '_', '_', '_', '/'} };
char C[5][5] = { {' ', '_', '_', '_', '_'}, {'/', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'\\', '_', '_', '_', '_'} };
char D[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '\\'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '/'} };
char E[5][5] = { {' ', '_', '_', '_', '_'}, {'|', ' ', ' ', ' ', ' '}, {'|', '_', '_', '_', '_'}, {'|', ' ', ' ', ' ', ' '}, {'|', '_', '_', '_', '_'} };
char F[5][5] = { {' ', '_', '_', '_', '_'}, {'|', ' ', ' ', ' ', ' '}, {'|', '_', '_', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '} };
char G[5][5] = { {' ', '_', '_', '_', '_'}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', '_', '_'}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'} };
char H[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'} };
char I[5][5] = { {' ', ' ', ' ', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '} };
char J[5][5] = { {'_', '_', '_', '_', '_'}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {'\\', '_', '|', ' ', ' '} };
char K[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', '/'}, {'|', '_', '_', '/', ' '}, {'|', ' ', ' ', '\\', ' '}, {'|', ' ', ' ', ' ', '\\'} };
char L[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'\\', '_', '_', '_', '_'} };
char M[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', '\\', ' ', '/', '|'}, {'|', ' ', 'V', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'} };
char N[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', '\\', ' ', ' ', '|'}, {'|', ' ', '\\', ' ', '|'}, {'|', ' ', ' ', '\\', '|'}, {'|', ' ', ' ', ' ', '|'} };
char O[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'} };
char P[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '} };
char Q[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '\\', '\\'} };
char R[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'}, {'|', ' ', ' ', '\\', ' '}, {'|', ' ', ' ', ' ', '\\'} };
char S[5][5] = { {' ', '_', '_', '_', '_'}, {'|', ' ', ' ', ' ', ' '}, {'|', '_', '_', '_', ' '}, {' ', ' ', ' ', ' ', '|'}, {'_', '_', '_', '_', '|'} };
char T[5][5] = { {'_', '_', '_', '_', '_'}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', '|', ' ', ' '} };
char U[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'} };
char V[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {' ', '\\', ' ', '/', ' '}, {' ', ' ', 'V', ' ', ' '} };
char W[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', '^', ' ', '|'}, {' ', 'V', ' ', 'V', ' '} };
char X[5][5] = { {'\\', ' ', ' ', ' ', '/'}, {' ', '\\', ' ', '/', ' '}, {' ', ' ', 'X', ' ', ' '}, {' ', '/', ' ', '\\', ' '}, {'/', ' ', ' ', ' ', '\\'} };
char Y[5][5] = { {' ', ' ', ' ', ' ', ' '}, {'\\', ' ', ' ', ' ', '/'}, {' ', '\\', ' ', '/', ' '}, {' ', ' ', 'V', ' ', ' '}, {' ', ' ', '|', ' ', ' '} };
char Z[5][5] = { {'_', '_', '_', '_', ' '}, {' ', ' ', ' ', '/', ' '}, {' ', ' ', '/', ' ', ' '}, {' ', '/', ' ', ' ', ' '}, {'/', '_', '_', '_', '_'} };

int main(int argc, char *argv[]){

    for(int i = 1, imax = argc; i < imax; i++){
        for(int j = 0; j < strlen(argv[i]); j++){
            printf("%c", argv[i][j]);
        }
        printf(" ");
    }
    printf("\n");

    //argv = phrase, argv[0] = 1er mot, argv[1][1] = premiere lettre du premier mot
    for(int ligne = 0, lignemax = 5; ligne < lignemax; ligne++){
        for(int i = 1, imax = argc; i < imax; i++){ //nombre de mot, i = strlen(phrase)
            for(int j = 0, jmax = strlen(argv[i]); j < jmax; j++){ //nombre de lettre, j = strlen(mot)
                char temp = argv[i][j];
                switch(temp){
                    case 'A': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", A[ligne][colonne]); break;
                    case 'B': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", B[ligne][colonne]); break;
                    case 'C': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", C[ligne][colonne]); break;
                    case 'D': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", D[ligne][colonne]); break;
                    case 'E': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", E[ligne][colonne]); break;
                    case 'F': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", F[ligne][colonne]); break;
                    case 'G': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", G[ligne][colonne]); break;
                    case 'H': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", H[ligne][colonne]); break;
                    case 'J': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", I[ligne][colonne]); break;
                    case 'I': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", J[ligne][colonne]); break;
                    case 'K': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", K[ligne][colonne]); break;
                    case 'L': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", L[ligne][colonne]); break;
                    case 'M': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", M[ligne][colonne]); break;
                    case 'N': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", N[ligne][colonne]); break;
                    case 'O': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", O[ligne][colonne]); break;
                    case 'P': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", P[ligne][colonne]); break;
                    case 'Q': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Q[ligne][colonne]); break;
                    case 'R': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", R[ligne][colonne]); break;
                    case 'S': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", S[ligne][colonne]); break;
                    case 'T': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", T[ligne][colonne]); break;
                    case 'U': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", U[ligne][colonne]); break;
                    case 'V': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", V[ligne][colonne]); break;
                    case 'W': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", W[ligne][colonne]); break;
                    case 'X': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", X[ligne][colonne]); break;
                    case 'Y': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Y[ligne][colonne]); break;
                    case 'Z': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Z[ligne][colonne]); break;
                    case ' ': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf(" "); break;
                }
                printf(" ");
            }
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}