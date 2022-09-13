// Quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int fah1 = 0;
    int fah2 = 0;
    int fah3 = 0;
    std::cout << "please enter 3 integer Fahrenheit values separated by a space\n";
    std::cin >> fah1 >> fah2 >> fah3;

    int centigrad1 = (fah1 - 32) * 5 / 9;
    int centigrad2 = (fah2 - 32) * 5 / 9;
    int centigrad3 = (fah3 - 32) * 5 / 9;

    std::cout << "Calculated Celsius values are " << centigrad1 << ", " << centigrad2 << ", " << centigrad3 << "\n";
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
