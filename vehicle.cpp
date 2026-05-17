#include "Vehicle.h"
Vehicle::Vehicle() {
    vehicleID = 0;
    brand = "Unknown";
    model = "Unknown";
    year = 2020;
    price = 0;
}
Vehicle::Vehicle(int id, string b, string m, int y, double p) {
    vehicleID = id;
    brand = b;
    model = m;
    year = y;
    price = p;
}
void Vehicle::display() const {
    cout << vehicleID << " " << brand << " " << model << " " << year << " PKR " << price << endl;
}
int Vehicle::getVehicleID() const {
    return vehicleID;
}
string Vehicle::getBrand() const {
    return brand;
}
double Vehicle::getPrice() const {
    return price;
}
Vehicle Vehicle::operator+(const Vehicle& other) {
    Vehicle temp;
    temp.brand = brand + " & " + other.brand;
    temp.price = price + other.price;
    return temp;
}
double Vehicle::operator-(const Vehicle& other) {
    return price - other.price;
}
bool compareVehicles(const Vehicle& a, const Vehicle& b) {
    return a.price > b.price;
}