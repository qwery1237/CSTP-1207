#include <iostream>


void ArrayAccessByPointer() {
    int arr[] = { 10, 20, 30, 40, 40 };

    std::cout << "arr[1]=" << arr[1] << "\n";

    int* pi;
    pi = &arr[0];

    std::cout << "value at pi+1= " << *(pi + 1) << std::endl;
}

void InitializeArray(int* p, int n) {
    while (n-- > 0) {
        *p = 0;
        ++p;
    }
}

void BasicPointer() {
    
    int* ip;
    int x = 123;
    ip = &x; // & address of is used here to get the address of x and put it in ip pointer

    char* cp;
    char c = 'a';
    cp = &c;

    char* cp2 = nullptr;// initialize a pointer that coes not point to any object

    // this is called dereferencing a pointer e.g. *cp
    char d = *cp; //set the char value at the address pointer is pointing to, to the var d
    
    *cp = 'x';// changing the value of pointed-to char

}

void SwapCopies(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << "x=" << x << "y=" << y << std::endl;
}

void Swap(int* px, int* py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

void BasicArrayExample() {

    char arr[5];
    int intArr[10];

    int numbers[5] = { 5, 10, 15, 20, 25 };
    int a1 = numbers[0];
    int a4 = numbers[3];
    int total = a1 + a4;

    if (numbers[0] == 0) {
        std::cout << "equal to zero\n";
    }
    else if (numbers[0] < 0) {
        std::cout << " less than zero\n";
    }
    else {
        std::cout << "greater than zero\n";
    }

    while (numbers[0] > 0) {
        numbers[0]--;
    }

    do {
        numbers[1]--;
    } while (numbers[1] > 0);

    for (int i = 0; i < 10; ++i) {
        std::cout << "i=" << i << std::endl;
    }

    int labArr[101];
    for (int i = 0; i < 101; ++i ) {
        if (i == 0) {
            labArr[0] = 1;
        }
        else {
            labArr[i] = i * 10;
        }

        std::cout << labArr[i] << std::endl;
    }

    

}



bool IsEven(int num) {
    int remainder = num % 2;

    if (remainder == 0) {
        return true;
    }
    else {
        return false;
    }

}

void Basicconditionals() {

    int num1 = 23;
    int num2 = 36;

    bool isNum1Even = IsEven(num1);
    bool isNum2Even = IsEven(num2);

    std::cout << " isNum1Even: " << isNum1Even << " isNum2Even: " << isNum2Even << std::endl;

}