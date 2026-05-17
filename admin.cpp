#include "Admin.h"

Admin::Admin() : User() {
    approvals = 0;
}

Admin::Admin(int id, string name, string pass)
    : User(id, name, pass) {
    approvals = 0;
}

void Admin::approveVehicle() {
    approvals++;
    cout << "Vehicle Approved" << endl;
}

void Admin::showDashboard() const {
    cout << "Admin Dashboard" << endl;
    cout << "Approvals: " << approvals << endl;
}

string Admin::getRole() const {
    return "Admin";
}