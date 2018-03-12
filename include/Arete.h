#ifndef ARETE_H
#define ARETE_H
#include "Sommet.h"
#include <string>
#include <iostream>
using namespace std;

class Arete
{
    public:
        Arete();
        ~Arete();
        Arete(string nomA, string nomB);
        Sommet getSommetA();
        void setSommetA(string nomA);
        Sommet getSommetB();
        void setSommetB(string nomB);

    private:
        Sommet m_sommetA;
        Sommet m_sommetB;
};

#endif
