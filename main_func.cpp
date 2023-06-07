// cpp_func_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

bool isLucky(int sd) {
    int firstThree = 0, lastThree = 0;
    for (int i = 0; i < 3; i++) {
        lastThree += sd % 10;
        sd /= 10;
    }
    for (int i = 0; i < 3; i++) {
        firstThree += sd % 10;
        sd /= 10;
    }
    return firstThree == lastThree;
}

int main() {
    int sd;
    cout << "Enter a six-digit number: ";
    cin >> sd;
    if (isLucky(sd)) {
        cout << sd << " is a lucky number!" << endl;
    }
    else {
        cout << sd << " is not a lucky number." << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// In the future, to open this project again, go to File > Open > Project and select the .sln file
