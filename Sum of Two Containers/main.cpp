#include <array>
#include <cmath>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <string>
#include <type_traits>
#include <vector>

template <typename kontejner1, typename kontejner2>
auto ZbirKontejnera(kontejner1 kont1, kontejner2 kont2)
    -> std::vector<decltype(kont1[0] + kont2[0])> {
  std::vector<decltype(kont1[0] + kont2[0])> kont(0);
  int b1 = 0, b2 = 0;
  auto i = kont1.begin();
  auto j = kont2.begin();
  for (auto i = kont1.begin(); i < kont1.end(); i++) {
    b1++;
  }
  for (auto j = kont2.begin(); j < kont2.end(); j++) {
    b2++;
  }
  if (b1 == 0 && b2 == 0)
    return kont;
  if (b1 > b2) {
    for (i = kont1.begin(), j = kont2.begin(); i < kont1.end(); i++, j++) {
      if (j >= kont2.end())
        kont.push_back(*i);
      else
        kont.push_back(*i + *j);
    }
  } else {
    int z = 0;
    for (i = kont1.begin(), j = kont2.begin(); z < b2; i++, j++) {
      if (i >= kont1.end()) {
        kont.push_back(*j);
        z++;
      } else {
        kont.push_back(*i + *j);
        z++;
      }
    }
  }
  return kont;
}

int main() {

    std::vector<int> v1, v2;
    std::cout << "Duzina prvog kontejnera: ";
    int b1;
    std::cin >> b1;
    std::cout << "Elementi prvog kontejnera: ";
    for (int i = 0; i < b1; i++) {
      int broj;
      std::cin >> broj;
      v1.push_back(broj);
    }
    std::cout << "Duzina drugog kontejnera: ";
    int b2;
    std::cin >> b2;
    std::cout << "Elementi drugog kontejnera: ";
    for (int i = 0; i < b2; i++) {
      int broj;
      std::cin >> broj;
      v2.push_back(broj);
    }
    auto v = ZbirKontejnera(v1, v2);

    std::cout << "Zbir kontejnera: ";
    for (auto x : v)
      std::cout << x << " ";

  return 0;
}
