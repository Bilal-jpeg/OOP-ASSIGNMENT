#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int vehicleID;
    string brand;
    string model;
    int year;
    double price;

public:
    Vehicle();
    Vehicle(int, string, string, int, double);

    void display() const;

    int getVehicleID() const;
    string getBrand() const;
    double getPrice() const;

    Vehicle operator+(const Vehicle& other);
    double operator-(const Vehicle& other);

    friend bool compareVehicles(const Vehicle& a, const Vehicle& b);
};

#endif
