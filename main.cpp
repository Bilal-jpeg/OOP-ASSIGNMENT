#include "Marketplace.h"
#include "Seller.h"
#include "Buyer.h"
#include "Admin.h"

int main() {
    Marketplace market;

    Vehicle civic(101, "Honda", "Civic", 2022, 4500000);
    Vehicle corolla(102, "Toyota", "Corolla", 2021, 4200000);

    market.addVehicle(civic);
    market.addVehicle(corolla);

    Seller seller(1, "Ahmed", "123");
    Buyer buyer(2, "Sara", "456");
    Admin admin(3, "Hamza", "789");

    seller.addListing(civic);
    seller.addListing(civic, corolla);

    buyer.saveFavorite(corolla);

    buyer.searchVehicle("Toyota");
    buyer.searchVehicle("Honda", 5000000);

    admin.approveVehicle();

    User* users[3];

    users[0] = &seller;
    users[1] = &buyer;
    users[2] = &admin;

    for (int i = 0; i < 3; i++) {
        cout << users[i]->getRole() << endl;
        users[i]->showDashboard();
    }

    Vehicle combined = civic + corolla;

    combined.display();

    cout << civic - corolla << endl;

    market.displayVehicles();

    return 0;
}