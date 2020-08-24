#include <stdio.h>
#include <conio.h>
int main()
{
int e_c;
int can_pago=0,ed,c_h;
printf("ingrese cantidad de hijos:");
scanf("%d", &c_h);
printf("ingrese estado civil de ma madre(1 es viduda, 2 es casada: ");
scanf("%d", &e_c);
for(int c=1;c<=c_h;c++)
{
    printf("ingrese edad de hijos: ");
    scanf("%d", &ed);
    if(ed>=6&&ed<=18)
    {
        can_pago=can_pago+10;
    }
}
if(c_h<=2){
    can_pago=can_pago+70;
}
else
{
    if(c_h<=5)
    {
        can_pago=can_pago+90;
    }
    else
    {
        can_pago=can_pago+120;
    }
    
}
if (e_c==1){
    can_pago=can_pago+80;
}
printf("el monto a recibir mensual es:%d", can_pago);
getch();

}