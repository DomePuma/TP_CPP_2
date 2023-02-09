#include <iostream>
#include "mylib.hpp"

void TP_Exo_4_1()
{
    char a = 'a';
    char b = 'b';
    std::cout << "Valeur 1 : ";
    std::cin >> a;
    std::cout << "Valeur 2 : ";
    std::cin >> b;

    std::cout << "Suite originelle : " << a << " " << b << std::endl;
    std::cout << "Suite remixé : " << b << " " << a << std::endl;
}
void TP_Exo_4_2()
{
    char a = 'a';
    char b = 'b';
    char c = 'c';
    std::cout << "Valeur 1 : ";
    std::cin >> a;
    std::cout << "Valeur 2 : ";
    std::cin >> b;
    std::cout << "Valeur 3 : ";
    std::cin >> c;

    std::cout << "Suite originelle : " << a << " " << b << " " << c << std::endl;
    std::cout << "Suite remixé : " << b << " " << c << " " << a << std::endl;
}