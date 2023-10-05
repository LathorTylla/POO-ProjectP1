#include "Commons.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "App.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

Menu::Menu(int opcion)
    : opcion(opcion)
{
}

void Menu::MostrarMenu()
{
    do
    {
        cout << "******** Calculadora de vectores ********" << endl;
        cout << "Determine el tamaño del vector" << endl;
        cout << endl;
        cout << "1- Vector 2x2 " << endl;
        cout << "2- Vector 3x3" << endl;
        cout << "3- Vector 4x4" << endl;
        cout << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            MenuVector2();
            break;
        case 2:
            MenuVector3();
            break;
        case 3:
            MenuVector4();
            break;
        default:
            cout << "La opción no es válida, por favor elija una opción válida" << endl;
            cout << endl;
            break;
        }

    } while (opcion != 3);
}

void Menu::MenuVector2()
{
    DatosIngresados = false;

    while (opcion)
    {
        cout << "***********************************************" << endl;
        cout << "Seleccione la operacion a realizar" << endl;
        cout << endl;
        cout << "1- Ingresar valores a los vectores (2x2)" << endl;
        cout << "2- Suma" << endl;
        cout << "3- Resta" << endl;
        cout << "4- Multiplicacion " << endl;
        cout << "5- División" << endl; 
        cout << "6- Punto Cruz" << endl;
        cout << "7- Producto Punto" << endl;
        cout << "8- Magnitud" << endl;
        cout << "9- Normalizacion" << endl; 
        cout << "0- Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "***********************************************" << endl;
            cout << "Ingrese los datos del vector 1" << endl;
            cin >> Vx1;
            cin >> Vy1;
            Vec1 = Vector2(Vx1, Vy1);

            cout << "Ingrese los datos del vector 2" << endl;
            cin >> Vx2;
            cin >> Vy2;
            Vec2 = Vector2(Vx2, Vy2);
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;

            DatosIngresados = true;
            break;

        case 2:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            resultado = Vec1.Suma(Vec2); // Almacena el resultado en 'resultado'
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Resultado de la suma: (" << resultado.X << ", " << resultado.Y << ")" << endl; // Usa 'resultado'
            break;

        case 3:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            resultado = Vec1.Resta(Vec2); // Almacena el resultado en 'resultado'
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Resultado de la resta: (" << resultado.X << ", " << resultado.Y << ")" << endl; // Usa 'resultado'
            break;

        case 4:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            resultado = Vec1.Multiplicacion(Vec2); // Multiplicación de dos vectores
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "Vector 1: < " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "Vector 2: < " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Resultado de la multiplicación: (" << resultado.X << ", " << resultado.Y << ")" << endl; // Usa 'resultado' y muestra ambos vectores
            break;

        case 5:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            resultado = Vec1.Division(Vec2); // Division de dos vectores
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Resultado de la división: (" << resultado.X << ", " << resultado.Y << ")" << endl;
            break;

        case 6: //Punto cruz

            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            puntoCruz = Vec1.PuntoCruz(Vec2);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Punto Cruz:" << puntoCruz << endl;
            break;

        case 7:  //Producto Punto
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            productoPunto = Vec1.ProductoPunto(Vec2);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Resultado del producto punto: " << productoPunto << endl;
            break;

        case 8: //Magnitud
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Los vectores son: " << endl;
                cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
                cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            magnitud = Vec1.Magnitud();
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Magnitud del vector: " << magnitud << endl;
            break;

        case 9: //Normalizacion
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado = Vec1.Normalizacion(Vec2); // Normaliza Vec1 y actualiza Vec2
            resultado01 = Vec2.Normalizacion(Vec1);
            
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << " >" << endl;
            cout << "Vector 1 normalizado: (" << resultado.X << ", " << resultado.Y << ")" << endl;
            cout << "Vector 2 normalizado: (" << resultado01.X << ", " << resultado01.Y << ")" << endl; // Mostrar Vec2 normalizado
            break;

        }
    }
}

