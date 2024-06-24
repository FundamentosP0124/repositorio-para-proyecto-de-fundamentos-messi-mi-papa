#include <iostream>
#include <ctime>
using namespace std;

//prototipo de funciones
char eleccionjugador();
char eleccionjugador2();
char eleccioncomputadora();
void mostrareleccion(char eleccion);
void mostrarganador(char eleccion1, char eleccion2);
string nombrejugador();
string nombrejugador2();
void listadonombres(string nombre1,string nombre2);

//variables que use globalmente
string namejugador,namejugador2;


int main ()
{
    char eleccionplayer, eleccioncomputer, eleccionplayer2;
    int opcion;

    do
    {
        cout << "Bienvenido, elija una de las siguientes opciones.\n";
        cout << "1. Juega contra la maquina.\n";
        cout << "2. 1vs1.\n";
        cout << "3. Ayuda.\n";
        cout << "4. Integrantes.\n";
        cout << "5. Salir";
        cout << "\n\n";

        cin >> opcion;
        cout << "\n\n";

        switch (opcion)
        {
        case 1:
            namejugador=nombrejugador();
            cout << "\n";
            eleccionplayer=eleccionjugador(); //asigno las funciones a una variable para poderlas
                                            // utilizar despues

            cout << "\n";

            cout << namejugador<<": ";  // asi como en este caso
            mostrareleccion(eleccionplayer);

            eleccioncomputer=eleccioncomputadora();

            cout << "Computadora: ";
            mostrareleccion(eleccioncomputer);

            mostrarganador(eleccionplayer,eleccioncomputer);
            cout << "\n";

            break;

        case 2:
            namejugador=nombrejugador();
            namejugador2=nombrejugador2();

            cout<<"\n\n";
            listadonombres(namejugador,namejugador2);
            cout <<"\n";

            eleccionplayer=eleccionjugador();
            eleccionplayer2=eleccionjugador2();

            cout <<"\n\n";

            cout << namejugador<<": "; 
            mostrareleccion(eleccionplayer);

            cout << namejugador2<<": "; 
            mostrareleccion(eleccionplayer2);

            cout << "\n";

            mostrarganador(eleccionplayer,eleccionplayer2);

            cout << "\n";

            break;

        case 3:
            cout << "En el modo contra la maquina participa solamente un jugador y la maquina";
            cout << " elige al azar su decision.\n";
            cout << "En el modo '1vs1' participan dos jugadores que eligiran segun su criterio\n";
            cout << "En 'Integrantes' salen las personas que participaron en el proyecto\n\n\n";
            
            break;

        case 4:
            cout << "Nombre: Andres Rodolfo Lopez Menjivar\n";
            cout << "Carnet: 00084724\n\n\n";
            break;

        case 5:
            cout << "Saliendo del juego...";
            break;

        default:
            cout << "Ingresa una opcion valida";
            break;
        }
    } while (opcion!=5);
    
    return 0;
}
string nombrejugador()
{
    string jugador;

    cout << "Bienvenido!\n";
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador;

    return jugador; //para cuando le asigne una variable, la variable agarre el valor esecificamente
    // de "jugador"

}
char eleccionjugador()
{
    char eleccion;

    cout << "\n" << namejugador << ", elige una opcion: \n\n";
    cout << "Piedra - Papel - Tijera\n\n";
    do
    {
        cout << "'r' para Piedra\n";
        cout << "'p' para Papel\n";
        cout << "'t' para Tijera\n";
        cin >> eleccion;
    } while (eleccion!='r' && eleccion!='p' && eleccion!='t');

    return eleccion;

    
}
char eleccioncomputadora()
{
    srand(time(0));//utilice la libreria ctime ya que investigue como sacar un numero
                    //aleatorio y vi que se odia utilizar esto

    int eleccion;
    eleccion = rand () % 3 + 1; //3 es de las opciones que quiero pero ya que empieza desde
                            //0 iria de 0 a 2 y quiero ue vaya de 1 a 3, entonces le sume 1

    switch (eleccion)
    {
    case 1:
        return 'r'; //aqui le asigno una opcion a cada numero
        break;

    case 2:
        return 'p';
        break;

    case 3:
        return 't';
        break;
    }
}

void mostrareleccion(char eleccion)
{
    switch (eleccion)
    {
    case 'r':
        cout << "Piedra\n";  //aca le asigno la palabra completa al char
        break;

    case 'p':
        cout << "Papel\n";
        break;

    case 't':
        cout << "Tijera\n";
        break;
    }
}
void mostrarganador(char eleccion1, char eleccion2)
{
    switch (eleccion1)  //aca esta la logica para sacar al ganador
    {
    case 'r':
        if (eleccion2=='r')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='p')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else cout << namejugador << " Ha ganado\n";

        break;

    case 'p':
        if (eleccion2=='r')
        {
            cout << namejugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << "Empate\n";
        }
        else cout << namejugador << " Ha perdido\n";

        break;

     case 't':
        if (eleccion2=='r')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else if (eleccion2=='p')
        {
            cout << namejugador << " Ha Ganado\n";
        }
        else cout <<"Empate\n";

        break;
    
    }

}
string nombrejugador2()
{
    string jugador; //lo mismo que nombreugador() solo que este es para el jugador 2 y 
                    //por ejemplo quite la palabra bienvenido

    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador;

    return jugador;
}

void listadonombres(string nombre1,string nombre2)
{
    cout << "Jugador 1: " << nombre1<<endl; //esto es solo pq piden que mostremos el listado de los
    cout << "Jugador 2: " << nombre2<<endl; //participantes
}

char eleccionjugador2()
{
    char eleccion; //lo mismo que eleccionjugador() pero para jugador 2

    cout << "\n" << namejugador2 << ", elige una opcion: \n\n";
    cout << "Piedra - Papel - Tijera\n\n";
    do
    {
        cout << "'r' para Piedra\n";
        cout << "'p' para Papel\n";
        cout << "'t' para Tijera\n";
        cin >> eleccion;
    } while (eleccion!='r' && eleccion!='p' && eleccion!='t');

    return eleccion;
}