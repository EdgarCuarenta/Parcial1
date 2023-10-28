#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Hacha : public Dibujo, public Actualizable
{
private:
    int direccion;
public:
    Hacha(int x, int y) : Dibujo(x,y,"Hacha"){
        this->direccion =1;
    }
    ~Hacha(){}
    void CambiarDireccion(){
        this->direccion *= -1;
    }
    void Actualizar(){
        this->x+= this->direccion;
    }
};
