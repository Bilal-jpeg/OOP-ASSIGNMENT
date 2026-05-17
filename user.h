#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    int userID;
    string username;
    string password;

public:
    User();
    User(int, string, string);

    virtual void showDashboard() const = 0;
    virtual string getRole() const = 0;

    string getUsername() const;
};

#endif