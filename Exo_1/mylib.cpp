#include <iostream>
#include <string>
#include "mylib.hpp"

void TP1_exo1 ()
{
    std::string name, surname; // ""
    int age = 0;
    
    std::cout << "Donnez votre nom : ";
    std::cin >> name;
    std::cout << "Donnez votre prénom : ";
    std::cin >> surname;
    std::cout << "Donnez votre âge : ";
    std::cin >> age;

    std::cout << "Bonjour " << surname << " " << name << " !" << std::endl;

    if(age < 18)
    {
        std::cout << "Vous êtes encore mineur !" << std::endl;
    } else if ( age >= 18 && age < 35) {
        std::cout << "Vous êtes un jeune adulte !" << std::endl;
    } else if (age >= 35 && age < 64 )
    {
        std::cout << "Tu t'approche de l'âge d'or mais t'auras pas encore ta retraite." << std::endl;
    } else {
        std::cout << "Je ne sais pas quel âge tu as, mais soit t'existe pas soit t'es super vieux." << std::endl;
    }
}