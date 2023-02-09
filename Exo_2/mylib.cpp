#include <iostream>
#include "mylib.hpp"

void TP_Exo_2()
{
    int nb = 0;
    std::cout << "Entrez un nombre :";
    std::cin >> nb;

    int nbModulo = nb%2

    if(nbModulo == 0)
    {
        std::cout << nb << " est pair" << std::endl;
    }
    else
    {
        std::cout << nb << " est impair" << std::endl;
    }
}