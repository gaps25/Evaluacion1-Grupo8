#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombreUsuario;

    cout << "==================================================" << endl;
    cout << "   BIENVENIDO A LA EVALUACION DEL GRUPO 8         " << endl; 
    cout << "==================================================" << endl;
    cout << "Entorno virtualizado universal ejecutandose en Docker.\n" << endl;
    
    // Le pedimos al usuario que ingrese su nombre
    cout << "Por favor, ingresa tu nombre para continuar: ";
    cin >> nombreUsuario; // Guardamos lo que escriba el usuario en la variable nombreUsuario
    
    // Saludamos al usuario con su nombre y confirmamos que no hubo errores
    cout << "\nHola, " <<nombreUsuario << " El programa se ha ejecutado sin errores." << endl;
    cout << "Compilado con GCC dentro de un contenedor Linux Aislado.\n" << endl;

    return 0;
}