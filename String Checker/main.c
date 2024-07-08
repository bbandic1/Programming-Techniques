#include <stdio.h>

int ime_u_datoteci(const char *datoteka, const char* ime) {
    FILE *ulaz = fopen(datoteka, "r");

    if (ulaz == NULL) {
        printf("Datoteka ne postoji\n");
        return -1;
    }

    const char *p_ime = ime;
    char C;
    int otklon;

    while ((C = getc(ulaz)) != EOF) {
        p_ime = ime;
        otklon = ftell(ulaz);

        if (*p_ime == C) {
            while (*p_ime == C) {
                p_ime++;
                C = getc(ulaz);
            }

            if (*p_ime == '\0') {
                return 1;
            }
        }

        fseek(ulaz, otklon, SEEK_SET);
    }

    return 0;
}

int main() {
	printf("Ispit 1, Zadatak 4");
	return 0;
}