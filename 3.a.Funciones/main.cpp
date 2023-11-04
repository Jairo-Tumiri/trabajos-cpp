#include <iostream>
using namespace std;
/* 

 */
struct Jugador{
    string nombre;
    int algo;
};
void pedirleAlUsuarioQueCargueEquipo(Jugador equipo[], int cantidad);
Jugador pedirleAlUsuarioQueMeDeUnJugador();
int main(){

}
void pedirleAlUsuarioQueCargueEquipo(Jugador equipo[], int cantidad){
    /* 
    Pedirle 5 veces con un for que ingrese un jugador
    Insertar ordenado aljugador en el array 
    */
    for (int i = 0; i < cantidad; i++)
    {
        Jugador jugador = pedirleAlUsuarioQueMeDeUnJugador();
        insertarJugadorOrdenado(equipo,i,jugador);
    }    
};
Jugador pedirleAlUsuarioQueMeDeUnJugador(){
    Jugador jugador;

    cout <<"ingrese el nombre del jugador "
};
