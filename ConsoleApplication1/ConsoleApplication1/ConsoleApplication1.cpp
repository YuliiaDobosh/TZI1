#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -R)
		y = R;
	else
		if (-R < x && x <= R)
			y = R - sqrt(R * R - x * x);
		else
			if (R < x && x <= 6)
				y = R + ((R+3)/(R-6))*(x-R);
			else
				y = x-9;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}


