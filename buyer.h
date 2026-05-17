#ifndef BUYER_H
#define BUYER_H

#include "User.h"
#include "Vehicle.h"

class Buyer : public User {
private:
    Vehicle favorites[10];
    int favoriteCount;

public:
    Buyer();
    Buyer(int, string, string);

    void saveFavorite(const Vehicle& v);

    void searchVehicle(string brand);
    void searchVehicle(string brand, double maxPrice);

    void showDashboard() const override;
    string getRole() const override;
};

#endif