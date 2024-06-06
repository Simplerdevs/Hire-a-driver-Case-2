
#include <iostream>
using namespace std;

int main()

{
    /*  Write a Program to ask the user to enter His/Her Age and Driver Licence then Print "Hired" If both conditions are met Otherwise Print "Rejected" ==>  Or Hire Here/Him without condition ! */

    int age;
    cout << "Please enter your age " << endl;
    cin >> age;


    bool Drive;
    cout << "Do you have A Driver Licence" << endl;
    cin >> Drive;

    bool recommendation;
    cout << " Do you have A recommendation ? " << endl;
    cin >> recommendation;


    if (age >= 20 && Drive == 1 || recommendation == 1) {

        cout << "Hired" << endl;

    }

    else {
        cout << "Rejected" << endl;

    }

	return 0;

    // created by @ilyes_trabelsi

}

