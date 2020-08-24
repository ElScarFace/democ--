
    #include <iostream>
    #include <cstdlib>
    using namespace std;

int main (void)
{
    int forma_de_pago, i, n, tipo_de_hamburguesa;
    float cargo, costo, pago;
    pago = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cin.get();
    for (i=1; i<=n; i++)
    {
        cout << "PROCESO " << i << endl;
        cout << "Seleccione el valor de tipo de hamburguesa." << endl;
        cout << "\t1.- S sencilla" << endl;
        cout << "\t2.- D doble" << endl;
        cout << "\t3.- T triples" << endl;
        cout << "\t: ";
        do {
            cin >> tipo_de_hamburguesa;
            cin.get();
            if (tipo_de_hamburguesa<1||tipo_de_hamburguesa>3)
            {
                cout << "Valor incorrecto. Ingr\202selo nuevamente.: ";
            }
        } while (tipo_de_hamburguesa<1||tipo_de_hamburguesa>3);
        costo=0;
        if(tipo_de_hamburguesa==1)
            costo=20;
        if(tipo_de_hamburguesa==2)
            costo=25;
        if(tipo_de_hamburguesa==3)
            costo=28;
        cout << "Seleccione el valor de forma de pago." << endl;
        cout << "\t1.- Efectivo" << endl;
        cout << "\t2.- Tarjeta" << endl;
        cout << "\t: ";
        do {
            cin >> forma_de_pago;
            cin.get();
            if (forma_de_pago<1||forma_de_pago>2)
            {
                cout << "Valor incorrecto. Ingr\202selo nuevamente.: ";
            }
        } while (forma_de_pago<1||forma_de_pago>2);
        cargo=forma_de_pago==1?0:costo*0.05;
        pago=pago+costo+cargo;
        cout << "Valor de cargo: " << cargo << endl;
        cout << "Valor de costo: " << costo << endl;
        cout << endl;
    }
    cout << "Valor de pago: " << pago << endl;
    
    return 0;
}