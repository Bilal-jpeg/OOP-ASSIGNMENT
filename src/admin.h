#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
private:
    int approvals;

public:
    Admin();
    Admin(int, string, string);

    void approveVehicle();

    void showDashboard() const override;
    string getRole() const override;
};

#endif
