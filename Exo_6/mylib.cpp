#include <iostream>
#include "mylib.hpp"

void TP_Exo_6()
{
    float a = 0;
    float b = 0;
    float c = 0;
    std::cout << "Entrez un nombre à multiplier : ";
    std::cin >> a;
    c = a;
    std::cout << "Entrez le multiplicateur : ";
    std::cin >> b;
    
    for(int i = 0; i <= b-2; i++)
    {
        a = a + c;
    }

    std::cout << a << std::endl;
}