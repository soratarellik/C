#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return pgcd(b, a % b);
}

int ppcm(int a, int b) { return (a * b) / pgcd(a, b); }

int main(int argc, char *argv[]) {
  int i;
  int premier_ppcm;
  int boucle_ppcm;
  if (argc < 2) {
    printf("Pas assez d'arguments\n");
    return 0;
  }
  premier_ppcm = ppcm(atoi(argv[1]), atoi(argv[2]));
  for (i = 3; i < argc; i++) {
    boucle_ppcm = ppcm(premier_ppcm, atoi(argv[i]));
    premier_ppcm = boucle_ppcm;
  }
  printf("%d\n", boucle_ppcm);
  return 0;
}