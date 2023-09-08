#include <iostream>
#include <Mascotas.hpp>
int main(int argc, char const *argv[])
{
    Mascotas m1;
    Mascotas m2;

    m1.Comer();
    m2.Comer();
    std::cout<< "Mensaje"<<std::endl;

void* puntero = malloc(32);

std::cout << std::endl << std::endl;
std::cout << "Direcciones de memoria" << std::endl;
std::cout << "sizeof"<< sizeof (puntero) <<std::endl;
std::cout << "puntero1" << puntero << std::endl;
std::cout << "puntero2" << &puntero << std::endl;

free (puntero);
std::cout << "Mascotas en C:" << std::endl;
Mascotas* mascotasC = (Mascotas*) malloc(sizeof(Mascotas));
MascotasC->Decirnombre();
MascotasC->Inicializar();
MascotasC->Destruir();
free(MascotasC);



std::cout << "Mascotas en C++ :" << std::endl;
Mascotas* mascotasCPP = new Mascotas;
MascotasCPP->Decirnombre();
delete MascotasCPP;


    return 0;
}