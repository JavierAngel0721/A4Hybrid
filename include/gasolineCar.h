#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include <string>
#include "car.h"

using namespace std;

class GasolineCar : virtual public Car {
    public:
        GasolineCar() {}
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
        virtual string SwitchMode() override;
};

#endif