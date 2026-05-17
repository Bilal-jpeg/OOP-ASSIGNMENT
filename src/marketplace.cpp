#include "Marketplace.h"

Marketplace::Marketplace() {
    vehicleCount = 0;
}

void Marketplace::addVehicle(const Vehicle& v) {
    vehicles[vehicleCount++] = v;
}

void Marketplace::displayVehicles() {
    for (int i = 0; i < vehicleCount; i++) {
        vehicles[i].display();
    }
}
