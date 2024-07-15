#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/big.h"

// Faire plus de caractère (obj tt ascii)
// Faire plus de police

// Fonction pour imprimer une ligne d'une lettre donnée
void print_letter_line(char letter, int line) {
    if (letter >= 'a' && letter <= 'z') {
        int index = letter - 'a';
        int character_width = big_alphabet_widths[index];
        char (*character)[character_width] = (char (*)[character_width])big_alphabet[index];
        printf("%s", character[line]);
    }
}

int main(int argc, char *argv[]){

    for (int line = 0; line < CHAR_HEIGHT; line++) { // affiche ligne par ligne
        for (int word = 1; word < argc; word++) { // découpe par mot - ignorer argv[0] = nom du programme
            int lenword = strlen(argv[word]); // nombre de lettre dans le mot
            for (int letter = 0; letter < lenword; letter++) { // découpe par lettre à afficher
                print_letter_line(argv[word][letter], line); // affiche une ligne d'une lettre
            }
            printf("   "); // Espacement entre les mots
        }
        printf("\n");
    }

    return 0;
}