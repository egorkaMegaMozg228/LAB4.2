#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, xp, xk, dx, A, B, y;//вхідні параметри, проміжні результати, результат обчислення 

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------------" << endl;
	cout << "|" << setw(6) << "x" << "       |"
		<< setw(7) << "y" << "     |" << endl;
	cout << "----------------------------" << endl;
	x = xp;


	A = 1 / (fabs(x + 2)) + 1;
	while (x <= xk)
	{
		A = 1 / (fabs(x + 2)) + 1;
		if (x < 1) {
			B = 7 * x * x + x - 8;
		}
		else if (x > 4) {
			B = sqrt(1 + fabs(cos(x) * cos(x) * cos(x)));
		}
		else B = 1 / tan((x + 4) / sqrt(11)) + 3;
		y = A - B;
		cout << "|" << setw(6) << setprecision(2) << x
			<< "       |" << setw(7) << setprecision(3) << y
			<< "     |" << endl;
		x += dx;
	}
	cout << "----------------------------" << endl;



	system("pause");
	return 0;

}