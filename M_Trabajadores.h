#ifndef M_TRABAJADORES_H_INCLUDED
#define M_TRABAJADORES_H_INCLUDED

void menu_trabajadores(){

int opc;
    while(true)
    {
        system("cls");
        cout<<"Menu Trabajadores"<<endl;
        cout<<"1. Alta"<<endl;
        cout<<"2. baja"<<endl;
        cout<<"3. Modificasion"<<endl;
        cout<<"4. Listado"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingrese la opcion: "<<endl;
        cin>>opc;
        switch(opc)
        {
        case 1:
            ///M_TRA_alta();
            break;
        case 2:
            ///M_TRA_baja();
            break;
        case 3:
            ///M_TRA_Modificasion();
            break;
        case 4:
            ///M_TRA_listado();
            break;
        case 5:
            return ;
        default:
            cout<<"Opcion incorrecta. Presione una tecla para continuar";
            system("pause>null");
            break;
        }
    }

};

#endif // M_TRABAJADORES_H_INCLUDED
