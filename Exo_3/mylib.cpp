#include <iostream>
#include "mylib.hpp"

void TP_Exo_3_1()
{
    int nbLignes = 0;
    std::cout << "Nombre de lignes à afficher : ";
    std::cin >> nbLignes;

    if(nbLignes == 0)
    {
        std::cout<< "Pas de lignes à afficher" << std::endl;
    }
    else
    {
        for(int i = 0; i <= nbLignes-1; i++)
        {
            std::cout <<" * * * * * * * * * * " << std::endl;
        }
    }
}
void TP_Exo_3_2()
{
    int nbLignes = 0;
    char character = '*';
    int nbCharacter = 0;
    std::cout << "Nombre de lignes à afficher : ";
    std::cin >> nbLignes;
    std::cout << "Nombre de charactères par lignes à afficher : ";
    std::cin >> nbCharacter;
    std::cout << "Quel charactère à afficher : ";
    std::cin >> character;

    if(nbLignes == 0)
    {
        std::cout<< "Pas de lignes à afficher" << std::endl;
    }
    else if (nbCharacter == 0)
    {
        std::cout << "Pas de charactères à afficher" << std::endl;
    }
    else
    {
        for(int i = 0; i <= nbLignes-1; i++)
        {
            for(int i = 0; i <= nbCharacter-2; i++)
            {
                std::cout << character << " ";
            }
            std::cout << character << std::endl;
        }
    }
}