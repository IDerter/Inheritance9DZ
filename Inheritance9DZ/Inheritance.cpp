#include "Inheritance.h"
float Property::GetWorth()
{
	return worth;
}
void Property::SetWorth(float worth1)
{
	worth = worth1;
}
float Apartment::TaxCalculation()
{
	return (GetWorth() / 1000);
}
float Car::TaxCalculation()
{
	return (GetWorth() / 200);
}
float CountryHouse::TaxCalculation()
{
	return (GetWorth() / 500);
}