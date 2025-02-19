#include "hybridCar.h"
#include <string>

using namespace std;

double HybridCar::FuelEfficiency(){
    return 10;
}

string HybridCar::Drive() {

    if (switch_mode == "SwitchMode ElectricCar") {
        return ElectricCar::Drive();
    } else if (switch_mode == "SwitchMode GasolineCar"){
        return GasolineCar::Drive();
    }
    return ElectricCar::Drive();

}

string HybridCar::ChargeBattery() {

    if (switch_mode == "SwitchMode ElectricCar") {
        return ElectricCar::ChargeBattery();
    } else if (switch_mode == "SwitchMode GasolineCar"){
        return GasolineCar::ChargeBattery();
    }
    return ElectricCar::ChargeBattery();
}

string HybridCar::Refuel() {

    if (switch_mode == "SwitchMode ElectricCar") {
        return ElectricCar::Refuel();
    } else if (switch_mode == "SwitchMode GasolineCar"){
        return GasolineCar::Refuel();
    }
    return ElectricCar::Refuel();
}

string HybridCar::SwitchMode(){
    if (switch_mode == "SwitchMode ElectricCar"){
        switch_mode = "SwitchMode GasolineCar";
    } else {
        switch_mode = "SwitchMode ElectricCar";
    }
    return "SwitchMode HybridCar";
}