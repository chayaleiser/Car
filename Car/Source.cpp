#include <iostream>
using namespace std;
#include <string>
#include "car.h"
#include <assert.h>

int main()
{
	string _company, _model;
	int _year, _engineVolume;
	char _color[10];
	cout << "Enter car details: company, model, year, engine volume and color" << endl;
	cin >> _company >> _model >> _year >> _engineVolume >> _color;
	Car c(_company, _model, _year, _engineVolume, _color);
	c.PrintCar();

	cout << "Enter second car details: company, model, year, engine volume and color" << endl;
	cin >> _company >> _model >> _year >> _engineVolume >> _color;
	Car c2(_company, _model, _year, _engineVolume, _color);
	c2.PrintCar();

	Car compByYear = c.CompareByYear(c2);
	cout << "The older car is: \n";
	compByYear.PrintCar();

	Car compareByEngine = c.CompareByEngineVolume(c2);
	cout << "The bigger car by engine value is: \n";
	compareByEngine.PrintCar();

}