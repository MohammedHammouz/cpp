// Do_While_and_While.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//int ReadNumberInRangeUsingWhile(int from, int to) {
//    int number;
//    cout << "Enter a number between " << from << " and " << to << "\n";
//    cin >> number;
//    while (number < from || number  > to) {
//        cout<<"Wrong\n";
//        cout << "Enter a number between " << from << " and " << to << "\n";
//        cin >> number;
//    }
//    return number;
//}
int ReadNumberInRangeUsingdoWhile(int from, int to) {
    int number;
    cout << "Enter a number between " << from << " and " << to << "\n";
    cin >> number;
    do {
        cout << "Wrong\n";
        cout << "Enter a number between " << from << " and " << to << "\n";
        cin >> number;
    } while (number < from || number  > to);
    return number;
}
int main()
{
    /*cout << ReadNumberInRangeUsingWhile(5,18);*/
    cout << ReadNumberInRangeUsingdoWhile(5, 18);
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
