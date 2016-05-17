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

/**
 * This is main function
 */
 //alo thinh da sua
int main() {
	ll a = 21;
	ll b = 170;
	cout << a << " + " << b << " = " << add(a,b) << endl;
	cout << a << " * " << b << " = " << multiply(a,b) << endl;
	return 0;
}
