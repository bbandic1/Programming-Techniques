#include <array>
#include <cmath>
#include <iostream>
#include <vector>
typedef std::vector<std::vector<double>> matrica;
typedef std::array<matrica, 2> m_niz;

matrica MnozenjeMatrica(matrica m1, matrica m2) {
  int b1 = m1.size();
  int b2 = m2.at(0).size();

  if (b1 != b2) {
    throw std::domain_error("Matrice nisu saglasne za mnozenje");
  }

  for (int i = 0; i < m1.size(); i++)
    if (m1.at(0).size() != m1.at(i).size())
      throw std::domain_error("Matrice nisu saglasne za mnozenje");

  for (int i = 0; i < m2.size(); i++) {
    if (m2.at(0).size() != m2.at(i).size())
      throw std::domain_error("Matrince nisu saglasne za mnozenje");
  }
  matrica mnozenje(b1, std::vector<double>(b2));
  for (int i = 0; i < m1.size(); i++)
    for (int j = 0; j < m2.at(0).size(); j++)
      for (int z = 0; z < m1.at(0).size(); z++) {
        mnozenje.at(i).at(j) =
            mnozenje.at(i).at(j) + (m1.at(i).at(z) * m2.at(z).at(j));
      }
  return mnozenje;
}

m_niz DoolittleLU(matrica m) {
  int brel = m.size();
  m_niz trod_m;
  if (m.size() != m.at(0).size())
    throw std::domain_error("Neispravna matrica!");

  for (int i = 1; i < brel; i++) {
    if (m.at(0).size() != m.at(i).size())
      throw std::domain_error("Neispravna matrica!");
  }
  trod_m.at(0).resize(brel);
  for (int i = 0; i < brel; i++)
    trod_m.at(0).at(i).resize(brel);
  trod_m.at(1).resize(brel);
  for (int i = 0; i < brel; i++)
    trod_m.at(1).at(i).resize(brel);

  for (int i = 0; i < brel; i++) {
    for (int j = 0; j < brel; j++) {
      if (j == i)
        trod_m.at(0).at(i).at(j) = 1;
      else if (j < i) {
        double suma = 0;
        for (int x = 0; x < j; x++) {
          suma = suma + (trod_m.at(0).at(i).at(x) * trod_m.at(1).at(x).at(j));
        }
        if (fabs(trod_m.at(1).at(j).at(j)) < pow(10, -10))
          throw std::domain_error(
              "LU faktorizacija ne postoji, jer je matrica singularna!");
        trod_m.at(0).at(i).at(j) =
            (1 / trod_m.at(1).at(j).at(j)) * (m.at(i).at(j) - suma);
      }
    }

    for (int j = 0; j < brel; j++) {
      if (j >= i) {
        double suma = 0;
        for (int y = 0; y < i; y++) {
          suma = suma + trod_m.at(0).at(i).at(y) * trod_m.at(1).at(y).at(j);
        }
        trod_m.at(1).at(i).at(j) = m.at(i).at(j) - suma;
      }
    }
  }
  return trod_m;
}

bool ProvjeriFaktorizaciju(matrica m, m_niz trod_m) {
  for (int i = 0; i < m.size(); i++)
    for (int j = 0; i < m.size(); j++)
      for (int z = 0; z < m.size(); z++) {
        if (fabs(trod_m.at(0).at(i).at(z) * trod_m.at(1).at(z).at(j) -
                 m.at(i).at(j)) < pow(10, -10))
          return true;
      }
  return false;
}

int main() {

int brel;
std::cout << "Broj redova/kolona matrice: ";
std::cin >> brel;
matrica m(brel,std::vector<double>(brel));

std::cout << "Elementi matrice:";
for(int i=0;i<brel;i++)
{
    for(int j=0;j<brel;j++)
    {
        std::cin >> m.at(i).at(j);
    }
}
m_niz trod_m;
try{
trod_m=DoolittleLU(m);
matrica l=trod_m.at(0);
matrica u=trod_m.at(1);

std::cout<< "\n\nMatrica L:" << std::endl;
for(int i=0;i<brel;i++)
{
    for(int j=0;j<brel;j++)
    {
        std::cout << l.at(i).at(j) << " ";
    }
    std::cout << std::endl;
}

std::cout<< "\n\nMatrica U:" << std::endl;
for(int i=0;i<brel;i++)
{
    for(int j=0;j<brel;j++)
    {
        std::cout << u.at(i).at(j) << " ";
    }
    std::cout << std::endl;
}
}
catch(std::domain_error e)
{
    std::cout << e.what();
}

  return 0;
}
