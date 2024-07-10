//submit
// TP 2021/2022: Zadaća 1, Zadatak 4
#include <array>
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

std::string uvecaj(std::string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) >= 'a' && s.at(i) <= 'z')
      s.at(i) = s.at(i) - ('a' - 'A');
  }
  return s;
}
std::string uzmirijec(std::string s, int i, int brojac) {
  int a = 0;
  std::string rijec;
  char slovo;
  for (int b = i - brojac; b < i; b++, a++) {
    slovo = s.at(b);
    rijec.push_back(slovo);
  }
  return rijec;
}

std::array<std::vector<std::string>, 100>
RazvrstajRijeciPoDuzini(std::string s) {
  std::array<std::vector<std::string>, 100> ar;
  for (int i = 0; i < s.length(); i++) {
    int brojac = 0;
    if (!((s.at(i) >= 'a' && s.at(i) <= 'z') ||
           (s.at(i) >= 'A' && s.at(i) <= 'Z') ||
           (s.at(i) >= '0' && s.at(i) <= '9'))) {
      while (!((s.at(i) >= 'a' && s.at(i) <= 'z') ||
           (s.at(i) >= 'A' && s.at(i) <= 'Z') ||
           (s.at(i) >= '0' && s.at(i) <= '9')))
        i++;
    }
    while ((s.at(i) >= 'a' && s.at(i) <= 'z') ||
           (s.at(i) >= 'A' && s.at(i) <= 'Z') ||
           (s.at(i) >= '0' && s.at(i) <= '9')) {
      if (brojac > 99) {
        throw std::range_error("Predugacka rijec!");
      }
      brojac++;
      i++;
    }
    if (brojac > 0) {
      std::string rijec;
      rijec = uzmirijec(s, i, brojac);
      ar.at(brojac).push_back(uvecaj(rijec));
    }
    brojac = 0;
    if (!((s.at(i) >= 'a' && s.at(i) <= 'z') ||
           (s.at(i) >= 'A' && s.at(i) <= 'Z') ||
           (s.at(i) >= '0' && s.at(i) <= '9'))) {
      while (!((s.at(i) >= 'a' && s.at(i) <= 'z') ||
           (s.at(i) >= 'A' && s.at(i) <= 'Z') ||
           (s.at(i) >= '0' && s.at(i) <= '9'))) {
        if (i == s.length() - 1)
          break;
        i++;
      }
    }
    if (i == s.length() - 1)
      break;
    i = i - 1;
  }
  return ar;
}

int main() {

  std::string s;
  std::cout << "Unesite recenicu: ";
  std::getline(std::cin, s);
  std::array<std::vector<std::string>, 100> ar;
  try{
    ar = RazvrstajRijeciPoDuzini(s);
  }
  catch(std::range_error)
  {
    std::cout << "Greska: Recenica sadrzi predugacku rijec!";
    return 0;
  }
  for (int i = 1; i < 100; i++) {
    if (ar.at(i).size() == 0) {
      continue;
    }
    std::cout << std::endl << "Duzina " << i << ": ";
    for (std::string a : ar.at(i)) {
      std::cout << a << " ";
    }
  }
  return 0;
}
