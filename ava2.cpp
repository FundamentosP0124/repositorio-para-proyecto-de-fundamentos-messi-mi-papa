#include <iostream>
#include <ctime>
using namespace std;

//prototipo de funciones
char eleccionJugador();
char eleccionJugador2();
char eleccionJugador_lvl2();
char eleccionJugador2_lvl2();
char eleccionComputadora();
char eleccionComputadora_lvl2();
void mostrarEleccion(char eleccion);
void mostrarEleccion_lvl2(char eleccion);
void mostrarGanador(char eleccion1, char eleccion2);
void mostrarGanador_1v1(char eleccion1, char eleccion2);
void mostrarGanador_lvl2(char eleccion1, char eleccion2);
void mostrarGanador_lvl2_1v1(char eleccion1, char eleccion2);
string nombreJugador();
string nombreJugador2();
void listadoNombres(string nombre1,string nombre2);
void mostrarAyuda();
void menuPrincipal();
void subMenu();
void integrantes();
void reglas();

//variables que use globalmente
string nameJugador,nameJugador2; 


int main ()
{
    char eleccionPlayer, eleccionComputer, eleccionPlayer2;
    int opcion;

    do
    {
        menuPrincipal();

        cin >> opcion;
        cout << "\n\n";

        switch (opcion)
        {
        case 1:
            do
            {
            subMenu();

            cin >> opcion;

            cout << "\n\n";

            switch (opcion)
            {
            case 1:
                nameJugador=nombreJugador();
                cout << "\n";
                eleccionPlayer=eleccionJugador(); //asigno las funciones a una variable para poderlas
                                            // utilizar despues

                cout << "\n";

                cout << nameJugador<<": ";  // asi como en este caso
                mostrarEleccion(eleccionPlayer);

                eleccionComputer=eleccionComputadora();

                cout << "Computadora: ";
                mostrarEleccion(eleccionComputer);

                mostrarGanador(eleccionPlayer,eleccionComputer);
                cout << "\n";
                break;

            case 2:
                nameJugador=nombreJugador();
                cout << "\n";
                eleccionPlayer=eleccionJugador_lvl2(); //asigno las funciones a una variable para poderlas
                                            // utilizar despues

                cout << "\n";

                cout << nameJugador<<": ";  // asi como en este caso
                mostrarEleccion_lvl2(eleccionPlayer);

                eleccionComputer=eleccionComputadora_lvl2();

                cout << "Computadora: ";
                mostrarEleccion_lvl2(eleccionComputer);

                mostrarGanador_lvl2(eleccionPlayer,eleccionComputer);
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
                subMenu();

                cin >> opcion;

                cout << "\n\n";

                switch (opcion)
                {
                case 1:
                    nameJugador=nombreJugador();
                    nameJugador2=nombreJugador2();

                    cout<<"\n\n";
                    listadoNombres(nameJugador,nameJugador2);
                    cout <<"\n";

                    eleccionPlayer=eleccionJugador();
                    eleccionPlayer2=eleccionJugador2();

                    cout <<"\n\n";

                    cout << nameJugador<<": "; 
                    mostrarEleccion(eleccionPlayer);

                    cout << nameJugador2<<": "; 
                    mostrarEleccion(eleccionPlayer2);

                    cout << "\n";

                    mostrarGanador_1v1(eleccionPlayer, eleccionPlayer2);

                    cout << "\n";
                    break;

                case 2:
                    nameJugador=nombreJugador();
                    nameJugador2=nombreJugador2();

                    cout<<"\n\n";
                    listadoNombres(nameJugador,nameJugador2);
                    cout <<"\n";

                    eleccionPlayer=eleccionJugador_lvl2();
                    eleccionPlayer2=eleccionJugador2_lvl2();

                    cout <<"\n\n";

                    cout << nameJugador<<": "; 
                    mostrarEleccion_lvl2(eleccionPlayer);

                    cout << nameJugador2<<": "; 
                    mostrarEleccion_lvl2(eleccionPlayer2);

                    cout << "\n";

                    mostrarGanador_lvl2_1v1(eleccionPlayer, eleccionPlayer2);

                    cout << "\n";
                    break;
                
                default:
                    cout << "Ingrese una opcion valida\n";
                    break;
                }
            } while (opcion!=1 && opcion!=2);
            
            break;

        case 3:
            mostrarAyuda(); 
            break;

        case 4:
            integrantes();
            break;


        case 5:
            reglas ();
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
string nombreJugador()
{
    string jugador;

    cout << "Bienvenido!\n";
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador;

    return jugador; //para cuando le asigne una variable, la variable agarre el valor esecificamente
    // de "jugador"

}
char eleccionJugador()
{
    char eleccion;

    cout << "\n" << nameJugador << ", elige una opcion: \n\n";
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
char eleccionJugador_lvl2()
{
    char eleccion;

    cout << "\n" << nameJugador << ", elige una opcion: \n\n";
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
char eleccionJugador2_lvl2()
{
    char eleccion;

    cout << "\n" << nameJugador2 << ", elige una opcion: \n\n";
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
char eleccionComputadora()
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
char eleccionComputadora_lvl2()
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
void mostrarEleccion(char eleccion)
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
void mostrarEleccion_lvl2(char eleccion)
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
void mostrarGanador(char eleccion1, char eleccion2)
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
            cout << nameJugador << " Ha perdido\n";
        }
        else cout << nameJugador << " Ha ganado\n";

        break;

    case 'p':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << "Empate\n";
        }
        else cout << nameJugador << " Ha perdido\n";

        break;

     case 't':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha Ganado\n";
        }
        else cout <<"Empate\n";

        break;
    
    }

}
void mostrarGanador_lvl2(char eleccion1, char eleccion2)
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
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else cout << nameJugador << " Ha ganado\n";

        break;

    case 'p':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else cout << nameJugador << " Ha perdido\n";

        break;

     case 't':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha ganado\n";
        }
         else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else cout <<"Empate\n";

        break;

     case 'l':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha Ganado\n";
        }
        else if (eleccion2=='l')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else cout << nameJugador<< " Ha perdido\n";

        break;

     case 's':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha perdido\n";
        }
        else if (eleccion2=='s')
        {
            cout << "Empate\n";
        }
        else cout << nameJugador <<" Ha ganado\n";

        break;
    
    }

}
string nombreJugador2()
{
    string jugador; //lo mismo que nombreugador() solo que este es para el jugador 2 y 
                    //por ejemplo quite la palabra bienvenido

    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador;

    return jugador;
}
void listadoNombres(string nombre1,string nombre2)
{
    cout << "Jugador 1: " << nombre1<<endl; //esto es solo pq piden que mostremos el listado de los
    cout << "Jugador 2: " << nombre2<<endl; //participantes
}
char eleccionJugador2()
{
    char eleccion; //lo mismo que eleccionjugador() pero para jugador 2

    cout << "\n" << nameJugador2 << ", elige una opcion: \n\n";
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
void mostrarGanador_1v1(char eleccion1, char eleccion2)
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
            cout << nameJugador2 << " Ha ganado\n";
        }
        else cout << nameJugador << " Ha ganado\n";

        break;

    case 'p':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << "Empate\n";
        }
        else cout << nameJugador2 << " Ha ganado\n";

        break;

     case 't':
        if (eleccion2=='r')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else cout <<"Empate\n";

        break;
    
    }
}
void mostrarGanador_lvl2_1v1(char eleccion1, char eleccion2)
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
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else cout << nameJugador << " Ha ganado\n";

        break;

    case 'p':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else cout << nameJugador2 << " Ha ganado\n";

        break;

     case 't':
        if (eleccion2=='r')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha ganado\n";
        }
         else if (eleccion2=='l')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else cout <<"Empate\n";

        break;

     case 'l':
        if (eleccion2=='r')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='l')
        {
            cout << "Empate\n";
        }
        else if (eleccion2=='s')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else cout << nameJugador2 << " Ha ganado\n";

        break;

     case 's':
        if (eleccion2=='r')
        {
            cout << nameJugador << " Ha ganado\n";
        }
        else if (eleccion2=='p')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='l')
        {
            cout << nameJugador2 << " Ha ganado\n";
        }
        else if (eleccion2=='s')
        {
            cout << "Empate\n";
        }
        else cout << nameJugador <<" Ha ganado\n";

        break;
    
    }  
}
void mostrarAyuda()
{
            cout << "=== Ayuda ===\n\n";
            cout << "Bienvenido a Piedra, Papel, Tijera, Lagarto, Spock!\n\n";
            cout << "El objetivo del juego es derrotar a tu oponente seleccionando una opcion que venza a la opcion elegida por el otro jugador.\n";
            cout << "Puedes jugar contra la computadora o contra otro jugador.\n\n";
            cout << "=== Modo de Juego ===\n";
            cout << "1. Jugar contra la computadora:\n";
            cout << "   - En este modo, juegas contra una computadora que elige su jugada de manera aleatoria.\n";
            cout << "   - Elige entre las opciones disponibles y trata de vencer a la computadora.\n\n";
            cout << "2. 1 vs 1:\n";
            cout << "   - En este modo, dos jugadores humanos compiten entre si.\n";
            cout << "   - Ambos jugadores eligen sus jugadas y el resultado se muestra inmediatamente.\n\n";
            cout << "=== Consejos ===\n";
            cout << "1. Trata de anticipar la jugada de tu oponente.\n";
            cout << "2. No elijas la misma opcion repetidamente, tu oponente podria notarlo y aprovecharse.\n";
            cout << "3. Juega de manera impredecible para aumentar tus probabilidades de ganar.\n\n";
            cout << "Diviertete y buena suerte!\n\n";    
}
void menuPrincipal()
{
        cout << "Bienvenido, elija una de las siguientes opciones.\n";
        cout << "1. Juega contra la maquina.\n";
        cout << "2. 1vs1.\n";
        cout << "3. Ayuda.\n";
        cout << "4. Integrantes.\n";
        cout << "5. Reglas. \n" ;
        cout << "6. Salir";
        cout << "\n\n";
}
void integrantes()
{
            cout << "Nombre: Andres Rodolfo Lopez Menjivar\n";
            cout << "Carnet: 00084724\n\n\n";
            cout << "Nombre: Hugo Steven Maldonado Cordova\n";
            cout << "Carnet: 00047924\n\n\n";
            cout << "Nombre: Gabriel Enrque Mejia Castillo\n";
            cout << "Carnet: 00063924\n\n\n";
}
void reglas()
{
            cout << "Para jugar el juego de: Piedra, papel, tijera, lagarto y spock considere lo siguiente:\n\n";
            cout << "Piedra, papel y tijera siguen su misma logica.\n";
            cout << "Spock) Le gana a piedra y a las tijeras. Y pierde con el papel y con el lagarto. \n";
            cout << "Lagarto) Le gana a spock y a papel. Y pierde con las tijeras y con la piedra \n\n";
}
void subMenu()
{
                cout << "1. Piedra, papel o tijera.\n";
                cout << "2. Piedra, papel, tijera, lagarto o spock.\n";
                cout << "\n\n"; 
}