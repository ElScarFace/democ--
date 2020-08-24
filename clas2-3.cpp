#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{	int x, y, *p, *q;
	p = &x;
	*p = 12;
	q = &y;
	*q = 23;
	cout << *p <<""<<*q<<endl;
	*p = *q;
	cout << *p <<""<<*q<<endl;
	q = NULL;
	cout<<*p<<endl;
	cout<<x<<""<<y<<endl;
    getch();
    return 0;
}
