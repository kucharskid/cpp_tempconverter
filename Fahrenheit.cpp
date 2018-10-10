#include<iostream>
#include"Temperatura.cpp"

using namespace std;

class Fahrenheit :public Temperatura{
public:
	float f_c(float f){
		float c;
		c = (f - 32) / 1.8;
		return c;
	}
	float f_k(float f){
		float k;
		k = (f + 459.67) * 5 / 9;
		return k;
	}
};