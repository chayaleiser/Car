#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
	string company;
	string model;
	int year;
	int engineVolume;
	char color[10];
public:
	void SetMake(string);
	void SetModel(string);
	void SetYear(int);
	void SetEngineVolume(int);
	void SetColor(char*);
	Car(string m, string mo, int y, int eV, char* co);
	void Car::PrintCar() const;
	const Car& CompareByYear(const Car  & c2) const;
	const Car& CompareByEngineVolume(const Car & c2) const;
};
