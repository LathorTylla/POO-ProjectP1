#pragma once

class Vector4
{
public:
    // Constructor por defecto
    Vector4() = default;

    // Constructor que inicializa las coordenadas X, Y, Z y W del vector
    Vector4(float x, float y, float z, float w);

    // Destructor
    ~Vector4();

    // Métodos para operaciones matemáticas

    // Realiza la suma de dos vectores y devuelve el resultado
    Vector4 Suma3(Vector4 _Vector4); // Suma

    // Realiza la resta de dos vectores y devuelve el resultado
    Vector4 Resta3(Vector4 _Vector4); // Resta

    // Realiza la multiplicación de dos vectores y devuelve el resultado
    Vector4 Multiplicacion3(Vector4 _Vector4); // Multiplicación

    // Realiza la división de dos vectores y devuelve el resultado, verifica si el divisor no es cero
    Vector4 Division3(Vector4 _Vector4); // División

    // Normaliza el vector y devuelve el resultado, verificando la magnitud
    Vector4 Normalizacion3(Vector4 _Vector4); // Normalización

    // Calcula la magnitud del vector
    float Magnitud3(); // Magnitud

    // Calcula el producto punto entre dos vectores y devuelve el resultado
    float ProductoPunto3(Vector4 _Vector4); // Producto punto

    // Calcula el producto cruz entre dos vectores
    float PuntoCruz3(Vector4 _Vector4); // Producto cruz

    // Variables para almacenar las coordenadas x, y, z y w del vector
    float X;
    float Y;
    float Z;
    float W;
};
