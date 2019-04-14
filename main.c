#include <stdio.h>
#include <stdlib.h>

void printA(){
    printf(" ___\n");
    printf("|   |\n");
    printf("|___|\n");
    printf("|   |\n");
}

void printB(){
    printf(" ___\n");
    printf("|   \\\n");
    printf("|___/\n");
    printf("|   \\\n");
    printf("|___/\n");
}

void printC(){
    printf(" ____\n");
    printf("/\n");
    printf("|\n");
    printf("|\n");
    printf("\\____\n");
}

int main(){
    printA();
    printB();
    printC();
    return 0;
}