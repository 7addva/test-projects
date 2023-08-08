#include <iostream> 
#include <string>
#include <cmath>
using namespace std;

int main() {
    std::string fullName;
    std::cout << "Type your full name:";
    //getline (std::cin, fullName);
//cin counts a space as a terminating character, so can only display 1 word
    std::cout << "Your name is: " + fullName << endl;

    int x = 3;
    int y = 12;
    cout << max(x,y) << endl;
    cout << min(x,y) << endl;

    cout << sqrt(2049) <<endl;
    cout << round(3.14) <<endl;
    cout << log(2) <<endl;
    cout << sin(60) <<endl;

    int votingAge = 18;
    int myAge;
    cout << "Enter your age:";
    cin >> myAge;
    if (myAge >= votingAge)
    {
        cout << "You\'re old enough to vote!";
    } else {
        cout << "You\'re not old enough to vote.";
    }
};