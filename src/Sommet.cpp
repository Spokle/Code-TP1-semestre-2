#include "Sommet.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

Sommet::Sommet()
{

}

Sommet::~Sommet()
{

}

Sommet::Sommet(string nom)
{
    m_nom = nom;
    if(m_nom == "Emmanuel M")
    {
        m_intersection = 0;
    }

    if(m_nom == "Manuel V")
    {
        m_intersection = 1;
    }

    if(m_nom == "Francois B")
    {
        m_intersection = 2;
    }

    if(m_nom == "Alain J")
    {
        m_intersection = 3;
    }

    if(m_nom == "Marine L")
    {
        m_intersection = 4;
    }

    if(m_nom == "Christiane T")
    {
        m_intersection = 5;
    }

}

string Sommet::getNom()
{
    return m_nom;
}

void Sommet::setNom(string nom)
{
    m_nom = nom;
}

int Sommet::getIntersection()
{
    return m_intersection;
}

void Sommet::ajouter_dependances(string nom)
{
    m_dependances.push_back(nom);
}
