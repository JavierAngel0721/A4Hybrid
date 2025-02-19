#include "gasolineCar.h"
#include <string>

using namespace std;

double GasolineCar::FuelEfficiency(){
    return 10;
}

string GasolineCar::Drive() {

    return "Drive GasolineCar";

}

string GasolineCar::ChargeBattery() {

    return "ChargeBattery GasolineCar";

}

string GasolineCar::Refuel() {

    return "Refuel GasolineCar";

}

string GasolineCar::SwitchMode(){
    return "SwitchMode GasolineCar";
}