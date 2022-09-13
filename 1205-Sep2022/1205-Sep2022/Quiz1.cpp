#include <iostream>
void Week2Quiz1() {
    double fah1 = 0;
    double fah2 = 0;
    double fah3 = 0;
    std::cout << "please enter 3 integer Fahrenheit values separated by a space\n";
    std::cin >> fah1 >> fah2 >> fah3;

    double centigrad1 = (fah1 - 32) * 5 / 9;
    double centigrad2 = (fah2 - 32) * 5 / 9;
    double centigrad3 = (fah3 - 32) * 5 / 9;

    std::cout << "Calculated Celsius values are " << centigrad1 << ", " << centigrad2 << ", " << centigrad3 << "\n";
}