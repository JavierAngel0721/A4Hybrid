#define CATCH_CONFIG_MAIN  // This defines the main() function for Catch2
#include <catch2/catch.hpp>
#include "car.h"
#include "electricCar.h"
#include "gasolineCar.h"
#include "hybridCar.h"


TEST_CASE("ElectricCar class ") {
    ElectricCar* electricCar = new ElectricCar();  
    REQUIRE(electricCar->Drive() == "Drive ElectricCar"); 
    REQUIRE(electricCar->FuelEfficiency() == 10);
    REQUIRE(electricCar->ChargeBattery() == "ChargeBattery ElectricCar");
    REQUIRE(electricCar->Refuel() == "Refuel ElectricCar"); 
    delete electricCar;
}

TEST_CASE("GasolineCar class ") {
    GasolineCar* gasolineCar = new GasolineCar();  
    REQUIRE(gasolineCar->Drive() == "Drive GasolineCar"); 
    REQUIRE(gasolineCar->FuelEfficiency() == 10);
    REQUIRE(gasolineCar->ChargeBattery() == "ChargeBattery GasolineCar");
    REQUIRE(gasolineCar->Refuel() == "Refuel GasolineCar"); 
    delete gasolineCar;
}

TEST_CASE("HybridCar class ") {
    HybridCar* hybridCar = new HybridCar();
    
    // Initially in electric mode
    REQUIRE(hybridCar->Drive() == "Drive ElectricCar");
    REQUIRE(hybridCar->FuelEfficiency() == 10.0);
    REQUIRE(hybridCar->ChargeBattery() == "ChargeBattery ElectricCar");
    REQUIRE(hybridCar->Refuel() == "Refuel ElectricCar");

    // Switch to gasoline mode
    REQUIRE(hybridCar->SwitchMode() == "SwitchMode GasolineCar");
    REQUIRE(hybridCar->Drive() == "Drive GasolineCar");
    REQUIRE(hybridCar->FuelEfficiency() == 10.0);
    REQUIRE(hybridCar->ChargeBattery() == "ChargeBattery GasolineCar");
    REQUIRE(hybridCar->Refuel() == "Refuel GasolineCar");

    // Switch back to electric mode
    REQUIRE(hybridCar->SwitchMode() == "SwitchMode ElectricCar");
    REQUIRE(hybridCar->Drive() == "Drive ElectricCar");
    REQUIRE(hybridCar->Refuel() == "Refuel ElectricCar");

    delete hybridCar;
}

