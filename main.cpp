#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int CounterNumber;
    ofstream txtOut;
    ifstream txtIn;

    txtIn.open("DB.txt", ios::in);

    if (!txtIn.is_open()) {
        cout << "Error opening file";
        exit(1);
    }

    txtIn >> CounterNumber;


    txtIn.close();


    char value='B';
    cout << "Use + to add, - to remove, r to restart and x to close the program" << endl;



    cout << "Counter number is " << CounterNumber << endl;
    while (value != 'x' || value != 'X')    {


        txtOut.open("DB.txt");

        if (!txtOut.is_open()) {
            cout << "Error opening file";
            exit(1);
        }

        txtOut << CounterNumber << endl;


        txtOut.close();



        system("CLS");
        cout << "Use + to add, - to remove, r to restart and x to close the program" << endl << "Current Value is: " << CounterNumber << endl;
        cin >> value;
        switch (value) {

        case 'x':

            return 0;
            break;
        case 'X':

            return 0;
            break;

        case 'r':
            CounterNumber = 0;



            break;

        case 'R':
            CounterNumber = 0;



            break;

        case '+':
            CounterNumber++;


            break;
        case '-':
            CounterNumber--;

            break;
        default:

            cout << "Wrong input, try again" << endl;
            break;
        }
    }

}
