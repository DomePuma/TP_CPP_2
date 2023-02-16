#include <iostream>
#include "mylib.hpp"

void TP_Exo_7()
{
    float dividende = 0;
    float diviseur = 0;
    float reste = 0;
    float quotient = 0;
    std::cout << "Entrez un nombre à diviser : ";
    std::cin >> dividende;
    reste = dividende;
    std::cout << "Entrez le diviseur : ";
    std::cin >> diviseur;
    
    while(reste >= diviseur)
    {
        reste = reste - diviseur;
        quotient++;
    }
    
    std::cout << "Le résultat de " << dividende << " divisé par " << diviseur << " est égal à " << quotient << " et de reste " << reste << std::endl;
}