#include <cmath>
#include <iostream>
#include <vector>

bool DaLiJeProst(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void Goldbach(int n, int &p, int &q) {
  if (n <= 2) {
    throw std::logic_error("Rastava ne postoji");
  }

  std::vector<int> prost(0);
  int i = 0;
  int brojac=0;
  for (i = 0; i < n; i++) {
    if (DaLiJeProst(i) == true) {
      prost.push_back(i);
      brojac++;
    }
  }
  i = 0;
  bool provjera = true;
  while (i<brojac) {
    int razlika = n - prost[i];
    if (DaLiJeProst(razlika) == true) {
      provjera = false;
      p = prost[i];
      q = razlika;
      break;
    }
    i++;
  }
  if (provjera == true)
    throw std::logic_error("Rastava ne postoji");
}
int main() {
  bool provjera = false;
  std::cout << "Unesi broj: ";
  int n;
  std::cin >> n;
  int p = 0, q = 0;
  try {
    Goldbach(n, p, q);
  } catch (std::logic_error) {
    provjera = true;
    std::cout << n << " nije zbir dva prosta broja!";
  }
  if (provjera == false)
    std::cout << n << " je zbir prostih brojeva " << p << " i " << q
              << std::endl;
  return 0;
}
