
#include <iostream>
#include<list>
#include "Week4.h"
#include "Assignment5.h"
#include "Assignment6.h"
#include "filestream.h"
#include "point.h"
#include "Fraction.h"
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main()
{
    //TestStrTok();
    //TestTypecoversion();
    //TestStringType();
    //getDogInfo();
    //TestStringType2();
    /*std::cout << AddingMachine() << std::endl;*/
  /*  TestColorEnum();*/
    //ExamineBasicRandomNumbers();
    //GuessingCame();
    //ExploreBitwiseBasics();
    //Assignment6A();
    //FileStreamTest();
    /*FileStreamTest2();*/
    //Displayfile();
    //Quiz7();
   
    //Assignment7();
    //DisplayQuiz7();
    //Point p1, p2;
    //p1.Set(5, 7);
    //p2.Set(0, 10);
    //cout << "p1: " << p1.GetX()<< ", " << p1.GetY() << endl;
    //cout << "p2: " << p1.GetX()<< ", " << p1.GetY() << endl;

    //Point p1;
    //p1.SetX(5);
    //p1.SetY(7);

    //cout << "X: " << p1.GetX() << ", " << "Y: " << p1.GetY() << endl;

    //Point p1;

    //p1.LitmitSetX(-120);
    //p1.LitmitSetY(150);
  
    //
    //cout << "X: " << p1.GetX() << ", " << "Y: " << p1.GetY() << endl;
   
    //Fraction f1;

    //f1.Set(2, 3);
    //cout << "Den: " << f1.GetDen() << ", " << "Num: " << f1.GetNum() << endl;
    /*TestPointObject();*/

    //Point p1;
    //p1.arrSet(1, 0);

    //cout << "array:" << p1.GetX() << p1.GetY()<< endl;

   /* TestSTLObjects();*/
 /*   TestNode();*/

    //list<int> numbers{ 5, 7, 90, 8,67 };
    //PrintList(numbers);

    //Node n1(5);
    //Node n2(5, &n1);
    //Node n3(8, &n2);
    //
    //PrintNodeList(&n3);
    //TestGame();
 /*   TestScope();*/
    //StartGameLoop();
  /*  RumGame();*/

    //PrintNumberOfWheels();
 /*   TestPairTemplate();*/
    //TestSTLObjectVector();
    ErrorHandlingExample1();
    

    try
    {
        ErrorHandlingExample2();
    }
    catch(char message[])
    {
        cout << endl << "*** " << message << " ***" << endl;
    }

    return 0;
}

