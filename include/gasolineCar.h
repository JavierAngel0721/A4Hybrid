#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include <string>
#include "car.h"

using namespace std;

class GasolineCar : public Car {
    private:
        string class_name = "GasolineCar";
    public:
        GasolineCar(string name){
            class_name = name;
        }
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
};

#endif