#include "Vector3.h"
#include "Commons.h"

// Constructor que inicializa las coordenadas X, Y y Z del vector
Vector3::Vector3(float x, float y, float z)
    : X(x), Y(y), Z(z)
{

}

// Destructor
Vector3::~Vector3()
{

}

// Realiza la suma de dos vectores y devuelve el resultado
Vector3 Vector3::Suma2(Vector3 _Vector3) // Suma
{
    return Vector3(X + _Vector3.X, Y + _Vector3.Y, Z + _Vector3.Z);
}

// Realiza la resta de dos vectores y devuelve el resultado
Vector3 Vector3::Resta2(Vector3 _Vector3) // Resta
{
    return Vector3(X - _Vector3.X, Y - _Vector3.Y, Z - _Vector3.Z);
}

// Realiza la multiplicación de dos vectores y devuelve el resultado
Vector3 Vector3::Multiplicacion2(Vector3 _Vector3) // Multiplicación
{
    return Vector3(X * _Vector3.X, Y * _Vector3.Y, Z * _Vector3.Z);
}

// Realiza la división de dos vectores y devuelve el resultado, verifica si el divisor no es cero
Vector3 Vector3::Division2(Vector3 _Vector3) // División
{
    if (_Vector3.X != 0 && _Vector3.Y != 0 && _Vector3.Z != 0)
    {
        return Vector3(X / _Vector3.X, Y / _Vector3.Y, Z / _Vector3.Z);
    }
    else
    {
        return Vector3(0, 0, 0);
    }
}

// Calcula el producto punto entre dos vectores y devuelve el resultado
float Vector3::ProductoPunto2(Vector3 _Vector3) // Producto punto
{
    return (X * _Vector3.X + Y * _Vector3.Y + Z * _Vector3.Z);
}

// Normaliza el vector y devuelve el resultado, verificando la magnitud
Vector3 Vector3::Normalizacion2(Vector3 _Vector3) // Normalización
{
    float magnitud2 = Magnitud2();
    if (magnitud2 != 0)
    {
        return Vector3(X / magnitud2, Y / magnitud2, Z / magnitud2);
    }
    else
    {
        return Vector3(0, 0, 0);
    }
}

// Calcula la magnitud del vector
float Vector3::Magnitud2()
{
    return sqrt(X * X + Y * Y + Z * Z);
}

float Vector3::PuntoCruz2(Vector3 _Vector3)
{
    return (Y * _Vector3.Z - Z * _Vector3.Y, Z * _Vector3.X - X * _Vector3.Z, X * _Vector3.Y - Y * _Vector3.X);
}


