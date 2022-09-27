// 1205-Sep2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ArrayExample.h"
#include "Quiz1.h"
#include "Quiz2TsungChihKe.h"
#include "Assignment2_TsungChihKe.h"
#include "Assignment3_TsungChihKe.h"
#include "Quiz1.h"
#include "Quiz3.h"
#include "Quiz4.h"
#include "Week4.h"


using namespace std;
int main()
{
    //BasicArrayExample();
   // Week2Quiz1();
    //Basicconditionals();
    // Week2Quiz2();
    //Assignment2();
    int x = 10;
    int y = 20;
    std::cout << "x=" << x << "y=" << y << std::endl;
    SwapCopies(x, y);
    std::cout << "x=" << x << "y=" << y << std::endl;

    Swap(&x, &y);
    std::cout << "x=" << x << "y=" << y << std::endl;
  
    ArrayAccessByPointer();

    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //InitializeArray(arr, 10);

    //int arr[5] = { 3,5,7,10,20};
    //Print(arr, 5);
    //std::cout << "The array average of all elements is: " << CalculateAverage(arr, 5) << std::endl;
    //bool boolArr[4] = { true, true, false, false };
    //Quize3(boolArr, 4);
    //bool newBoolArr[4] = { false, false, false, false };
    //Quize4(newBoolArr, 4, true);
    
    bool testBoolArr[5] = { true, false, true, false, false };
    Quize3(&testBoolArr[0], 5);
    Quize4(&testBoolArr[0], 5, true);
    Quize3(&testBoolArr[0], 5);

    TestCString();
    CstringPring();

    return 0;

    
}
