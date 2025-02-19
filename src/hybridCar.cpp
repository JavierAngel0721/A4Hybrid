#include "hybridCar.h"
#include <string>

using namespace std;

double HybridCar::FuelEfficiency(){
    return 10;
}

string HybridCar::Drive() {

    if (switch_mode == "SwitchMode Electric") {
        return ElectricCar::Drive();
    } else if (switch_mode == "SwitchMode Gasoline"){
        return GasolineCar::Drive();
    }
    return ElectricCar::Drive();

}

string HybridCar::ChargeBattery() {

    if (switch_mode == "SwitchMode Electric") {
        return ElectricCar::ChargeBattery();
    } else if (switch_mode == "SwitchMode Gasoline"){
        return GasolineCar::ChargeBattery();
    }
    return ElectricCar::ChargeBattery();
}

string HybridCar::Refuel() {

    if (switch_mode == "SwitchMode Electric") {
        return ElectricCar::Refuel();
    } else if (switch_mode == "SwitchMode Gasoline"){
        return GasolineCar::Refuel();
    }
    return ElectricCar::Refuel();
}

string HybridCar::SwitchMode(){
    if (switch_mode == "SwitchMode Electric"){
        switch_mode = "SwitchMode Gasoline";
    } else {
        switch_mode = "SwitchMode Electric";
    }
    return switch_mode;
}