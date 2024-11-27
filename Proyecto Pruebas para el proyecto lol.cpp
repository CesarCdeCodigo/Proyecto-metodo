/* Espacio para pruebas de cosas del proyecto */


#include <iostream>
#include <string.h>
using namespace std;

struct fecha{
    int dia;
    int mes;
    int anio;
};


/* El tamaño de la competición, definida por una constante al principio del programa */
int const TAMComp=20;

struct piloto{
    string nombre;
    struct fecha nacimiento;
    string pais;
    string direccion;
}pilot[TAMComp];

void leerPiloto(piloto[], int const TAMComp);

struct vehiculo{
    string identificacion;
    string nombreVehiculo;
    string marca;
    string escuderia;
    struct fecha adquisicion;
}vehiculos[TAMComp];

void leerVehiculo(vehiculo[], int const TAMComp);

void buscarVehiculo(vehiculo[], piloto[], int const TAMComp);



int main(){
    cout<<"Pruebas para el proyecto lol\n";
    leerPiloto(pilot, TAMComp);
    leerVehiculo(vehiculos, TAMComp);
    buscarVehiculo(vehiculos, pilot, TAMComp);

}



void leerPiloto(piloto[], int const TAMComp){
    /* Para leer los datos de los pilotos en orden*/
    for (int i = 0; i<TAMComp; i++){
        cout<<"Introduzca el nombre del piloto "<<i+1<<": "; 
        getline(cin, pilot[i].nombre);

        cout<<"Escriba su fecha de nacimiento: "<<endl;
        cout<<"Dia: "; cin>>pilot[i].nacimiento.dia;
        cout<<"Mes: "; cin>>pilot[i].nacimiento.mes;
        cout<<"Anio: "; cin>>pilot[i].nacimiento.anio;
        fflush(stdin);

        cout<<"Escriba donde nacio: ";
        getline(cin, pilot[i].pais);

        cout<<"Señale su dirección: \n";                       
        getline(cin, pilot[i].direccion);

    }
}

void leerVehiculo(vehiculo[], int const TAMComp){
    /* Para leer los datos del vehiculo con respecto a la posicion del piloto*/
    for (int i = 0; i<TAMComp; i++){
        cout<<"Introduzca la identificacion del vehiculo del piloto "<<i+1<<": "; 
        getline(cin, vehiculos[i].identificacion);

        cout<<"Escriba su nombre: ";
        getline(cin, vehiculos[i].nombreVehiculo);

        cout<<"Señale su marca: \n";                       
        getline(cin, vehiculos[i].marca);

        cout<<"A que escuderia pertenece: \n";
        getline(cin, vehiculos[i].escuderia);

        cout<<"Escriba su fecha de adquisicion: \n";
        cout<<"Dia: "; cin>>vehiculos[i].adquisicion.dia;
        cout<<"Dia: "; cin>>vehiculos[i].adquisicion.mes;
        cout<<"Dia: "; cin>>vehiculos[i].adquisicion.anio;
        fflush(stdin);

    }
}

void buscarVehiculo(vehiculo[], piloto[], int const TAMComp){
    /* Para buscar un vehiculo de acuerdo a su identificador*/
    string identificador = " ";
    cout<<"Introduzca la identificacion del vehiculo: ";
    cin>>identificador;
    for (int i = 0; i < TAMComp; i++){
        if (vehiculos[i].identificacion == identificador){
            cout<<"El coche identificado fue un: "<<vehiculos[i].marca<<vehiculos[i].nombreVehiculo<<endl;
            cout<<"Cuyo dueño es: "<<pilot[i].nombre;
        }
        
    }
    

}