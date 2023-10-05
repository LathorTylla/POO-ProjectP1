#include "Vector2.h"
#include "Commons.h"

// Constructor que inicializa las coordenadas X e Y del vector
Vector2::Vector2(float x, float y)
    : X(x), Y(y)
{
}

// Destructor
Vector2::~Vector2()
{
}

// Realiza la suma de dos vectores y devuelve el resultado
Vector2 Vector2::Suma(Vector2 _Vector2)
{
    return Vector2(X + _Vector2.X, Y + _Vector2.Y);
}

// Realiza la resta de dos vectores y devuelve el resultado
Vector2 Vector2::Resta(Vector2 _Vector2)
{
    return Vector2(X - _Vector2.X, Y - _Vector2.Y);
}

// Realiza la multiplicación de dos vectores y devuelve el resultado
Vector2 Vector2::Multiplicacion(Vector2 _Vector2)
{
    return Vector2(X * _Vector2.X, Y * _Vector2.Y);
}

// Realiza la división de dos vectores y devuelve el resultado, verifica si el divisor no es cero
Vector2 Vector2::Division(Vector2 _Vector2)
{
    if (_Vector2.X != 0 && _Vector2.Y != 0)
    {
        return Vector2(X / _Vector2.X, Y / _Vector2.Y);
    }
    else
    {
        return Vector2(0, 0);
    }
}

// Calcula el producto cruz entre dos vectores y devuelve el resultado
float Vector2::PuntoCruz(Vector2 _Vector2)
{
    return (X * _Vector2.Y - Y * _Vector2.X);
}

// Normaliza el vector y devuelve el resultado, verificando la magnitud
Vector2 Vector2::Normalizacion(Vector2 _Vector2)
{
    float magnitud = Magnitud();
    if (magnitud != 0)
    {
        return Vector2(X / magnitud, Y / magnitud);
    }
    else
    {
        return Vector2(0, 0);
    }
}

// Calcula la magnitud del vector
float Vector2::Magnitud()
{
    return sqrt(X * X + Y * Y);
}

// Calcula el producto punto entre dos vectores y devuelve el resultado
float Vector2::ProductoPunto(Vector2 _Vector2)
{
    return (X * _Vector2.X + Y * _Vector2.Y);
}
