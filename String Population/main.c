#include <stdio.h>

void popuni_recenicu(char *string, char *rijeci[], int duzina) {
  int i = 0, brojac = 0, max = 0, brojac2 = 0, maxbr = 0;
  char *c = string;
  int brojac3 = 0;
  char *k = rijeci[0];
  do {
    c++;
    brojac3++;
  } while (*c != '\0');
  c = string;
  do {
    brojac = 0;
    while (*c == ' ') {
      brojac++;
      c++;
      brojac2++;
    }
    if (brojac > 2) {
      max = brojac;
      maxbr = brojac2;
      break;
    }
    c++;
    brojac2++;
  } while (*c != '\0');
  if (brojac3 == maxbr) {
    max++;
  }
  if (maxbr==max) {
      max++;
  }

  brojac = 0;
  int temp = 0;
  for (i = 0; i < duzina; i++) {
    brojac = 0;
    k = rijeci[i];
    while (*k != '\0') {
      // printf("%c", *k);
      k++;
      brojac++;
    }
    // printf("%d %d\n", max-2, brojac);
    if (brojac == max - 2) {
      temp = i;
    }
  }
  // printf("%d %d %d\n", temp, maxbr, max);
  c = string;
  brojac = 0;
  k = rijeci[temp];
  do {
    if (brojac == maxbr - max + 1) {
      while (max - 2 > 0) {
        max--;
        *c = *k;
        c++;
        k++;
      }
    }
    c++;
    brojac++;
  } while (*c != '\0');
}

int main() {
  /* AT3: Prva rijec u stringu */
char recenica[] = "     u programiranje";
char* rijeci[5] = { "Pocetak", "Uvod", "C++", "Osnove", "Start"};
popuni_recenicu(recenica, rijeci, 5);
printf("'%s'", recenica);
  return 0;
}

