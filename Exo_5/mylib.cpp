#include <iostream>
#include "mylib.hpp"

void TP_Exo_5()
{
    int year = 0;
    std::cout << "Entrez une année : ";
    std::cin >> year;
    if(year % 4 == 0 && year % 100 && year % 400)
    {
        std::cout << year << " l'année est bissextile" << std::endl;
    }
    else
    {
        std::cout << year << " n'est pas une année bissextile" << std::endl;
    }
}