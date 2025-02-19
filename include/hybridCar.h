#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include <string>
#include "car.h"

using namespace std;

class HybridCar : public Car {
    private:
        string class_name = "HybridCar";
    public:
        HybridCar(string name){
            class_name = name;
        }
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
        virtual string SwitchMode() override;
};

#endif