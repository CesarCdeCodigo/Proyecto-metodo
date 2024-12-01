/*
Ciberseguridad ahí te voy
Proyecto Integrador Metodología de la Programación 1er Semestre - WTF
El programa deberá desplegar un menú con las siguientes opciones:
 1. Alta del automóvil y del piloto
 2. Buscar un automóvil
 3. Listar los automóviles por escudería
 4. Listar los automóviles por país
 5. Lugar en los que ha quedado un determinado automóvil
 6. Número de automóviles en el sistema
 7. Consulta propuesta por el estudiante
 8. Consulta propuesta por el estudiante
 9. Salir

*/

#include <iostream>
#include <string.h>
#include <stdlib.h>                 // Para limpiar la pantalla cada vez que lea una opcion
using namespace std;

struct fecha{
    int dia;
    int mes;
    int anio;
};

int const TAMComp=10;
struct piloto{
    string nombre;
    struct fecha nacimiento;
    int edad;
    string pais;
    string direccion;
}pilot[TAMComp];

struct vehiculo{
    string identificacion;
    string marca;
    string modelo;
    string escuderia;
    struct fecha adquisicion;
    int puesto;
}vehiculos[TAMComp];

void buscarVehiculo(vehiculo[], piloto[], int const TAMComp);           // Se busca en cuestión de la identificacion




int main(){
    int opcion=0;
    cout<<"Proyecto Final Metodologia de la Programacion:"<<endl;
    cout<<"Programa del Campeonato Mundial de Formula 1 de la FIA"<<endl;

    /* Para los datos de los pilotos */
    pilot[0] = {"Cesar Martinez", {3,1,2006}, 37, "Mexico", "Priv. El Zapote"};
    vehiculos[0] = {"FMF1967HGOS5", "Ford", "Mustang Fastback 1967", "Red Bull", {7,7,2037}, 5};
    pilot[1] = {"Fernando Fernandez", {6,12,2000}, 40, "Mexico","Av. Del Carmen"};
    vehiculos[1] = {"FF150MBRS5", "Ford", "F-150", "Ford", {5,4, 2034}, 4};
    pilot[2] = {"Toreto", {5,19,1979}, "Brasil", "Calle Marsupial"}
    vehiculos[2] = {"AFSL1042WOFT6", "Dodge", "Charger", "Williams Racing", {4, 13, 2010}, 1}
    pilot[3] = {"Rayo McQueen", {2, 14, 1989}, 45, "Estados Unidos", "California"}
    vehiculos[3] = {}
    

    /* Para el menú final después de leer los pilotos y sus vehículos*/
    cout<<"Prosiga su consulta con el siguiente menu"<<endl;
    while (opcion != 9){
        cout<<"1. Alta del automovil y del piloto"<<endl;
        cout<<"2. Buscar un automovil"<<endl;
        cout<<"3. Listar los automoviles por escuderia"<<endl;
        cout<<"4. Listar los automoviles por pais"<<endl;
        cout<<"5. Lugar en los que ha quedado un determinado automovil"<<endl;
        cout<<"6. Numero de automoviles en el sistema"<<endl;
        cout<<"'7. Consulta de estudiante'"<<endl;          // Aleatoriamente, escoger un numero de puesto
        cout<<"'8. Consulta de estudiante'"<<endl;          // Consulta todavia no definida, favor de ponerla porfis
        cout<<"9. Salir"<<endl;
        cout<<"Elija alguna de las opciones mostradas en el menu: "<<endl;

        cout<<"Opcion: ";
        cin>>opcion;

        system("CLS");                                      // Limpia la pantalla para poner en primera plana la opcion seleccionada
        switch (opcion){
    case 1:
        cout<<"Alta del automovil y del piloto"<<endl;
        for (int i = 0; i < TAMComp; i++){
            /* Datos del piloto*/
            cout<<"Piloto No. "<<i+1<<": "<<pilot[i].nombre<<endl;
            cout<<"Fecha de nacimiento: "<<pilot[i].nacimiento.dia<<"/"<<pilot[i].nacimiento.mes<<"/"<<pilot[i].nacimiento.anio<<endl;
            cout<<"Edad: "<<pilot[i].edad<<endl;
            cout<<"Pais: "<<pilot[i].pais<<endl;

            /* Datos del vehículo del piloto*/
            cout<<"Direccion: "<<pilot[i].direccion<<endl;
            cout<<"Pilotea el vehiculo: "<<vehiculos[i].marca<<" "<<vehiculos[i].modelo<<endl;
            cout<<"Escuderia: "<<vehiculos[i].escuderia<<endl;
            cout<<"Identificacion: "<<vehiculos[i].identificacion<<endl;
            cout<<endl;

        }
        
        break;
    case 2:
        cout<<"Buscar un automovil"<<endl;
        buscarVehiculo(vehiculos, pilot, TAMComp);
        break;
    case 3:
        cout<<"Listar los automoviles por escuderia"<<endl;

        break;
    case 4:
        cout<<"Listar los automoviles por pais"<<endl;

        break;
    case 5:
        cout<<"Lugar en los que ha quedado un determinado automovil"<<endl;

        break;
    case 6:
        cout<<"Numero de automoviles en el sistema"<<endl;

        break;
    case 7:
        cout<<"Consulta de estudiante"<<endl;

        break;
    case 8:
        cout<<"Consulta de estudiante"<<endl;
        
        break;
    case 9:
        cout<<"Usted ha seleccionado salir, buen dia!"<<endl;
        break;
    
    default:
        cout<<"Opcion no valida, intentelo de nuevo"<<endl;
        break;
        }
    }
    
    
    return 0;
}




void buscarVehiculo(vehiculo[], piloto[], int const TAMComp){
    /* Para buscar un vehiculo de acuerdo a su identificador*/
    string identificador = " ";
    cout<<"Introduzca la identificacion del vehiculo: ";
    cin>>identificador;
    for (int i = 0; i < TAMComp; i++){
        if (vehiculos[i].identificacion == identificador){
            cout<<"El coche identificado fue un: "<<vehiculos[i].marca<<vehiculos[i].modelo<<endl;
            cout<<"Cuyo dueño es: "<<pilot[i].nombre;

        }
        
    }
    

}
