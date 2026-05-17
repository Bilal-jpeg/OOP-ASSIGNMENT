#ifndef SELLER_H
#define SELLER_H

#include "User.h"
#include "Vehicle.h"

class Seller : public User {
private:
    Vehicle listings[10];
    int listingCount;

public:
    Seller();
    Seller(int, string, string);

    void addListing(const Vehicle& v);
    void addListing(const Vehicle& v1, const Vehicle& v2);

    void showDashboard() const override;
    string getRole() const override;
};

#endif