#include "Arete.h"
#include "Sommet.h"
#include <string>
#include <iostream>
using namespace std;

Arete::Arete()
{

}

Arete::~Arete()
{

}

Arete::Arete(string nomA, string nomB)
{
    m_sommetA=Sommet(nomA);
    m_sommetB=Sommet(nomB);
}

Sommet Arete::getSommetA()
{
    return m_sommetA;
}

void Arete::setSommetA(string nomA)
{
    m_sommetA.setNom(nomA);
}

Sommet Arete::getSommetB()
{
    return m_sommetB;
}

void Arete::setSommetB(string nomB)
{
    m_sommetB.setNom(nomB);
}

