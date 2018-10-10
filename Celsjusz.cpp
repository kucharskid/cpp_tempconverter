#include<iostream>
#include"Temperatura.cpp"

using namespace std;

class Celsjusz :public Temperatura{
public:
	float c_k(float c){
		float k;
		k = c + 273.15;
		return k;
	}
	float c_f(float c){
		float f;
		f = (c * 1.8) + 32;
		return f;
	}
};