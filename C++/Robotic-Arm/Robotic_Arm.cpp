#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std; // использование стандартной библиотеки

int main(int argc, const char* argv[]) {

	setlocale(LC_ALL, "rus");// Команда чтения русских символов!!!

	const int a = 100;//длина плеча
	const int b = 100;//длина локтя
	double radiana = 57.2958; // операции синуса и косинуса требуют угол в радианах
	float c;// расстояние от плеча до кисти
	double alpha;//Угол плеча к плостоксти XY
	double beta;// Угол между плечом и локтем
	double gamma;// Угол между плечом и проекцией локтя
	double delta; //Угол луча AC относительно стола
	double X_axis;//Координата кисти по Х
	double Z_axis;//Координата кисти по Z

	cout << "Введите угол плеча и нажмите Enter" << endl;
	cin >> alpha;
	cout << "Введите угол между плечом и локтем и нажмите Enter" << endl;
	cin >> beta;
	gamma = 180 - beta;
	delta = ( alpha - ( gamma / 2) );
	c = (sin((beta / 2) / radiana)) * b * 2;
	X_axis = cos(delta/radiana) * c;
	Z_axis = sin(delta/radiana) * c;
	cout << "Угол от плеча до кисти относительно стола" << "  " << delta << endl;
	cout << "Расстояние от плеча до кисти" << "  " << c << endl;
	cout << "Координата X" << "  " << X_axis << "  " << "Координата Z" << Z_axis << endl;
	


	cin.get();
	return 0;
}