#include<iostream>
#pragma once
class Temperatura{
protected:
	float temp;
	//metody
public:
	void setTemp(float t){
		temp = t;
	}
	float getTemp(){
		return temp;
	}

};