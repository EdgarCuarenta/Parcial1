#pragma once //para que no se duplique la clase
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include<Arma.hpp>


class DK : public Dibujo, public Actualizable
{
private:
    Arma* arma;
public:
    DK() : Dibujo("DK"){
    }

   DK(int x, int y) : Dibujo(x,y,"DK"){
    }
    
    void Actualizar()
    {
       
    }

    void DesplazarIzquierda(){
        this->x -= 1;
    }

    void DesplazarDerecha(){
        this->x += 1;
    }
    void DesplazarArriba(){
        this->y -=1;
    }
    void DesplazarAbajo(){
        this->y +=1;
    }
    
    void Disparar(){
        this-> arma = arma;
    }
    ~DK(){}
};