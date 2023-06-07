// cpp_func_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void findPerfectNumbers(int start, int end) {
    int perfectNumbers[100];
    int count = 0;
    for (int n = start; n <= end; n++) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            perfectNumbers[count] = n;
            count++;
        }
    }

    cout << "The perfect numbers in the interval [" << start << ", " << end << "] are: ";
    for (int i = 0; i < count; i++) {
        cout << perfectNumbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start of the interval: ";
    cin >> start;
    cout << "Enter the end of the interval: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// In the future, to open this project again, go to File > Open > Project and select the .sln file
