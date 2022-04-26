#pragma once
#include <iostream>

class Property
{
	float worth;
public:
	Property(float worth = 100)
	{
		this->worth = worth;
	}
	virtual float TaxCalculation() = 0; //абстрактный метод
	float GetWorth();
	void SetWorth(float worth);
};

class Apartment : public Property
{
public:
	float TaxCalculation() override;
	Apartment(float worth = 50) : Property(worth) //передается параметр производного констурктора к базовому
	{

	}
};

class Car : public Property
{
public:
	float TaxCalculation() override;
	Car(float worth = 50) : Property(worth)
	{

	}
};

class CountryHouse : public Property
{
public:
	float TaxCalculation() override;
	CountryHouse(float worth = 50) : Property(worth)
	{

	}
};
