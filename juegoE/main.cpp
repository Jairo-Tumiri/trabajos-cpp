#include <iostream>
#include <string>

using namespace std;

struct Jugadores
{
    string nombre;
    int puntaje = 0;
};

struct Preguntas
{
    string prts[3];
    string rtas[3];
};

bool mostrarPreguntas(int categoriaElegida, int preguntaCategoria[])
{
    Preguntas categoria[3];
    categoria[0] = {
        {"de que nacionalidad es usain bolt", "quien gano el ultimo mundial", "cual es la tenista mas conocida de argentina"},
        {"jamaica", "argentina", "gabriela"}};
    categoria[1] = {
        {"cual es la capital de argentina ", "cual es la capital de españa", "cual es la capital de brasil"},
        {"bsas", "madrid", "brasilia"}};
    categoria[2] = {
        {"quien dirigio titanic", "quien es el creador de los simpsons", "cual es la pelicula mas conocida"},
        {"homero", "matt", "avatar"}};

    string respuesta;
    if (categoriaElegida != 0)
    {
        for (int i = preguntaCategoria[categoriaElegida - 1]; i < 3; i++)
        {
            cout << categoria[categoriaElegida - 1].prts[i] << endl;
            cin >> respuesta;
            if (categoria[categoriaElegida - 1].rtas[i] == respuesta)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        cout << "SE TERMINO EL JUEGO O YA NO HAY PREGUNTAS EN LA CATEGORIA" << endl;
    }
    return false;
};

int main()
{

    Jugadores participantes[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresar jugador " << i << endl;
        cin >> participantes[i].nombre;
    }

    int categoria;
    int jugador = 0;
    int preguntaCategoria[3] = {0, 0, 0};
    int puntaje[3] = {0, 0, 0};

    do
    {
        if (jugador == 3)
        {
            jugador = 0;
            cout << "VUELTA" << endl;
        }
        else
        {
            cout << participantes[jugador].nombre << " -------> tiene: " << participantes[jugador].puntaje << endl;

            cout << "elegir la categoria" << endl;
            cout << "1)deportes" << endl;
            cout << "2)geografia" << endl;
            cout << "3)Cine Y Television" << endl;
            cout << "0)salir" << endl;
            cin >> categoria;

            if (preguntaCategoria[0] + preguntaCategoria[1] + preguntaCategoria[2] != 9)
            {
                if (preguntaCategoria[categoria - 1] != 3)
                {
                    if (mostrarPreguntas(categoria, preguntaCategoria))
                    {
                        cout << "=============================================================" << endl;
                        participantes[jugador].puntaje++;
                        puntaje[jugador] = participantes[jugador].puntaje;
                    }
                    else
                    {
                        cout << "=============================================================" << endl;
                        cout << "INCORRECTO" << endl;
                    }
                    cout << participantes[jugador].nombre << " -------> tiene: " << participantes[jugador].puntaje << endl;
                    cout << "=============================================================" << endl;
                    preguntaCategoria[categoria - 1]++;
                    jugador++;
                }
                else
                {
                    cout << "ELEGIR OTRA PREGUNTA" << endl;
                }
            }
            else
            {
                cout << "NO HAY MAS PREGUNTAS" << endl;
                categoria = 0;
            }
        }

    } while (categoria != 0);

for (int i = 0; i < 3; i++)
{
    cout << participantes[i].nombre << " -------> tiene: " << participantes[i].puntaje << endl;
}


/* 
    int maxvec = 0;
    int posMax;
    int minvec = puntaje[0];
    int posMin;
    int posMedio;
    for (int i = 0; i < 3; i++)
    {
        if (minvec >= puntaje[i])
        {
            minvec = puntaje[i];
            posMin = i;
        }
        if (maxvec <= puntaje[i])
        {
            maxvec = puntaje[i];
            posMax = i;
        }
        if (puntaje[i] != maxvec && puntaje[i] != minvec)
        {
            posMedio = i;
        }
    }

    cout << "Primer lugar: " << participantes[posMax].nombre << " con : " << maxvec << endl;
    cout << "segundo lugar: " << participantes[posMedio].nombre << " con : " << puntaje[posMedio] << endl;
    cout << "tercer lugar: " << participantes[posMin].nombre << " con : " << minvec << endl;

    return 0; */
}
