#include <stdio.h>

struct Datum {
  int dan, mjesec, godina;
};
struct Radnik {
  char ime_prezime[30];
  struct Datum datum_rodjenja;
  int plata[12];
};
int izdvoji_radnike(struct Radnik *r, int broj) {
  int i = 0;
  int j = 0;
  int broj_radnika_izdvojenih = 0;
  double prs_plata = 0;
  int godine = 0, mjesec = 0, dan = 0;
  int z = 0;
  int da = 0;
  for (i = 0; i < broj; i++) {
    for (j = 0; j < 12; j++)
      prs_plata = prs_plata + r[i].plata[j];

    prs_plata = prs_plata / 12;
    mjesec = 2 - r[i].datum_rodjenja.mjesec;
    dan = 16 - r[i].datum_rodjenja.dan;
    godine = 2022 - r[i].datum_rodjenja.godina;
    if (mjesec <= 0 || (mjesec == 1 && dan < 0)) {
      if(mjesec==0 && dan>0)
      {

      }
      else
      godine = godine - 1;
    }
    if (mjesec > 12 || (mjesec == 12 && dan > 31)) {
      godine = godine + 1;
    }

    while ((r[i].ime_prezime[z] >= 'a' && r[i].ime_prezime[z] <= 'z') ||
           (r[i].ime_prezime[z] >= 'A' && r[i].ime_prezime[z] <= 'Z'))
      z++;
    while (r[i].ime_prezime[z] == ' ')
      z++;
    if (r[i].ime_prezime[z] == 'R' || r[i].ime_prezime[z] == 'r') {
      da = 1;
    }

    if ((godine >= 30 && godine <= 40) && (da == 1) &&
        (prs_plata >= 1000 && prs_plata <= 2000)) {
      broj_radnika_izdvojenih++;
    }

    da = 0;
    prs_plata = 0;
    z = 0;
  }
  return broj_radnika_izdvojenih;
}
int main() {
  struct Radnik niz[] = {{"Pero Peric",
                          {1, 5, 1985},
                          {1200, 1300, 1300, 1200, 1300, 1200, 1100, 1150, 1200,
                           1200, 1250, 1200}},
                         {"Samir Ribic",
                          {1, 5, 1985},
                          {1200, 1300, 1300, 1200, 1300, 1200, 1100, 1150, 1200,
                           1200, 1250, 1200}},
                         /* Nema razmaka, program ne smije da se krahira */
                         {"RatkoRatkovic",
                          {17, 2, 1981},
                          {1200, 1300, 1300, 1200, 1300, 1200, 1100, 1150, 1200,
                           1200, 1250, 1200}},
                         {"Selma Rodic",
                          {17, 2, 1992},
                          {1200, 1300, 1300, 1200, 1300, 1200, 1100, 1150, 1200,
                           1200, 1250, 1200}},
                         {"Rahman Rahmanovic",
                          {1, 5, 1988},
                          {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
                           1000, 1000, 1000}},
                         {"Ramo Ramic",
                          {1, 5, 1991},
                          {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000,
                           2000, 2000, 2000}}};
  printf("%d ", izdvoji_radnike(niz, 6));
  /* Prazan niz */
  struct Radnik niz2[] = {{"Pero Peric",
                           {1, 5, 1985},
                           {1200, 1300, 1300, 1200, 1300, 1200, 1100, 1150,
                            1200, 1200, 1250, 1200}}};
  printf("%d", izdvoji_radnike(niz2, 0));
}
