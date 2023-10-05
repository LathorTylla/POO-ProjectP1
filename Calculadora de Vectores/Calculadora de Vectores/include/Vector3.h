#pragma once

class Vector3
{
public:
    // Constructor por defecto
    Vector3() = default;

    // Constructor que toma coordenadas x, y y z como parámetros
    Vector3(float x, float y, float z);

    // Destructor
    ~Vector3();

    // Métodos para operaciones matemáticas

    // Suma dos vectores y devuelve el resultado
    Vector3 Suma2(Vector3 _Vector3);

    // Resta dos vectores y devuelve el resultado
    Vector3 Resta2(Vector3 _Vector3);

    // Multiplica dos vectores y devuelve el resultado
    Vector3 Multiplicacion2(Vector3 _Vector3);

    // Divide dos vectores y devuelve el resultado
    Vector3 Division2(Vector3 _Vector3);

    // Normaliza el vector y devuelve el resultado
    Vector3 Normalizacion2(Vector3 _Vector3);

    // Calcula la magnitud del vector
    float Magnitud2();

    // Calcula el producto punto entre dos vectores
    float ProductoPunto2(Vector3 _Vector3);

    // Calcula el producto cruz entre dos vectores
    float PuntoCruz2(Vector3 _Vector3);

    // Variables para almacenar las coordenadas x, y y z del vector
    float X;
    float Y;
    float Z;
};
