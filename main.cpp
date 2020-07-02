#include <iostream>
using namespace std;
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
///Agregar .h///

///Menus de las opciones///
#include"M_Articulos.h"
#include"M_Trabajadores.h"
#include"M_Clientes.h"
#include"M_Ventas.h"
#include"M_Reparaciones.h"
///----------///
int main()
{
    int opc;
    while(true)
    {
        system("cls");
        cout<<"Menu Principal"<<endl;
        cout<<"1. Articulos"<<endl;
        cout<<"2. Trabajador"<<endl;
        cout<<"3. Clientes"<<endl;
        cout<<"4. Ventas"<<endl;
        cout<<"5. Reparaciones"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Ingrese la opcion: "<<endl;
        cin>>opc;
        switch(opc)
        {
        case 1:
            menu_articulos();
            break;
        case 2:
            menu_trabajadores();
            break;
        case 3:
            menu_clientes();
            break;
        case 4:
            menu_ventas();
            break;
        case 5:
            menu_reparacione();
            break;
        case 6:
            return 0;
        default:
            cout<<"Opcion incorrecta. Presione una tecla para continuar";
            system("pause>null");
            break;
        }
    }
    return 0;
}

