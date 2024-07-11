#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

template <typename tip>
bool Kriterij (tip a, tip b)
{
    decltype(a.at(0)+b.at(0)) suma{};
    decltype(a.at(0)+b.at(0)) nsuma{};
    for(int i=0;i<a.size();i++)
    {
        suma=suma+a.at(i);
    }
    for(int i=0;i<b.size();i++)
    {
        nsuma=nsuma+b.at(i);
    }
    return suma>nsuma;
}
template <typename tip>
void SortirajPoSumiRedova(std::vector<std::vector<tip>> &v) {
  int uslov=0;
  for (auto i=v.begin();i<v.end();i++)
  uslov++;
  if(uslov==0)
  {}
  else
  {
  std::sort(v.begin(), v.end(), Kriterij<decltype(v.at(0))>);
  }
  }

int main() {
  std::vector<std::vector<int>> v(1000000);
  std::cout
      << "Unesi elemente (* za kraj reda, * na pocetku reda za kraj unosa): ";
  std::string broj;
  bool provjera = false;
  int i, j;
  for (i = 0;; i++) {
    for (j = 0;; j++) {
      std::cin >> broj;
      if (broj == "*" && j == 0) {
        provjera = true;
        break;
      } else if (broj == "*")
        break;
      else {
        v.at(i).push_back(stoi(broj));
      }
    }
    v.at(i).resize(j);
    if (provjera == true)
      break;
  }
  v.resize(i);
  SortirajPoSumiRedova(v);
  std::cout << "Matrica nakon sortiranja: ";
  int b = 0;
  int a = 0;
  for (auto i = v.begin(); i < v.end(); i++) {
    for (auto j = v[a].begin(); j < v[a].end(); j++) {
      std::cout << v.at(a).at(b) << " ";
      b++;
    }
    std::cout << "\n";
    a++;
    b = 0;
  }
  return 0;
}
