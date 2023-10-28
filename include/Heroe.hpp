#pragma once 
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include<Arma.hpp>


class Heroe : public Dibujo, public Actualizable
{
private:
    Arma* arma;
public:
    Heroe() : Dibujo("Heroe"){
    }

    Heroe(int x, int y) : Dibujo(x,y,"Heroe"){
    }
    
    void Actualizar()
    {
       
    }

    ~Heroe(){}
};