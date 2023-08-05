#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int numbers[] = {60, 69, 42};
    cout << numbers[0] + "\n";

    //?numbers[1] = 24;
    //cout << numbers[1] << "\n";

    //? if (numbers[1] = 69) {
    //     cout << "Nice" << "\n";
    // } else {
    //     cout << "Not nice" << "\n";
    // };
    
    for (int i : numbers){ //foreach loop
        cout << i << "\t";
    };
    
    cout << "\n" << "The size of the 'numbers' array is: " << sizeof(numbers) / sizeof(int) << "\n";

    //! sizeof returns size of type in BYTES -> divide by sizeof(*DATA TYPE*)
};