#include <stdio.h>
void popuni_matricu(double (*mat)[100], int M, int N, double X) {
  mat[M][N] = X;
  int i = 0, j = 0;
  double broj = X;
  for (i = N - 1; i >= 0; i--) {
    broj = broj / 2;
    mat[M][i] = broj;
  }
  broj = X;
  for (i = N + 1; i < 100; i++) {
    broj = broj * 2;
    mat[M][i] = broj;
  }
  for (i = M; i < 99; i++) {
    for (j = 0; j < 99; j++) {
      mat[i + 1][j] = mat[i][j] + 1;
    }
  }
  for (i = M; i > 0; i--) {
    for (j = 0; j < 99; j++) {
      mat[i - 1][j] = mat[i][j] - 1;
    }
  }
}
int main() {
  /* AT2: Najmanja smislena matrica */
  double mat[100][100];
  popuni_matricu(mat, 1, 1, 5);
  int i, j;
  printf("Matrica glasi:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%g ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
