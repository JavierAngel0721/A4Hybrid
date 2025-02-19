#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;


class Car {
    private:
        string class_name;
    protected:
        virtual string Drive() = 0;
        virtual double FuelEfficiency() = 0;
        virtual string ChargeBattery() = 0;
        virtual string Refuel() = 0;
        virtual string SwitchMode(){
            return "SwitchMode Car";
        }
    public:
        Car(){
            class_name = "car";
        }
};
#endif