#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "headers/basic.h"
#include "headers/big.h"

// Changer police,
// Ne pas mettre que 5/5,
// Mettre en place pls police,

#define LIGNEMAX 8
#define COLONNEMAX 8


int main(int argc, char *argv[]){

    for(int i = 0, imax = argc; i < imax; i++){
        for(int j = 0; j < strlen(argv[i]); j++){
            printf("%c", argv[i][j]);
        }
        printf(" ");
    }
    printf("\n");

    //argv = phrase, argv[0] = 1er mot, argv[1][1] = premiere lettre du premier mot
    for(int ligne = 0; ligne < LIGNEMAX; ligne++){
        for(int mot = 1, motmax = argc; mot < motmax; mot++){ //numero du mot, strlen(phrase)
            for(int lettre = 0, lettremax = strlen(argv[mot]); lettre < lettremax; lettre++){ //numero de la lettre, strlen(mot)
                switch(argv[mot][lettre]){
                    case 'a': for(int colonne = 0, colonnemax = strlen(a[ligne]); colonne < colonnemax; colonne++) printf("%c", a[ligne][colonne]); break;
                    case 'b': for(int colonne = 0, colonnemax = strlen(b[ligne]); colonne < colonnemax; colonne++) printf("%c", b[ligne][colonne]); break;
                    case 'c': for(int colonne = 0, colonnemax = strlen(c[ligne]); colonne < colonnemax; colonne++) printf("%c", c[ligne][colonne]); break;
                    case 'd': for(int colonne = 0, colonnemax = strlen(d[ligne]); colonne < colonnemax; colonne++) printf("%c", d[ligne][colonne]); break;
                    case 'e': for(int colonne = 0, colonnemax = strlen(e[ligne]); colonne < colonnemax; colonne++) printf("%c", e[ligne][colonne]); break;
                    case 'f': for(int colonne = 0, colonnemax = strlen(f[ligne]); colonne < colonnemax; colonne++) printf("%c", f[ligne][colonne]); break;
                    case 'g': for(int colonne = 0, colonnemax = strlen(g[ligne]); colonne < colonnemax; colonne++) printf("%c", g[ligne][colonne]); break;
                    case 'h': for(int colonne = 0, colonnemax = strlen(h[ligne]); colonne < colonnemax; colonne++) printf("%c", h[ligne][colonne]); break;
                    case 'i': for(int colonne = 0, colonnemax = strlen(i[ligne]); colonne < colonnemax; colonne++) printf("%c", i[ligne][colonne]); break;
                    case 'j': for(int colonne = 0, colonnemax = strlen(j[ligne]); colonne < colonnemax; colonne++) printf("%c", j[ligne][colonne]); break;
                    case 'k': for(int colonne = 0, colonnemax = strlen(k[ligne]); colonne < colonnemax; colonne++) printf("%c", k[ligne][colonne]); break;
                    case 'l': for(int colonne = 0, colonnemax = strlen(l[ligne]); colonne < colonnemax; colonne++) printf("%c", l[ligne][colonne]); break;
                    case 'm': for(int colonne = 0, colonnemax = strlen(m[ligne]); colonne < colonnemax; colonne++) printf("%c", m[ligne][colonne]); break;
                    case 'n': for(int colonne = 0, colonnemax = strlen(n[ligne]); colonne < colonnemax; colonne++) printf("%c", n[ligne][colonne]); break;
                    case 'o': for(int colonne = 0, colonnemax = strlen(o[ligne]); colonne < colonnemax; colonne++) printf("%c", o[ligne][colonne]); break;
                    case 'p': for(int colonne = 0, colonnemax = strlen(p[ligne]); colonne < colonnemax; colonne++) printf("%c", p[ligne][colonne]); break;
                    case 'q': for(int colonne = 0, colonnemax = strlen(q[ligne]); colonne < colonnemax; colonne++) printf("%c", q[ligne][colonne]); break;
                    case 'r': for(int colonne = 0, colonnemax = strlen(r[ligne]); colonne < colonnemax; colonne++) printf("%c", r[ligne][colonne]); break;
                    case 's': for(int colonne = 0, colonnemax = strlen(s[ligne]); colonne < colonnemax; colonne++) printf("%c", s[ligne][colonne]); break;
                    case 't': for(int colonne = 0, colonnemax = strlen(t[ligne]); colonne < colonnemax; colonne++) printf("%c", t[ligne][colonne]); break;
                    case 'u': for(int colonne = 0, colonnemax = strlen(u[ligne]); colonne < colonnemax; colonne++) printf("%c", u[ligne][colonne]); break;
                    case 'v': for(int colonne = 0, colonnemax = strlen(v[ligne]); colonne < colonnemax; colonne++) printf("%c", v[ligne][colonne]); break;
                    case 'w': for(int colonne = 0, colonnemax = strlen(w[ligne]); colonne < colonnemax; colonne++) printf("%c", w[ligne][colonne]); break;
                    case 'x': for(int colonne = 0, colonnemax = strlen(x[ligne]); colonne < colonnemax; colonne++) printf("%c", x[ligne][colonne]); break;
                    case 'y': for(int colonne = 0, colonnemax = strlen(y[ligne]); colonne < colonnemax; colonne++) printf("%c", y[ligne][colonne]); break;
                    case 'z': for(int colonne = 0, colonnemax = strlen(z[ligne]); colonne < colonnemax; colonne++) printf("%c", z[ligne][colonne]); break;

                    // case 'A': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", A[ligne][colonne]); break;
                    // case 'B': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", B[ligne][colonne]); break;
                    // case 'C': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", C[ligne][colonne]); break;
                    // case 'D': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", D[ligne][colonne]); break;
                    // case 'E': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", E[ligne][colonne]); break;
                    // case 'F': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", F[ligne][colonne]); break;
                    // case 'G': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", G[ligne][colonne]); break;
                    // case 'H': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", H[ligne][colonne]); break;
                    // case 'J': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", I[ligne][colonne]); break;
                    // case 'I': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", J[ligne][colonne]); break;
                    // case 'K': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", K[ligne][colonne]); break;
                    // case 'L': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", L[ligne][colonne]); break;
                    // case 'M': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", M[ligne][colonne]); break;
                    // case 'N': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", N[ligne][colonne]); break;
                    // case 'O': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", O[ligne][colonne]); break;
                    // case 'P': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", P[ligne][colonne]); break;
                    // case 'Q': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Q[ligne][colonne]); break;
                    // case 'R': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", R[ligne][colonne]); break;
                    // case 'S': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", S[ligne][colonne]); break;
                    // case 'T': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", T[ligne][colonne]); break;
                    // case 'U': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", U[ligne][colonne]); break;
                    // case 'V': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", V[ligne][colonne]); break;
                    // case 'W': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", W[ligne][colonne]); break;
                    // case 'X': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", X[ligne][colonne]); break;
                    // case 'Y': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Y[ligne][colonne]); break;
                    // case 'Z': for(int colonne = 0, colonnemax = 5; colonne < colonnemax; colonne++) printf("%c", Z[ligne][colonne]); break;
                }
                // printf(" ");
            }
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}