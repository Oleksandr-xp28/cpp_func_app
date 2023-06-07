// cpp_func_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void displayCard(string card) {
    string rank = card.substr(0, 1);
    string suit = card.substr(1, 1);

    switch (rank[0]) {
    case 'A':
        cout << "Ace";
        break;
    case 'K':
        cout << "King";
        break;
    case 'Q':
        cout << "Queen";
        break;
    case 'J':
        cout << "Jack";
        break;
    default:
        cout << rank;
    }

    cout << " of ";

    switch (suit[0]) {
    case 'H':
        cout << "Hearts";
        break;
    case 'D':
        cout << "Diamonds";
        break;
    case 'C':
        cout << "Clubs";
        break;
    case 'S':
        cout << "Spades";
        break;
    }
}

int main() {
    string card;
    cout << "Enter the first capital letter of the card: ";
    cin >> card;
    displayCard(card);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// In the future, to open this project again, go to File > Open > Project and select the .sln file
