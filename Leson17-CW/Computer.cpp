#include "Computer.h"

Computer::Computer(string name, float freaquancy, int OZU, bool DVD, float cost)
{
    this->name = name;
    this->freaquancy = freaquancy;
    this->OZU = OZU;
    this->DVD = DVD;
    this->cost = cost;
}

int Computer::getOZU() const
{
    return OZU;
}

void Computer::show() const
{
    cout << "Name: " << name << endl;
    cout << "Freaquency: " << freaquancy<<"GHz" << endl;
    cout << "OZU: " << OZU << "Gb" << endl;
    cout << "DVD: " << DVD << endl;
    cout << "Cost: " << cost << "UAH" << endl;
}