void Menu::MenuVector3()
{
    DatosIngresados = false;

    while (opcion)
    {
        cout << "***********************************************" << endl;
        cout << "Seleccione la operacion a realizar" << endl;
        cout << endl;
        cout << "1- Ingresar valores a los vectores (3x3)" << endl;
        cout << "2- Suma" << endl;
        cout << "3- Resta" << endl;
        cout << "4- Multiplicacion " << endl;
        cout << "5- División" << endl; // Nueva opción para la división
        cout << "6- Punto Cruz" << endl;
        cout << "7- Producto Punto" << endl;
        cout << "8- Magnitud" << endl;
        cout << "9- Normalizacion" << endl; // La opción 9 es para normalización
        cout << "0- Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "***********************************************" << endl;
            cout << "Ingrese los datos del vector 1" << endl;
            cin >> Vx1;
            cin >> Vy1;
            cin >> Vz1;
            Vec3 = Vector3(Vx1, Vy1,Vz1);

            cout << "Ingrese los datos del vector 2" << endl;
            cin >> Vx2;
            cin >> Vy2;
            cin >> Vz2;
            Vec4 = Vector3(Vx2, Vy2, Vz2);
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", "<< Vz1 <<" >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", "<< Vz2 <<" >" << endl;

            DatosIngresados = true;

            break;
        case 2: //Suma
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado2 = Vec3.Suma2(Vec4);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Resultado de la suma: (" << resultado2.X << ", " << resultado2.Y <<", "<<resultado2.Z<<")" << endl;

            break;
        case 3://Resta
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado2 = Vec3.Resta2(Vec4);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Resultado de la resta: (" << resultado2.X << ", " << resultado2.Y << ", " << resultado2.Z << ")" << endl;

            break;
        case 4:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado2 = Vec3.Multiplicacion2(Vec4); // Multiplicación de dos vectores
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Resultado de la multiplicacion: (" << resultado2.X << ", " << resultado2.Y << ", " << resultado2.Z << ")" << endl;

            break;
        case 5:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            resultado2 = Vec3.Division2(Vec4); // Multiplicación de dos vectores
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Resultado de la division: (" << resultado2.X << ", " << resultado2.Y << ", " << resultado2.Z << ")" << endl;

            break;
        case 6:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            puntoCruz = Vec3.PuntoCruz2(Vec4);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Punto Cruz: " << puntoCruz << endl;

            break;

        case 7:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            productoPunto = Vec3.ProductoPunto2(Vec4);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Producto punto: " << productoPunto << endl;


            break;
        case 8:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            magnitud = Vec3.Magnitud2();
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Magnitud del vector: " << magnitud << endl;

            break;
        case 9:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado2 = Vec3.Normalizacion2(Vec4);
            resultado02 = Vec4.Normalizacion2(Vec3);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << " >" << endl;
            cout << "Vector 1 normalizado: (" << resultado2.X << ", " << resultado2.Y << ")" << endl;
            cout << "Vector 2 normalizado: (" << resultado02.X << ", " << resultado02.Y << ")" << endl;

            break;
        case 0:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }

            break;

        }
    }
}

void Menu::MenuVector4()
{
    DatosIngresados = false;

    while (opcion)
    {

        cout << "***********************************************" << endl;
        cout << "Seleccione la operacion a realizar" << endl;
        cout << endl;
        cout << "1- Ingresar valores a los vectores (4x4)" << endl;
        cout << "2- Suma" << endl;
        cout << "3- Resta" << endl;
        cout << "4- Multiplicacion " << endl;
        cout << "5- División" << endl; // Nueva opción para la división
        cout << "6- Punto Cruz" << endl;
        cout << "7- Producto Punto" << endl;
        cout << "8- Magnitud" << endl;
        cout << "9- Normalizacion" << endl; // La opción 9 es para normalización
        cout << "0- Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:

            cout << "***********************************************" << endl;
            cout << "Ingrese los datos del vector 1" << endl;
            cin >> Vx1;
            cin >> Vy1;
            cin >> Vz1;
            cin >> Vw1;
            Vec5 = Vector4(Vx1, Vy1, Vz1, Vw1);

            cout << "Ingrese los datos del vector 2" << endl;
            cin >> Vx2;
            cin >> Vy2;
            cin >> Vz2;
            cin >> Vw2;
            Vec6 = Vector4(Vx2, Vy2, Vz2, Vw2);
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;

            DatosIngresados = true;

            break;

        case 2:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado3 = Vec5.Suma3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Resultado de la suma: (" << resultado3.X << ", " << resultado3.Y << ", " << resultado3.Z << ", " << resultado3.W << ")" << endl;
            break;
        case 3:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado3 = Vec5.Resta3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Resultado de la resta: (" << resultado3.X << ", " << resultado3.Y << ", " << resultado3.Z << ", " << resultado3.W << ")" << endl;
            break;
        case 4:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
             
            }
            resultado3 = Vec5.Multiplicacion3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Resultado de la multiplicacion: (" << resultado3.X << ", " << resultado3.Y << ", " << resultado3.Z << ", " << resultado3.W << ")" << endl;

            break;
        case 5:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado3 = Vec5.Division3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Resultado de la division: (" << resultado3.X << ", " << resultado3.Y << ", " << resultado3.Z << ", " << resultado3.W << ")" << endl;
            break;
        case 6:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            puntoCruz = Vec5.PuntoCruz3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Punto Cruz: " << puntoCruz << endl;
            break;
        case 7:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            productoPunto = Vec5.ProductoPunto3(Vec6);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Producto Punto: " << productoPunto << endl;
            break;
        case 8:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            magnitud = Vec5.Magnitud3();
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Magnitud: " << magnitud << endl;
            break;
        case 9:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            resultado3 = Vec5.Normalizacion3(Vec6);
            resultado03 = Vec6.Normalizacion3(Vec5);
            cout << "***********************************************" << endl;
            cout << "Los vectores son: " << endl;
            cout << "< " << Vx1 << ", " << Vy1 << ", " << Vz1 << ", " << Vw1 << " >" << endl;
            cout << "< " << Vx2 << ", " << Vy2 << ", " << Vz2 << ", " << Vw2 << " >" << endl;
            cout << "Vector 1 normalizado: (" << resultado3.X << ", " << resultado3.Y << ", " << resultado3.Z << ", " << resultado3.W << " )" << endl;
            cout << "Vector 2 normalizado: (" << resultado03.X << ", " << resultado03.Y << ", " << resultado03.Z << ", " << resultado03.W << " )" << endl;

            break;
        case 0:
            if (DatosIngresados == false)
            {
                cout << "***********************************************" << endl;
                cout << "Favor de primero asignar los valores a los vectores " << endl;
                break;
            }
            break;
        }

    }
}


App::App()
{
}

void App::Iniciar()
{
    Menu menu;
    menu.MostrarMenu();
}