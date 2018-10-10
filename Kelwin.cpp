#include<iostream>
#include"Temperatura.cpp"

using namespace std;

class Kelwin :public Temperatura{
public:
	float k_c(float k){
		float c;
		c = k - 273.15;
		return c;
	}
	float k_f(float k){
		float f;
		f = (k * 1.8) - 459.67;
		return f;
	}
};