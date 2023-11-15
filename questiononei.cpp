#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, smallest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    smallest = num1;

    switch (smallest) {
        case 1:
            if (num2 < smallest) smallest = num2;
            if (num3 < smallest) smallest = num3;
            break;

        case 2:
            if (num1 < smallest) smallest = num1;
            if (num3 < smallest) smallest = num3;
            break;

        case 3:
            if (num1 < smallest) smallest = num1;
            if (num2 < smallest) smallest = num2;
            break;
    }

    cout << "The smallest number is: " << smallest << endl;

    return 0;
}

