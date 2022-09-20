// 1205-Sep2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ArrayExample.h"
#include "Quiz1.h"
#include "Quiz2TsungChihKe.h"
#include "Assignment2_TsungChihKe.h"
#include "Assignment3_TsungChihKe.h"


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

    int arr[5] = { 3,5,7,10,20};
    Assignment3(arr, 5);
    CalculateAverage(arr, 5);

    return 0;

    
}
