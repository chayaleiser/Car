#include "car.h"
#include <string>
#include <assert.h>

//constructor
Car::Car(string m, string mo, int y, int eV, char* co)
{
	company = m;
	model = mo;
	//assert(y >= 0 && y <= 9999);
	if (y >= 0 && y <= 9999)
	{
		year = y;
	}
	//assert(eV >= 0);
	if (eV >= 0)
	{
		engineVolume = eV;
	}
	strcpy_s(color, 10, co);
}


//operation <<
void Car::PrintCar() const
{
	cout << "company: " << company << "\nmodel: " << model << "\nyear: " << year << "\nengine volume: " << engineVolume << "\ncolor: " << color << endl;
}

void Car::SetMake(string m)
{
	assert(m != "");
	if (m != "")
	{
		company = m;
	}
}
void Car::SetModel(string m)
{
	assert(m != "");
	if (m != "")
	{
		model = m;
	}
}
void Car::SetYear(int y)
{
	year = y;
}
void Car::SetEngineVolume(int e)
{
	engineVolume = e;
}
void Car::SetColor(char* co)
{
	strcpy_s(color, 10, co);
}

const Car& Car::CompareByYear(const Car & c2) const
{
	if (year >= c2.year)
	{
		return *this;
	}
	else
	{
		return c2;
	}
}

const Car& Car::CompareByEngineVolume(const Car & c2) const
{
	if (engineVolume >= c2.engineVolume)
	{
		return *this;
	}
	else
	{
		return c2;
	}
}