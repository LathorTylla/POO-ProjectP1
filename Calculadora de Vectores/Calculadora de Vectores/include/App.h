#pragma once
#include "Commons.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

// Clase para el menú
class Menu
{
public:
    // Constructores y destructor
    Menu();
    ~Menu();
    Menu(int opcion);

    // Métodos del menú
    void MostrarMenu(); // Muestra el menú principal
    void MenuVector2(); // Menú para operaciones con Vector2
    void MenuVector3(); // Menú para operaciones con Vector3
    void MenuVector4(); // Menú para operaciones con Vector4

    // Variables de entrada de usuario
    int opcion;

    // Variables para almacenar datos ingresados por el usuario
    float Vx1;
    float Vx2;
    float Vy1;
    float Vy2;
    float Vz1;
    float Vz2;
    float Vw1;
    float Vw2;

    // Variables para almacenar resultados de operaciones
    float productoPunto;
    float magnitud;
    float puntoCruz;
    float resultadoVec3;

    // Objetos de las clases Vector para realizar operaciones
    Vector2 Vec1;
    Vector2 Vec2;
    Vector2 resultado; 
    Vector2 resultado01;

    Vector3 Vec3;
    Vector3 Vec4;
    Vector3 resultado2;
    Vector3 resultado02;

    Vector4 Vec5;
    Vector4 Vec6;
    Vector4 resultado3;
    Vector4 resultado03;

private:
    bool DatosIngresados; // Indicador de si se han ingresado datos
};

// Clase de la aplicación principal
class App
{
public:
    // Constructor de la aplicación
    App();

    // Método para iniciar la aplicación
    void Iniciar();
};
