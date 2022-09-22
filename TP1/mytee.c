#include <stdio.h>

int main(int argc, char * argv[]){
    int caractere;
    FILE * fichier;
    fichier = NULL;
    fichier = fopen(argv[1],"w");
    caractere = 0;

    if(fichier != NULL){
        while (caractere != EOF && caractere != 10)
        {
            caractere = getchar();
            putchar(caractere);
            fputc(caractere, fichier);
        }
        fclose(fichier);
    }
    return 0;
}