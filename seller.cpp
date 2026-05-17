#include "Seller.h"

Seller::Seller() : User() {
    listingCount = 0;
}

Seller::Seller(int id, string name, string pass)
    : User(id, name, pass) {
    listingCount = 0;
}

void Seller::addListing(const Vehicle& v) {
    listings[listingCount++] = v;
}

void Seller::addListing(const Vehicle& v1, const Vehicle& v2) {
    listings[listingCount++] = v1;
    listings[listingCount++] = v2;
}

void Seller::showDashboard() const {
    cout << "Seller Dashboard" << endl;
    cout << "Listings: " << listingCount << endl;
}

string Seller::getRole() const {
    return "Seller";
}