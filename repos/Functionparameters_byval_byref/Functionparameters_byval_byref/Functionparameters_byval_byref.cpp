// Functionparameters_byval_byref.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int short num1 = 5000;
int short num2 = 8000;
void myfunction() {
    int short num1;
    num1 = 10;
    cout <<"Inside function:"<< num1 << "\n";
}
int main()
{
    int short num1 = 3000;
    myfunction();
    cout << "Inside main function:" << num1 << "\n";
    cout << "Gloabal num1:" << ::num1 << "\n";
    cout << "Gloabal num2:" << ::num2 << "\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
