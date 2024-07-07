#include <stdio.h>

int main() {
    int visina, sirina, X, Y, i, j, otklon = 1, brojac;
    int matrica[100][100] = {{0}};

	do {
        printf("Unesite sirinu i visinu matrice: ");
        scanf("%d %d", &sirina, &visina);
    } while (visina < 0 || visina > 100 || sirina < 0 || sirina > 100);

    printf("Unesite X i Y: ");
    scanf("%d %d", &X, &Y);

    i = visina / 2;
    j = sirina / 2;

    do {
        for (brojac = 0; brojac <= otklon; brojac++, j--) {
            if (i >= 0 && j >= 0 && i < visina && j < sirina) {
                matrica[i][j] = X;
            }
        }

        for (brojac = 0; brojac <= otklon; brojac++, i++) {
            if (i >= 0 && j >= 0 && i < visina && j < sirina) {
                matrica[i][j] = X;
            }
        }

        otklon += 2;

        for (brojac = 0; brojac <= otklon; brojac++, j++) {
            if (i >= 0 && j >= 0 && i < visina && j < sirina) {
                matrica[i][j] = X;
            }
        }

        for (brojac = 0; brojac <= otklon; brojac++, i--) {
            if (i >= 0 && j >= 0 && i < visina && j < sirina) {
                matrica[i][j] = X;
            }
        }

        otklon += 2;
    } while (otklon <= visina || otklon <= sirina);

    for (i = 0; i < visina; i++) {
        for (j = 0; j < sirina; j++) {
            if (matrica[i][j] == 0) {
                matrica[i][j] = Y;
            }
        }
    }

    for (i = 0; i < visina; i++) {
        for (j = 0; j < sirina; j++) {
            printf("%5d", matrica[i][j]);
        }

        printf("\n");
    }

	return 0;
}
