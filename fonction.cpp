#include <iostream>

using namespace std;

int multiplication(int x, int y) {
	return x * y;
}

int division(int x, int y) {
	return x / y;
}

void distance(double xa, double ya, double xb, double yb) {
	double distance_x = xb - xa;
	double distancce_y = yb - ya;
	double distance = sqrt(pow(distance_x, 2) + pow(distancce_y, 2));
	cout << "La distance entre les 2 points est de: " << distance << endl;
}

void echange(int &a, int &b) {
	int x = a;
	a = b;
	b = x;
}

void initialisation(int * const p, const int &n, const int &m) {
	for (int i = 0; i < m*n; i++) {
		*(p + i) = 0;
	}
}

void afficherTableau(int const * const p, const int &n, const int &m) {
	for (int i = 0; i < n*m; i++) {
		cout << *(p + i);
		if ((i + 1) % m == 0) {
			cout << endl;
		}
	}
	cout << endl;
}