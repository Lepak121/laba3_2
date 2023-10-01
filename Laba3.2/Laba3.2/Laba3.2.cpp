#include <iostream>

using namespace std;

int main() {

	double x, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//Спосіб 1
	if ((x + 5) < 0 && c == 0)
		F = (a * x != 0) ? (1 / (a * x)) - b : 0;
	if ((x + 5) > 0 && c != 0)
		F = (x - a) / x;
	if (x == 0)
		F = (10 * x) / c - 4;

	cout << endl;
	cout << "1) F = " << F << endl;

	//Спосіб 2
	if ((x + 5) < 0 && c == 0)
		F = (a * x != 0) ? (1 / (a * x)) - b : 0;
	else if ((x + 5) > 0 && c != 0)
		F = (x - a) / x;
	else
		F = (10 * x) / c - 4;
	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}
