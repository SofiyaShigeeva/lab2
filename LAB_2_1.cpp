
#include <iostream>
#include <stdlib.h>
#include <cmath>
 
using namespace std;
 
double fib(int n) 
{
	double a=0,b=1;
    for (int i=2;i<=n;)
    {
		a=a+b;
		b=a+b;
		i+=2;
	}
	if (n%2==0) return a;
	else return b;
}
 
int main()
{
	double x,y;
	x=fib(54);
	y=fib(55);
	cout << "x= " << x << ", y=" << y <<  endl;
	cout << (1/(pow(y,6)-3*x*pow(y,5)+5*pow(x,3)*pow(y,3)-3*pow(x,5)*y-pow(x,6))) << endl;
}

