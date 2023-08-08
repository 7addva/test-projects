#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    bool playerA[4][4] ={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
//ADD SIZE SELECTION FUNCTIONALITY

    int row1, column1, row2, row3, row4, column2, column3, column4;
    cout << "ASSIGNER: choose location of 4 ships \n";
//-----------------------------------------------------------------------
    cout << "Choose a number between 1 and 4 representing a row (1/4)\n";
    cin >> row1;
    if(row1 == 55){
        cout << "DEBUG ENABLED \n";
        cout << "ALL SHIPS ON ROW 1 \n\n";
        
        playerA[0][0] = 1;
        playerA[0][1] = 1;
        playerA[0][2] = 1;
        playerA[0][3] = 1;
    } else {
        row1 - 1;

        cout << "Choose a number between 1 and 4 representing a column (1/4)\n";
        cin >> column1;
        column1 - 1;

        playerA[row1][column1] = 1;
    //-----------------------------------------------------------------------
        cout << "Choose a number between 1 and 4 representing a row (2/4)\n";
        cin >> row2;
        row2 - 1;

        cout << "Choose a number between 1 and 4 representing a column (2/4)\n";
        cin >> column2;
        column2 - 1;

        playerA[row2][column2] = 1;
    //-----------------------------------------------------------------------
        cout << "Choose a number between 1 and 4 representing a row (3/4)\n";
        cin >> row3;
        row3 - 1;

        cout << "Choose a number between 1 and 4 representing a column (3/4)\n";
        cin >> column3;
        column3 - 1;

        playerA[row3][column3] = 1;
    //-----------------------------------------------------------------------
        cout << "Choose a number between 1 and 4 representing a row (4/4)\n";
        cin >> row4;
        row4 - 1;

        cout << "Choose a number between 1 and 4 representing a column (4/4)\n\n\n\n\n\n";
        cin >> column4;
        column4 - 1;

        playerA[row4][column4] = 1;
    };

    int hits = 0;
    int numOfTurns = 0;
    
    while (hits < 4) {
        int hitRow, hitColumn;
        cout << "GUESSER: Select row (between 1 and 4) \n";
        cin >> hitRow;
        hitRow - 1;
        
        cout << "Select column (between 1 and 4) \n";
        cin >> hitColumn;
        hitColumn - 1;
        
        if(playerA[hitRow][hitColumn]){
            hits++;
            numOfTurns++;
            playerA[hitRow][hitColumn] = 0;
            cout<< "HIT! (" << (4 - hits) << " hits left)\n";
            
        } else {
            cout << "Miss\n";
            numOfTurns++;
        };
    };

    cout << "VICTORY! \n";
    cout << "You won in " << numOfTurns << " turns.";
    // bool playerB[4][4] ={
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0}
    // };
    // int rowB, columnB;
};