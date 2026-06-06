#include <iostream>
#include <string>
// Integrante 1: Gabriel Palacios - Cedula V-31488323
// Integrante 2: Darwin Martinez - Cedula V-30322556
// Integrante 3: Victor Carpio - Cedula V-31755666
// Integrante 4: Hender Mendez - Cedula V-31092350
// Integrante 5: Brayan Azuaje - Cedula V-30542972

using namespace std;

int main() {
    
    // Declaramos una variable de tipo cadena
    string nombreUsuario;
    
    // Le damos un mensaje de bienvenida al usuario
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
