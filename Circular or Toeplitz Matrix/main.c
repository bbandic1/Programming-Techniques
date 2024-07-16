#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define EPSILON 0.0001

int main() {
  double matrix[100][100];
  int m, n,i,j,brj1=0,brj2=0,brj_el=0;

  do {

    printf("Unesite M i N: ");
    scanf("%d %d", &m, &n);

    if (m < 1 || m > 100 || n < 1 || n > 100)
      printf("Pogresan unos!\n");
  } while (m < 1 || m > 100 || n < 1 || n > 100);

  printf("Unesite elemente matrice: ");

  for (i = 0; i < m; i++) 
  {
    for (j = 0; j < n; j++) 
    {
      scanf("%lf", &matrix[i][j]);
    }
  }

  for (i=0; i<m-1; i++) 
  {
    for (j=0; j<n-1; j++) 
    {
      if (fabs(matrix[i][j] - matrix[i + 1][j + 1]) < EPSILON)
        brj1++;
    }
  }

  for (i=0; i<m; i++) 
  {
    for (j=0; j<n; j++) 
    {
      if (fabs(matrix[i][j] - matrix[i + 1][j + 1]) < EPSILON && fabs(matrix[i][n - 1] - matrix[i + 1][0]) < EPSILON)
        brj2++;
    }
  }

  brj_el = (m-1)*(n-1);

  if (m!=1 && n==1)
    printf("Matrica je Teplicova");

  else if (brj_el==brj2)
    printf("Matrica je cirkularna");

  else if (m==1 && n!=1)
    printf("Matrica je cirkularna");

  else if (brj_el==brj1)
    printf("Matrica je Teplicova");

  else
    printf("Matrica nije ni cirkularna ni Teplicova");

  return 0;
}
