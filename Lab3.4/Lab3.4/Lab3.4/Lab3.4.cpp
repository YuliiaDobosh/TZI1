// Lab_03_4.cpp
// <Добош Юлія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (0 <= y && y <= 2 * R && -2 * R <= x && x <= 0 && pow(x + R, 2) + pow(y - R, 2) <= R * R
		|| -R <= y && y <= 0 && 0 <= x && x <= 2 * R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
		cin.get();
		return 0;
}