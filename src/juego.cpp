#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <list>
#include <DK.hpp>
#include <Hacha.hpp>
#include<Arma.hpp>
#include<Heroe.hpp>


using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Arma* arma = new Arma();
    Hacha* hacha = new Hacha(0,1);

    DK* dk = new DK(1,0);
    Heroe* heroe = new Heroe(5,5);


    list<Dibujo*> dibujos;
    dibujos.push_back(dk);
    dibujos.push_back(heroe);
    dibujos.push_back(hacha);

    list<Actualizable*> actualizables;
    actualizables.push_back(dk);
    actualizables.push_back(heroe);
    actualizables.push_back(hacha);

   while(true)
   {
        
        int key = getch();
        if (key == 'q'|| key == 'Q')
            break;

        if(key == 'a' || key == KEY_LEFT){
           ;
            dk->DesplazarIzquierda();
        }
        if(key == 'd' || key == KEY_RIGHT){
          
            dk->DesplazarDerecha();
        }
        if(key == 'w' || key == KEY_UP){
            dk->DesplazarArriba();
        }
        if(key == 's' || key == KEY_DOWN){
            
            dk->DesplazarAbajo();
        }
        if(key == 'l'){
            arma->Disparar();
        }
        if(key == 'p'){
            hacha->CambiarDireccion();
        }
        refresh();
        
         ventana.Actualizar(actualizables);
         ventana.Dibujar(dibujos);
        
    
    }
    
    return 0;
}