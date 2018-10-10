#include<iostream>
#include<conio.h>
#include"Temperatura.cpp"
#include"Celsjusz.cpp"
#include"Kelwin.cpp"
#include"Fahrenheit.cpp"

using namespace std;


int main(){

	do{
		cout << "MENU" << endl << "1. Celsjusze" << endl << "2. Kelwiny" << endl << "3. Fahrenheity" << endl << "4. Wyjdz" << endl;
		int wybor; cin >> wybor;
		system("cls");
		switch (wybor){
		case 1:{
				   Celsjusz c;
				   float cc;
				   cout << "Podaj temperature w celsjuszach: "; cin >> cc;
				   system("cls");
				   cout << "1. Z Celsjusza na Kelwina" << endl << "2. Z Celsjusza na Fahrenheita" << endl << "3. Wyjdz" << endl;
				   int wybor_; cin >> wybor_;
				   system("cls");
				   switch (wybor_){
				   case 1:{
							  c.setTemp(cc);
							  float c1 = c.getTemp();
							  float ck = c.c_k(c1);
							  cout << "Temperatura po konwersji to: " << ck << endl;
							  continue;
				   }
				   case 2:{
							  c.setTemp(cc);
							  float c1 = c.getTemp();
							  float cf = c.c_f(c1);
							  cout << "Temperatura po konwersji to: " << cf << endl;
							  continue;
				   }
				   case 3: exit(0);

				   }
		}
		case 2:{
				   Kelwin k;
				   float kk;
				   cout << "Podaj temperature w kelwinach: "; cin >> kk;
				   system("cls");
				   cout << "1. Z Kelwina na Celsjusza" << endl << "2. Z Kelwina na Fahrenheita" << endl << "3. Wyjdz" << endl;
				   int wybor_; cin >> wybor_;
				   system("cls");
				   switch (wybor_){
				   case 1:{
							  k.setTemp(kk);
							  float k1 = k.getTemp();
							  float kc = k.k_c(k1);
							  cout << "Temperatura po konwersji to: " << kc << endl;
							  continue;
				   }
				   case 2:{
							  k.setTemp(kk);
							  float k1 = k.getTemp();
							  float kf = k.k_f(k1);
							  cout << "Temperatura po konwersji to: " << kf << endl;
							  continue;
				   }
				   case 3: exit(0);
				   }
		}
		case 3:{
				   Fahrenheit f;
				   float ff;
				   cout << "Podaj temperature w fahrenheitach: "; cin >> ff;
				   system("cls");
				   cout << "1. Z Fahrenheita na Celsjusza" << endl << "2. Z Fahrenheit na Kelwina" << endl << "3. Wyjdz" << endl;
				   int wybor_; cin >> wybor_;
				   system("cls");
				   switch (wybor_){
				   case 1:{
							  f.setTemp(ff);
							  float f1 = f.getTemp();
							  float fc = f.f_c(f1);
							  cout << "Temperatura po konwersji to: " << fc << endl;
							  continue;
				   }
				   case 2:{
							  f.setTemp(ff);
							  float f1 = f.getTemp();
							  float fk = f.f_k(f1);
							  cout << "Temperatura po konwersji to: " << fk << endl;
							  continue;
				   }
				   case 3: exit(0);
				   }
		case 4: exit(0);
		}
		}
	} while (true);
	_getch();
	return 0;
}