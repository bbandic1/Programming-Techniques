#include <stdio.h>

int main() {
  int n, i, niz[100], j, max, brojac = 0, kopija[100], rastuci = 1;
  do {
    printf("Unesite N: ");
    scanf("%d", &n);
  } while (n > 100 || n < 1);

  for (i = 0; i < n; i++) {
    scanf("%d", &niz[i]);
  }
  max = niz[0];
  for (i = 1; i < n; i++) {
    if (max < niz[i]) {
      max = niz[i];
    }
  }
  for (i = 0; i <= max*2; i++) {
    for (j = 0; j < n; j++) {
      kopija[j] = niz[j] ^ i;
    }
    rastuci = 1;
    for (j = 0; j < n - 1; j++) {
      if (kopija[j] > kopija[j + 1])
        rastuci = 0;
    }
    if (rastuci == 1) {
      break;
    }
  }
  if (rastuci == 1) {
    printf("X=%d", i);
  } else {
    printf("X=-1");
  }
  return 0;
}
