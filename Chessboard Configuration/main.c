#include <stdio.h>

enum figure {
    PIJUN, LOVAC, SKAKAC, TOP, KRALJICA, KRALJ, PRAZNO
};

enum colour {
    CRNA, BIJELA, PRAZNA
};

struct Figura {
    enum figure figura;
    enum colour boja;
};

int provjeri_plocu(struct Figura ploca[8][8]) {
    int i, j;
    int brojac[7][3] ={{0}};
    
    const struct Figura poc_ploca[8][8] = {
        { {TOP, CRNA}, {SKAKAC, CRNA}, {LOVAC, CRNA}, {KRALJICA, CRNA}, {KRALJ, CRNA}, {LOVAC, CRNA}, {SKAKAC, CRNA}, {TOP, CRNA} },
        { {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA}, {PIJUN, CRNA} },
        { {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA} },
        { {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA} },
        { {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA} },
        { {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA}, {PRAZNO, PRAZNA} },
        { {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA}, {PIJUN, BIJELA} },
        { {TOP, BIJELA}, {SKAKAC, BIJELA}, {LOVAC, BIJELA}, {KRALJICA, BIJELA}, {KRALJ, BIJELA}, {LOVAC, BIJELA}, {SKAKAC, BIJELA}, {TOP, BIJELA} }
    };

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            brojac[ploca[i][j].figura][ploca[i][j].boja]++;
        }
    }

    if (brojac[PIJUN][CRNA] > 8 || brojac[PIJUN][BIJELA] > 8) {
        return 0;
    }

    if (brojac[LOVAC][CRNA] > 2 || brojac[LOVAC][BIJELA] > 2) {
        return 0;
    }

    if (brojac[SKAKAC][CRNA] > 2 || brojac[SKAKAC][BIJELA] > 2) {
        return 0;
    }

    if (brojac[TOP][CRNA] > 2 || brojac[TOP][BIJELA] > 2) {
        return 0;
    }

    if (brojac[KRALJICA][CRNA] > 1 || brojac[KRALJICA][BIJELA] > 1) {
        return 0;
    }

    if ((brojac[KRALJ][CRNA] > 1 || brojac[KRALJ][CRNA] == 0) || (brojac[KRALJ][BIJELA] > 1 || brojac[KRALJ][BIJELA] == 0)) {
        return 0;
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (ploca[i][j].figura != poc_ploca[i][j].figura || ploca[i][j].boja != poc_ploca[i][j].boja) {
                return 1;
            }
        }
    }

    return 2;
}

int main() {
	printf("Ispit 1, Zadatak 3");
	return 0;
}
