#include <iostream>
#include <string>
//MUST BE INCLUDED WHEN STRINGS PRESENT
using namespace std;
//int = normal cislo
//float = desetina akorat na 6/7 mist
//double = desetina akorat na 15 mist
//float f1 = 12e2 (12 *10na4)

int main() {
    string greeting = "hello\n";
    cout << greeting;

    string platypus = "A platypus? ";
    string hat = "PERRY THE PLATYPUS!";
    
    string perryThePlatypus = platypus + hat;
        cout << perryThePlatypus << endl;
    
    string perryThePlatypus2 = platypus.append(hat);
        cout << perryThePlatypus2 << endl;

    cout << perryThePlatypus2.length() << endl;
    cout << perryThePlatypus[0] << endl;

    string test = "tezt";
    test[2] = 's';
    cout << test << endl;

    string viking = "we\'re the so-called \"Vikings\" of the north\\south";
    cout << viking;
};

/*
    ==	    Equal to	                x == y	
    !=	    Not equal	                x != y	
    >	    Greater than	            x > y	
    <	    Less than	                x < y	
    >=	    Greater than or equal to	x >= y	
    <=	    Less than or equal to	    x <= y
*/