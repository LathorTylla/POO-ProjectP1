#include "Vector4.h"
#include <cmath>

// Constructor que inicializa las coordenadas X, Y, Z y W del vector
Vector4::Vector4(float x, float y, float z, float w)
    : X(x), Y(y), Z(z), W(w)
{
}

// Destructor
Vector4::~Vector4()
{
}

// Realiza la suma de dos vectores y devuelve el resultado
Vector4 Vector4::Suma3(Vector4 _Vector4) // Suma
{
    return Vector4(X + _Vector4.X, Y + _Vector4.Y, Z + _Vector4.Z, W + _Vector4.W);
}

// Realiza la resta de dos vectores y devuelve el resultado
Vector4 Vector4::Resta3(Vector4 _Vector4) // Resta
{
    return Vector4(X - _Vector4.X, Y - _Vector4.Y, Z - _Vector4.Z, W - _Vector4.W);
}

// Realiza la multiplicación de dos vectores y devuelve el resultado
Vector4 Vector4::Multiplicacion3(Vector4 _Vector4) // Multiplicación
{
    return Vector4(X * _Vector4.X, Y * _Vector4.Y, Z * _Vector4.Z, W * _Vector4.W);
}

// Realiza la división de dos vectores y devuelve el resultado, verifica si el divisor no es cero
Vector4 Vector4::Division3(Vector4 _Vector4) // División
{
    if (_Vector4.X != 0 && _Vector4.Y != 0 && _Vector4.Z != 0 && _Vector4.W != 0)
    {
        return Vector4(X / _Vector4.X, Y / _Vector4.Y, Z / _Vector4.Z, W / _Vector4.W);
    }
    else
    {
        return Vector4(0, 0, 0, 0);
    }
}

// Calcula el producto punto entre dos vectores y devuelve el resultado
float Vector4::ProductoPunto3(Vector4 _Vector4) // Producto punto
{
    return (X * _Vector4.X + Y * _Vector4.Y + Z * _Vector4.Z + W * _Vector4.W);
}

// Normaliza el vector y devuelve el resultado, verificando la magnitud
Vector4 Vector4::Normalizacion3(Vector4 _Vector4) // Normalización
{
    float magnitud3 = Magnitud3();
    if (magnitud3 != 0)
    {
        return Vector4(X / magnitud3, Y / magnitud3, Z / magnitud3, W / magnitud3);
    }
    else
    {
        return Vector4(0, 0, 0, 0);
    }
}

// Calcula la magnitud del vector
float Vector4::Magnitud3() // Magnitud
{
    return sqrt(X * X + Y * Y + Z * Z + W * W);
}

// Calcula el producto cruz entre dos vectores
float Vector4::PuntoCruz3(Vector4 _Vector4) // Producto cruz
{
    return (Y * _Vector4.Z - Z * _Vector4.Y, Z * _Vector4.X - X * _Vector4.Z, X * _Vector4.Y - Y * _Vector4.X, Y * _Vector4.W - W * _Vector4.Y);
}
