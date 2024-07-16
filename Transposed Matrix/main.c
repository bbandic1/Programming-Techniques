#include <stdio.h>

int main() {
  int mat[100][100], V, S, i, j, nesto;
  do {
    printf("Unesite visinu i sirinu matrice: ");
    scanf("%d %d", &V, &S);
    if (V < 1 || V > 100 || S < 1 || S > 100)
      printf("Dimenzije matrice nisu ispravne!\n");
  } while (V < 1 || V > 100 || S < 1 || S > 100);
  printf("Unesite clanove matrice: ");
  for (i = 0; i < V; i++) {
    for (j = 0; j < S; j++) {
      scanf("%d ", &mat[i][j]);
    }
  }
  if(S>V)
  {
  for (i = 0; i < S; i++) {
    for (j = 0; j < V; j++) {
      if (i > j) {
        nesto = mat[i][j];
        mat[i][j] = mat[j][i];
        mat[j][i] = nesto;
      }
    }
  }
  }
  if(V>=S)
  {
  for (i = 0; i < V; i++) {
    for (j = 0; j < S; j++) {
      if (i > j) {
        nesto = mat[i][j];
        mat[i][j] = mat[j][i];
        mat[j][i] = nesto;
      }
    }
  }
  }
  

  printf("Transponovana matrica glasi:\n");
  for (i = 0; i < S; i++) {
    for (j = 0; j < V; j++) {
      printf("%5d", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
