#include <cmath>
#include <iostream>
#include <vector>

typedef std::vector<int> vektor;
typedef std::string string;

bool string_unos(string s) {
  int brojac = 0;
  if (s.at(0) == '-')
    brojac = 1;
  bool provjera = true;
  for (int i = brojac; i < s.length(); i++) {
    if (!(s.at(i) >= '1' && s.at(i) <= '9')) {
      provjera = false;
    }
  }
  return provjera;
}

bool provjera(vektor v1, vektor v2, int n) {
  bool provjera=true;
  for (int i = 0; i < v1.size(); i++) {
    if (v1.at(i) != v2.at((v2.size() + n + i) % v2.size())) {
        provjera=false;;
    }
  }
  return provjera;
}

int CiklickaPermutacija(vektor v1, vektor v2) {
  int rez=-1;
  for (int i = 0; i < v2.size(); i++) {
    if (provjera(v1, v2, i) == true) {
      rez = ((v2.size() - i) % v2.size());
    }
  }
  return rez;
}

int main() {
  vektor v1, v2;
  std::cout << "Prva sekvenca: ";
  string s;
  std::cin >> s;
  while (string_unos(s) == true) {
    v1.push_back(stoi(s));
    std::cin >> s;
  }
  std::cin.clear();
  std::cin.ignore(10000, '\n');
  std::cout << "Druga sekvenca: ";
  std::cin >> s;
  while (string_unos(s) == true) {
    v2.push_back(stoi(s));
    std::cin >> s;
  }
  std::cin.clear();
  std::cin.ignore(10000, '\n');
  int rez = CiklickaPermutacija(v1, v2);
  if (rez == -1) {
    std::cout << "Druga sekvenca nije ciklicka permutacija prve.";
  } else {
    std::cout << "Druga sekvenca je ciklicka permutacija prve s pomakom " << rez
              << ".";
  }
  return 0;
}
