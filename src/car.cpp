#include "car.h"
#include <string>

using namespace std;

double Car::FuelEfficiency(){
    return 10;
}

string Car::Drive() {

    return "Drive Car";

}

string Car::ChargeBattery() {

    return "ChargeBattery Car";

}

string Car::Refuel(){
    return "Refuel Car";
}