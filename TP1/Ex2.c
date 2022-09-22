#include <stdio.h>
#include <stdlib.h>

int pascal(int nBut, int pBut) {
  int *tab;
  unsigned int n, i;

  tab = (int *)malloc((nBut + 1) * sizeof(int));
  if (tab == NULL) {
    fprintf(stderr, "Pas assez de place\n");
    exit(0);
  }
  tab[0] = 1;

  for (n = 1; n <= nBut; n++) {
    tab[n] = 1;

    for (i = n - 1; i > 0; i--)
      tab[i] = tab[i - 1] + tab[i];
  }

  int result = tab[pBut];
  free(tab);
  return result;
}

int binomialCoeff(int n, int k){
  if (k > n)
    return 0;
  if (k == 0 || k == n)
    return 1;
  return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}

int main(void) {
  int x = pascal(300,25);
  //int y = binomialCoeff(300,25);
  return 0;
}