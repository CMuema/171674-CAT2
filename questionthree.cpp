//ADMISSION NUMBER: 171674
//DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY
#include <iostream>
#include <string>
using namespace std;
string username = "user";
string password = "pass";

void login() {
    string user_input_username, user_input_password;
    cout << "Please enter your username: ";
    cin >> user_input_username;
    cout << "Please enter your password: ";
    cin >> user_input_password;

    if (user_input_username == username && user_input_password == password) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }
}

int main() {
    login();
    return 0;
}