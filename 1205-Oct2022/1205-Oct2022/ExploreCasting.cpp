#include <iostream>
using namespace std;

void TestStaticCat() {
	//int by default is signed
	int largeNumber = 257;
	unsigned int largeNumber2 = 20000000;

	//char by default is signed
	char smallNumber = largeNumber;// char can only hold 1 byte - 1 byte =[1111 1111] =255
	unsigned char smallNumber2 = largeNumber;


	// smallNumber 0xe8 'e' char
	// smallNumber2 0xe8 'e' unsigned char
	signed char c1 = static_cast<char>(largeNumber);
	unsigned char c2 = static_cast<char>(largeNumber);
	char smallNumber3 = static_cast<char>(largeNumber);
}