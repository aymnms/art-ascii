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

// Fonction pour imprimer une ligne d'une lettre donnée
void print_letter_line(char letter, int line) {
    switch (letter) {
        case 'a': printf("%s", a[line]); break;
        case 'b': printf("%s", b[line]); break;
        case 'c': printf("%s", c[line]); break;
        case 'd': printf("%s", d[line]); break;
        case 'e': printf("%s", e[line]); break;
        case 'f': printf("%s", f[line]); break;
        case 'g': printf("%s", g[line]); break;
        case 'h': printf("%s", h[line]); break;
        case 'i': printf("%s", i[line]); break;
        case 'j': printf("%s", j[line]); break;
        case 'k': printf("%s", k[line]); break;
        case 'l': printf("%s", l[line]); break;
        case 'm': printf("%s", m[line]); break;
        case 'n': printf("%s", n[line]); break;
        case 'o': printf("%s", o[line]); break;
        case 'p': printf("%s", p[line]); break;
        case 'q': printf("%s", q[line]); break;
        case 'r': printf("%s", r[line]); break;
        case 's': printf("%s", s[line]); break;
        case 't': printf("%s", t[line]); break;
        case 'u': printf("%s", u[line]); break;
        case 'v': printf("%s", v[line]); break;
        case 'w': printf("%s", w[line]); break;
        case 'x': printf("%s", x[line]); break;
        case 'y': printf("%s", y[line]); break;
        case 'z': printf("%s", z[line]); break;
        default: break;
    }
}

int main(int argc, char *argv[]){

    for (int ligne = 0; ligne < LIGNEMAX; ligne++) {
        for (int mot = 1; mot < argc; mot++) { // Ignorer argv[0] qui est le nom du programme
            int lettremax = strlen(argv[mot]);
            for (int lettre = 0; lettre < lettremax; lettre++) {
                print_letter_line(argv[mot][lettre], ligne);
            }
            printf("   "); // Espacement entre les mots
        }
        printf("\n");
    }

    return 0;
}