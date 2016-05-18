//============================================================================
// Name        : Hello.cpp
// Author      : HoaNP
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

/**
 * HoaNP
 * add function
 * @param: long long a, long long b
 * @return: a + b
 */
ll add(ll a, ll b){
	return(a+b);
}

/**
 * HoaNP
 * multify function
 * @param: long long a, long long b
 * @return: a * b
 */
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
	
/**
 * HoaNP
 * Ham giai thua
 * @param: long long n
 * @return: n!
 */
ll giaithua(ll n){
	ll res = 1;
	if(n==0 || n==1)
		return 1;
	else if(n <0)
		return -1;
	else
	{
		for(int i = 2; i<=n; i++)
			res = res*i;
	} 
	return res;
}

/*//thinh- ham mu
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
	return sqrt(a);
}

/**
 * This is main function
 */
 
int main() {
	ll a = 21;
	ll b = 170;
	ll c = 5;
	cout << a << " + " << b << " = " << add(a,b) << endl;
	cout << a << " * " << b << " = " << multiply(a,b) << endl;
	cout << a << " - " << b << " = " << tru(a,b) << endl;
	cout << a << " / " << b << " = " << chia(b,a) << endl;
	cout << "Giai thua cua " << c << " la :" << giaithua(c) << endl;
	return 0;
}

