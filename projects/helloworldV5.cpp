#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    string names[2+1] = {"me", "you", "us"};
    names[0] = "he";
    cout << names[0] + "\n";
    //array output uses indexing => STARTS AT 0

    for (int i = 0; i < 4; i++){
        cout << names[i] << "\n";
    };
};