#pragma once

class Vector2
{
public:
    // Constructor por defecto
    Vector2() = default;

    // Constructor que toma coordenadas x e y como parámetros
    Vector2(float x, float y);

    // Destructor
    ~Vector2();

    // Métodos para operaciones matemáticas

    // Suma dos vectores y devuelve el resultado
    Vector2 Suma(Vector2 _Vector2);

    // Resta dos vectores y devuelve el resultado
    Vector2 Resta(Vector2 _Vector2);

    // Multiplica dos vectores y devuelve el resultado
    Vector2 Multiplicacion(Vector2 _Vector2);

    // Divide dos vectores y devuelve el resultado
    Vector2 Division(Vector2 _Vector2);

    // Normaliza el vector y devuelve el resultado
    Vector2 Normalizacion(Vector2 _Vector2);

    // Calcula la magnitud del vector
    float Magnitud();

    // Calcula el producto punto entre dos vectores
    float ProductoPunto(Vector2 _Vector2);

    // Calcula el producto cruz entre dos vectores
    float PuntoCruz(Vector2 _Vector2);

    // Variables para almacenar los valores
    float X;
    float Y;
};
