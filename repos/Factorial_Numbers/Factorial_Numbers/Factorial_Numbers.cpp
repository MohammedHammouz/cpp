// Factorial_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//void ReadNumber(int& num) {
//    cin >> num;
//}
//
//unsigned long long CalculateFactorial(int num) {
//    
//    long Factorial =1.0;
//    for (int i = 1; i <= num-1; i++) {
//        Factorial *= i;
//    }
//    return Factorial;
//}
//
//void PrintFactorialOfNumber() {
//    int num;
//    ReadNumber(num);
//    long factorial = CalculateFactorial(num);
//    cout << "Factorial of " << num << " is " << factorial << endl;
//}
unsigned short int Read_Number() {
    unsigned short int N;
    cout << "Pleae enter number that you want:\n";
    cin >> N;
    return N;
}
int Find_Factorial_Numbers(unsigned short int N) {
    unsigned short int result;
    result = N;
    for (unsigned short int i = N - 1; i > 0; i--) {
        result *= i;
    }
    return result;
}
void Print_Factorial(unsigned short int result) {
    cout << "Factorial number is: " << result << endl;
}
int main() {
    /*cout << "Enter number please:\n";
    PrintFactorialOfNumber();
    return 0;*/
    Print_Factorial(Find_Factorial_Numbers(Read_Number()));
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
