#include "User.h"

User::User() {
    userID = 0;
    username = "Unknown";
    password = "123";
}

User::User(int id, string name, string pass) {
    userID = id;
    username = name;
    password = pass;
}

string User::getUsername() const {
    return username;
}
