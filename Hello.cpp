//============================================================================
// Name        : Hello.cpp
// Author      : HoaNP
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef long long ll;
typedef long double ld;

ll add(ll a, ll b){
	return(a+b);
}

ll multiply(ll a, ll b){
	return(a*b);
}

// Nhat - ham tru
ll tru(ll a, ll b)
	{
		return (a-b);
	}
// Nhat - ham chia
ll chia(ll a, ll b)
	{
		return (a/b);
	}
// Nhat - ham giai thua
ll giaithua(int n)
	{
		ll result=1;
    		for (int i=2;i<=n;i++) result*=i;
    		return result;
	}
//thinh- ham mu
double pow(int a, int b)
{
	double res =1;
	for(int i = 0; i< b; i++)
		res = res*a;
	return res;	
}
//thinh- ham tinh can bac 2 dung PP Newton
double sqrt(int a)
{
	double xn, res;
	xn = a/2;
	do 
	{
		res = xn;
		xn = 0.5 * (xn + a/xn);
	} while ((xn-res) > 0.0001||(xn-res) < -0.0001);
	return res;
}
/**
 * This is main function
 */
 
int main() {
	ll a = 21;
	ll b = 170;
	cout << a << " + " << b << " = " << add(a,b) << endl;
	cout << a << " * " << b << " = " << multiply(a,b) << endl;
	cout << a << " - " << b << " = " << tru(a,b) << endl;
	cout << a << " / " << b << " = " << chia(a,b) << endl;
	cout << "Giai thua cua" << a << "la :" << giaithua(a) << endl;
	return 0;
}
