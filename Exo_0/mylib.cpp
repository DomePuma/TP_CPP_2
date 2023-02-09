#include <iostream>
#include "mylib.hpp"

int abs(int x)
{
    return x < 0 ? -x : x;
}

bool paire(float n)
{
    return n%2 >= 0 ? true : false;
}