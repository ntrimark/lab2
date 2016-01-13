#include "eecs230.h"

//
// Lab 2 programs
//

void odd_or_even(int num)
{
    if(num%2 == 0)
        cout << num << " is even";
    else
        cout << num << " is odd";

}

int main() {
    // odd_or_even(8);
    string operation;
    double rand1;
    double rand2;
    double result;
    string decision;
    cout << "Write an operator and two numbers: ";
    cin >> operation >> rand1 >> rand2;
    cout << "Would you like to perform the operation " << rand1 << operation << rand2;
    cin >> decision;
    if (operation == "+") {
        if (decision == "yes") {
            result = rand1 + rand2;
        }
        if (operation == "-") {
            if (decision == "yes") {
                result = rand1 - rand2;
            }
            else {
                result = rand2 - rand1;
            }

        }
        if (operation == "*") {
            if (decision == "yes") {
                result = rand1 * rand2;
            }
        }
        if (operation == "/") {
            if (decision == "yes") {
                result = rand1 / rand2;
            }
            if (decision == "no") {
                result = rand2 / rand1;
            }
        }
    }
}



