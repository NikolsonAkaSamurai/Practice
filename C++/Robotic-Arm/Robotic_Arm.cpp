#include <math.h> 
const int a = 100;//длина плеча
const int b = 100;//длина локтя
double radiana = 57.2958; // операции синуса и косинуса требуют угол в радианах
double c;// расстояние от плеча до кисти
double alpha;//Угол плеча к плостоксти XY
double beta;// Угол между плечом и локтем
double gamma;// Угол между плечом и проекцией локтя
double delta; //Угол луча AC относительно стола
double X_axis;//Координата кисти по Х
double Z_axis;//Координата кисти по Z

void setup() {
  Serial.begin(9600);

}

void loop() {
  alpha = 69.1;
  beta = 56.6;
  gamma = ( 180 - beta );
  delta = alpha - gamma/2;
  c = (sin((beta/2)/radiana))*b*2;
  X_axis = cos(delta)*c;
  Z_axis = sin(delta)*c;
  
  Serial.print("rasstoyanie: ");
  Serial.print(c);
  Serial.print("   ");
  Serial.print("Ugol: ");
  Serial.print(delta);
  Serial.print("   ");
  Serial.print("X_axis:  ");
  Serial.print(X_axis);
  Serial.print("   ");
  Serial.print("Z_axis:  ");
  Serial.println(Z_axis);
  delay(1000);
}