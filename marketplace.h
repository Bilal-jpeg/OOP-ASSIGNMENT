#ifndef MARKETPLACE_H
#define MARKETPLACE_H

#include "Vehicle.h"

class Marketplace {
private:
    Vehicle vehicles[20];
    int vehicleCount;

public:
    Marketplace();

    void addVehicle(const Vehicle& v);
    void displayVehicles();
};

#endif