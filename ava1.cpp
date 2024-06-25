#include <iostream>
#include <ctime>
using namespace std;

//prototipo de funciones
char eleccionjugador();
char eleccionjugador2();
char eleccionjugador_lvl2();
char eleccionjugador2_lvl2();
char eleccioncomputadora();
char eleccioncomputadora_lvl2();
void mostrareleccion(char eleccion);
void mostrareleccion_lvl2(char eleccion);
void mostrarganador(char eleccion1, char eleccion2);
void mostrarganador_lvl2(char eleccion1, char eleccion2);
string nombrejugador();
string nombrejugador2();
void listadonombres(string nombre1,string nombre2);

//variables que use globalmente
string namejugador,namejugador2; //prueba


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
        cout << "5. Reglas. \n" ;
        cout << "6. Salir";
        cout << "\n\n";

        cin >> opcion;
        cout << "\n\n";

        switch (opcion)
        {
        case 1:
            do
            {
            cout << "1. Piedra, papel o tijera.\n";
            cout << "2. Piedra, papel, tijera, lagarto, spock.\n";
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
                cout << "\n";
                eleccionplayer=eleccionjugador_lvl2(); //asigno las funciones a una variable para poderlas
                                            // utilizar despues

                cout << "\n";

                cout << namejugador<<": ";  // asi como en este caso
                mostrareleccion_lvl2(eleccionplayer);

                eleccioncomputer=eleccioncomputadora_lvl2();

                cout << "Computadora: ";
                mostrareleccion_lvl2(eleccioncomputer);

                mostrarganador_lvl2(eleccionplayer,eleccioncomputer);
                cout << "\n";
                break;
            
            default:
                cout << "Ingrese una opcion valida\n";
                break;
            }
            } while (opcion!=1 && opcion!=2);

            break;
            
        case 2:
            do
            {
                cout << "1. Piedra, papel o tijera.\n";
                cout << "2. Piedra, papel, tijera, lagarto, spock.\n";
                cout << "\n\n"; 

                cin >> opcion;

                cout << "\n\n";

                switch (opcion)
                {
                case 1:
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

                case 2:
                    namejugador=nombrejugador();
                    namejugador2=nombrejugador2();

                    cout<<"\n\n";
                    listadonombres(namejugador,namejugador2);
                    cout <<"\n";

                    eleccionplayer=eleccionjugador_lvl2();
                    eleccionplayer2=eleccionjugador2_lvl2();

                    cout <<"\n\n";

                    cout << namejugador<<": "; 
                    mostrareleccion_lvl2(eleccionplayer);

                    cout << namejugador2<<": "; 
                    mostrareleccion_lvl2(eleccionplayer2);

                    cout << "\n";

                    mostrarganador_lvl2(eleccionplayer,eleccionplayer2);

                    cout << "\n";
                    break;
                
                default:
                    cout << "Ingrese una opcion valida\n";
                    break;
                }
            } while (opcion!=1 && opcion!=2);
            
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
            cout << "Nombre: Hugo Steven Maldonado Cordova\n";
            cout << "Carnet: 00047924\n\n\n";
            cout << "Nombre: Gabriel Enrque Mejia Castillo\n";
            cout << "Carnet: 00063924\n\n\n";
            break;


        case 5:
            cout << "Para jugar el juego de: Piedra, papel, tijera, lagarto y spock considere lo siguiente:\n\n";
            cout << "Piedra, papel y tijera siguen su misma logica.\n";
            cout << "Spock) Le gana a piedra y a las tijeras. Y pierde con el papel y con el lagarto. \n";
            cout << "Lagarto) Le gana a spock y a papel. Y pierde con las tijeras y con la piedra \n\n";
            break;

        case 6:
            cout << "Saliendo del juego...";
            break;

        default:
            cout << "Ingresa una opcion valida\n";
            break;
        }
    } while (opcion!=6);
    
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
char eleccionjugador_lvl2()
{
    char eleccion;

    cout << "\n" << namejugador << ", elige una opcion: \n\n";
    cout << "Piedra - Papel - Tijera - Lagarto - Spock\n\n";
    do
    {
        cout << "'r' para Piedra\n";
        cout << "'p' para Papel\n";
        cout << "'t' para Tijera\n";
        cout << "'l' para Lagarto\n";
        cout << "'s' para Spock\n";
        cin >> eleccion;
    } while (eleccion!='r' && eleccion!='p' && eleccion!='t' && eleccion!='l' && eleccion!='s');

    return eleccion;
}
char eleccionjugador2_lvl2()
{
    char eleccion;

    cout << "\n" << namejugador2 << ", elige una opcion: \n\n";
    cout << "Piedra - Papel - Tijera - Lagarto - Spock\n\n";
    do
    {
        cout << "'r' para Piedra\n";
        cout << "'p' para Papel\n";
        cout << "'t' para Tijera\n";
        cout << "'l' para Lagarto\n";
        cout << "'s' para Spock\n";
        cin >> eleccion;
    } while (eleccion!='r' && eleccion!='p' && eleccion!='t' && eleccion!='l' && eleccion!='s');

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
char eleccioncomputadora_lvl2()
{
    srand(time(0));//utilice la libreria ctime ya que investigue como sacar un numero
                    //aleatorio y vi que se odia utilizar esto

    int eleccion;
    eleccion = rand () % 5 + 1; //5 es de las opciones que quiero pero ya que empieza desde
                            //0 iria de 0 a 4 y quiero ue vaya de 1 a 5, entonces le sume 1

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

    case 4:
        return 'l';
        break;

    case 5:
        return 's';
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
void mostrareleccion_lvl2(char eleccion)
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

    case 'l':
        cout << "Lagarto\n";
        break;

    case 's':
        cout << "Spock\n";
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
void mostrarganador_lvl2(char eleccion1, char eleccion2)
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
        else if (eleccion2=='l')
        {
            cout << namejugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
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
        else if (eleccion2=='l')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else if (eleccion2=='s')
        {
            cout << namejugador << " Ha ganado\n";
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
            cout << namejugador << " Ha ganado\n";
        }
         else if (eleccion2=='l')
        {
            cout << namejugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else cout <<"Empate\n";

        break;

     case 'l':
        if (eleccion2=='r')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else if (eleccion2=='p')
        {
            cout << namejugador << " Ha Ganado\n";
        }
        else if (eleccion2=='l')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='s')
        {
            cout << namejugador << " Ha ganado\n";
        }
        else cout << namejugador<< " Ha perdido\n";

        break;

     case 's':
        if (eleccion2=='r')
        {
            cout << namejugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else if (eleccion2=='l')
        {
            cout << namejugador << " Ha perdido\n";
        }
        else if (eleccion2=='s')
        {
            cout << "Empate\n";
        }
        else cout << namejugador <<" Ha ganado\n";

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