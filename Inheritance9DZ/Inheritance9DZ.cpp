#include "Inheritance.h"
int main()
{
   
    Property* Mas[7];
    Mas[0] = new Apartment(4000);
    Mas[1] = new Apartment(3500);
    Mas[2] = new Apartment(5000);
    Mas[3] = new Car(10000);
    Mas[4] = new Car(11040);
    Mas[5] = new CountryHouse(1200);
    Mas[6] = new CountryHouse(1450);
    for (int i = 0; i < 7; i++)
    {
        std::cout << Mas[i]->TaxCalculation() << std::endl;
        delete Mas[i];
    }

}
