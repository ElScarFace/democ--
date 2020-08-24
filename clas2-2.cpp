#include <iostream>
#include <conio.h>
using namespace std;
int main(void){

	int *p, *q, x, y;

	p = &x;
	*p = 14;
	q = p;
	cout << *p << "" << *q << endl;
	q = NULL;
	cout << x << "" << y << endl;
   getch();
    return 0;
}
