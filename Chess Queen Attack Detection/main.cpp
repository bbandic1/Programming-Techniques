#include <iostream>
#include <cmath>
#include <vector>
#include <string>

typedef std::vector<std::vector<bool>> matrica;
typedef std::string string;

bool DaLiSeDameNapadaju(matrica m)
{
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    for(int i=0; i<m.size();i++)
    {
        for(int j=0;j<m.at(i).size();j++)
        {
            if(m.at(i).at(j)==true)
            {
                for(int x=0;x<v1.size();x++)
                    if(v1.at(x)==i)
                    return true; 
                    v1.push_back(i);

                for(int y=0;y<v2.size();y++)
                    if(v2.at(y)==j)
                    return true;
                    v2.push_back(j);

                for(int z=0;z<v3.size();z++)
                    if(i-j==v3.at(z))
                    return true;
                    v3.push_back(i-j);
            }
        }
    }
    return false;
}
int main ()
{
    std::cout << "Unesite opis sahovske ploce:" << std::endl << "(Q za kraljicu, bilo sta drugo za prazno polje, ENTER naprazno za kraj unosa):"; 
    matrica m;
    string s;
    int b=0;
    while(getline(std::cin, s))
    {
        m.push_back(std::vector<bool>());
        for(int i=0;i<s.size();i++)
        {
            if(s.at(i)=='q' || s.at(i)=='Q')
            m.at(b).push_back(true);
            else
            m.at(b).push_back(false);
        }
    b++;
    }

    if(DaLiSeDameNapadaju(m)==true)
     {
         std::cout << "\nDame se medjusobno napadaju.";
     }
     else
     {
         std::cout << "\nDame se medjusobno ne napadaju.";
     }

	return 0;
}
