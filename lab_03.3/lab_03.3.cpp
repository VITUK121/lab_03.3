#include <iostream>
using namespace std;
int main()
{
	double x, y, R;
	cout << "X = ";
	cin >> x;
	cout << "R = ";
	cin >> R;

	if (x <= -8-R) {
		y = -R;
	}
	else {
		if (-8 - R < x && x <= -8 + R) {
			y = sqrt(R * R - x * x - 16 * x - 64) - R;
		}
		else {
			if (-8 + R < x && x <= 2) {
				y = (-4 * R + 2 * x + 16 + R * x) / (10 - R);
			}
			else {
				if (2 < x && x <= 6) {
					y = 0;
				}
				else {
					y = pow((x - 6), 2);
				}
			}
		}
	}
	cout << "Y = " << y << endl;
	system("pause");
}