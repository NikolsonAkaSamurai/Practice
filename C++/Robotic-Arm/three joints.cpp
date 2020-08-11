#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std; // использование стандартной библиотеки

int main(int argc, const char* argv[]) {

	setlocale(LC_ALL, "rus");// Команда чтения русских символов!!!
	float rad = 57.2958;
	float a, b, c;
	float angle_a, angle_b, angle_c, angle_l, angle_u;
	float vector_a, vector_d, vector_h;
	float result_x;

	cout << "Ввести длину плеча" << endl;
	cin >> a;
	cout << "Ввести длину локтя" << endl;
	cin >> b;
	cout << "Ввести длину кисти" << endl;
	cin >> c;
	
	cout << "Ввести угол плеча" << endl;
	cin >> angle_a;
	cout << "Ввести угол плечо-локоть" << endl;
	cin >> angle_b;
	cout << "Ввести угол локоть-кисть" << endl;
	cin >> angle_c;

	vector_a = cos(angle_a / rad) * a;
	angle_l = angle_b - (90 - angle_a);
	vector_d = sin((angle_l - 90) / rad) * b;
	angle_u = angle_c - (180 - angle_l);
	vector_h = sin(angle_u / rad) * c;
	result_x = vector_a + vector_d + vector_h;

	cout << "result_x= " << result_x << endl;

	cin.get();
	return 0;

}		