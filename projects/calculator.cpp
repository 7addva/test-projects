//doesn't work, fix later

#include <string>
#include <iostream>
using namespace std;


int main() {
    double x, y, equalTo;
    string operation;
    cout << "Type a number: ";
    cin >> x;
    
    cout << "Type another number: ";
    cin >> y;

    cout << "What operation? (sum/takeaway/multiply/divide)";
    cin >> operation;

    if (operation == "sum")
    {
        equalTo = x+y;
    };

    if (operation == "takeaway"||"T") {
        equalTo = x-y;
    };

    if (operation == "multiply")
    {
        equalTo = x*y;
    };

    if (operation == "divide")
    {
        equalTo = x/y;
    };
    cout << "Your number is: " << equalTo;
};