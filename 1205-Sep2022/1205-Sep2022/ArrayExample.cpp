#include <iostream>
void BasicArrayExample() {

    char arr[5];
    int intArr[10];

    int numbers[5] = { 5, 10, 15, 20, 25 };
    int a1 = numbers[0];
    int a4 = numbers[3];
    int total = a1 + a4;

    

}



bool IsEven(int num) {
    int remainder = num % 2;

    if (remainder == 0) {
        return true;
    }

    return false;
}

void Basicconditionals() {

    int num1 = 23;
    int num2 = 36;

    bool isNum1Even = IsEven(num1);
    bool isNum2Even = IsEven(num2);

    std::cout << " isNum1Even: " << isNum1Even << " isNum2Even: " << isNum2Even << std::endl;

}