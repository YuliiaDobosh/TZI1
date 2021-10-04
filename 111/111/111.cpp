#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double Pi = 4 * atan(1.), a, z1, z2;

	cout << "a = ";
	cin >> a;

	z1 = (cos(3.0 / 8 * Pi - a / 4) * cos(3.0 / 8 * Pi - a / 4)) - (cos(11.0 / 8 * Pi +
		a / 4) * cos(11.0 / 8 * Pi + a / 4));

	z2 = (sqrt(2) / 2) * sin(a / 2);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}