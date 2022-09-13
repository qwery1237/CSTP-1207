// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char char1, char2, char3, char4, char5;
    int num1, num2, num3, num4, num5;

    std::cout << "please enter a charater and a integer: ";
    std::cin >> char1 >> num1;

    std::cout << "please enter a charater and a integer: ";
    std::cin >> char2 >> num2;

    std::cout << "please enter a charater and a integer: ";
    std::cin >> char3 >> num3;

    std::cout << "please enter a charater and a integer: ";
    std::cin >> char4 >> num4;

    std::cout << "please enter a charater and a integer: ";
    std::cin >> char5 >> num5;

    int total = num1 + num2 + +num3 + num4 + num5;
    int average = total / 5;

    std::cout << char1 << " " << num1 << "\n" << char2 << " " << num2 << "\n" << char3 << " " << num3 << "\n" << char4 << " " << num4 << "\n" << char5 << " " << num5 << "\n" << total << " " << average;

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
