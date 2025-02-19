#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include <string>
#include "electricCar.h"
#include "gasolineCar.h"

using namespace std;

class HybridCar : public ElectricCar, public GasolineCar {
    private:
    string switch_mode;
    public:

        HybridCar(): switch_mode("SwitchMode ElectricCar"){}
        virtual string Drive() override;
        virtual double FuelEfficiency() override;
        virtual string ChargeBattery() override;
        virtual string Refuel() override;
        virtual string SwitchMode() override;
};

#endif