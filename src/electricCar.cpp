#include "electricCar.h"
#include <string>

using namespace std;
double ElectricCar::FuelEfficiency(){
    return 10;
}

string ElectricCar::Drive() {

    return "Drive ElectricCar";

}

string ElectricCar::ChargeBattery() {

    return "ChargeBattery ElectricCar";

}

string ElectricCar::Refuel() {

    return "Refuel ElectricCar";

}

string ElectricCar::SwitchMode(){
    return "SwitchMode ElectricCar";
}

