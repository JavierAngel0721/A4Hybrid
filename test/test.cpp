#define CATCH_CONFIG_MAIN  // This defines the main() function for Catch2
#include <catch2/catch.hpp>
#include "car.h"
#include "electricCar.h"
#include "gasolineCar.h"
#include "hybridCar.h"


TEST_CASE("ElectricCar class ") {
    ElectricCar* electricCar = new ElectricCar("");  
    REQUIRE(electricCar->Drive() == "Drive ElectricCar"); 
    REQUIRE(electricCar->FuelEfficiency() == 10);
    REQUIRE(electricCar->ChargeBattery() == "ChargeBattery ElectricCar");
    REQUIRE(electricCar->Refuel() == "Refuel ElectricCar"); 
    delete electricCar;
}

TEST_CASE("GasolineCar class ") {
    GasolineCar* gasolineCar = new GasolineCar("");  
    REQUIRE(gasolineCar->Drive() == "Drive GasolineCar"); 
    REQUIRE(gasolineCar->FuelEfficiency() == 10);
    REQUIRE(gasolineCar->ChargeBattery() == "ChargeBattery GasolineCar");
    REQUIRE(gasolineCar->Refuel() == "Refuel GasolineCar"); 
    delete gasolineCar;
}

TEST_CASE("HybridCar class ") {
    HybridCar* hybridCar = new HybridCar("");  
    REQUIRE(hybridCar->Drive() == "Drive HybridCar"); 
    REQUIRE(hybridCar->FuelEfficiency() == 10);
    REQUIRE(hybridCar->ChargeBattery() == "ChargeBattery HybridCar");
    REQUIRE(hybridCar->Refuel() == "Refuel HybridCar"); 
    REQUIRE(hybridCar->SwitchMode() == "SwitchMode HybridCar");
    delete hybridCar;
}

