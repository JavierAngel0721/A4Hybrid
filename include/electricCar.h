#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include <string>
#include "car.h"

using namespace std;

class ElectricCar : virtual public Car {
    public:
        ElectricCar() {}
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
        virtual string SwitchMode() override;
};

#endif