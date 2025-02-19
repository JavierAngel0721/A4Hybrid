#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include <string>
#include "car.h"

using namespace std;

class ElectricCar : public Car {
    private:
        string class_name = "ElectricCar";
    public:
        ElectricCar(string name);
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
};

#endif