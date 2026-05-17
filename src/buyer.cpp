#include "Buyer.h"

Buyer::Buyer() : User() {
    favoriteCount = 0;
}

Buyer::Buyer(int id, string name, string pass)
    : User(id, name, pass) {
    favoriteCount = 0;
}

void Buyer::saveFavorite(const Vehicle& v) {
    favorites[favoriteCount++] = v;
}

void Buyer::searchVehicle(string brand) {
    cout << "Searching for " << brand << endl;
}

void Buyer::searchVehicle(string brand, double maxPrice) {
    cout << "Searching for " << brand << " under " << maxPrice << endl;
}

void Buyer::showDashboard() const {
    cout << "Buyer Dashboard" << endl;
    cout << "Favorites: " << favoriteCount << endl;
}

string Buyer::getRole() const {
    return "Buyer";
}
