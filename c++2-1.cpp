#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
    #include <math.h>
#else
    #include <iostream>
    #include <cstdlib>
    #include <cmath>
    using namespace std;
#endif

int main (void)
{
    int i;
    float salario_inicial, salario_recibido, total,todo;
    for (i=1; i<=6; i++)
    {
        cout << "PROCESO " << i << endl;
        salario_inicial=1500;
        total=i;
        salario_recibido=salario_inicial*pow(1.1,total);
        todo=salario_recibido*0.6;



        cout << "Valor de salario inicial: " << salario_inicial << endl;
        cout << "Valor de salario recibido: " << salario_recibido << endl;
        cout << endl;
    }
    
    return 0;
}