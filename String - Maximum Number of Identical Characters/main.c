#include <stdio.h>
#include <ctype.h>

void zadatak2(char *ulaz, char *izlaz) {
    char *p_ulaz = ulaz, *poc_rijec, *p_rijec, *p_proces, *max_rijec;
    int tren_ponavljanje, max_ponavljanje = 1, inicijaliziran = 0;;

    while (*p_ulaz != '\0') {
        if (isalpha(*p_ulaz)) {
            poc_rijec = p_ulaz;
            p_rijec = poc_rijec;

            while (isalpha(*p_rijec)) {
                p_proces = p_rijec;
                tren_ponavljanje = 0;

                while (isalpha(*p_proces)) {
                    if (toupper(*p_rijec) == toupper(*p_proces)) {
                        tren_ponavljanje++;
                    }

                    p_proces++;
                }

                if (tren_ponavljanje >= max_ponavljanje) {
                    max_rijec = poc_rijec;
                    max_ponavljanje = tren_ponavljanje;
                    inicijaliziran = 1;
                }

                p_rijec++;
            }

            p_ulaz = p_rijec;
        }

        if (*p_ulaz == '\0') {
            break;
        }

        p_ulaz++;
    }

    if (inicijaliziran) {
        while (isalpha(*max_rijec)) {
            *izlaz = *max_rijec;

            izlaz++;
            max_rijec++;
        }
    }

    *izlaz = '\0';
}

int main() {
	printf("Ispit 1, Zadatak 2");
	return 0;
}
