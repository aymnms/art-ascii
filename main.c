#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char A[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', '_', '_', '_', '|'}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'} };
char B[5][5] = { {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '\\'}, {'|', '_', '_', '_', '/'}, {'|', ' ', ' ', ' ', '\\'}, {'|', '_', '_', '_', '/'} };
char C[5][5] = { {' ', '_', '_', '_', '_'}, {'/', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'|', ' ', ' ', ' ', ' '}, {'\\', '_', '_', '_', '_'} };

int main(){
    char rep[5];
    int length;

    printf("Hola, qu'est ce que tu veux écrire ? ");
    scanf("%s", &rep);
    length = strlen(rep);

    for(int i = 0, imax = 5; i < imax; i++){
        for(int lettre = 0; lettre < length; lettre++){
            char temp = rep[lettre];
            if (temp == 'A') {
                for(int j = 0, jmax = 5; j < jmax; j++){
                    printf("%c", A[i][j]);   
                } 
            }else if (temp == 'B') {
                for(int j = 0, jmax = 5; j < jmax; j++){
                    printf("%c", B[i][j]);   
                }
            }else if (temp == 'C') {
                for(int j = 0, jmax = 5; j < jmax; j++){
                    printf("%c", C[i][j]);   
                }
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}