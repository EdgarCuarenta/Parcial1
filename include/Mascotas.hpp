#include <iostream>
#include <string>
#include <cstdio>
class Mascotas
{
private:
    std::string nombre;
public:
    Mascotas(/* args */);

    void Mascotas(){
        std::cout<<"estoy comiendo"<<std::endl;
        this->nombre = "Firulais";
    }
        void Inicializar(){
            std::cout<<"Ha nacidp"<<std::endl;
            this->nombre = "Firulais";
        
    }
     ~Mascotas(){
     std::cout<<"Adios Mundo cruel"<<std::endl;
     }
     void Destruir(){
        std::cout<<"Adios Mundo cruel"<<std::endl;
     }
     void DecirNombre(){
        std::cout<<"Mi nombrre es"<<std::endl;
     }

};

Mascotas::Mascotas(/* args */)
{
}

Mascotas::~Mascotas()
{
}
std::cout << "int" << sizeof(int) << std::endl;
std::cout << "char" << sizeof(char) << std::endl;
std::cout << "flaot" << sizeof(float) << std::endl;
std::cout << "char" << sizeof(char) << std::endl;
std::cout << "bool" << sizeof(bool) << std::endl;
std::cout << "double" << sizeof(double) << std::endl;
std::cout << "Mascotas" << sizeof(Masotas) << std::endl;




