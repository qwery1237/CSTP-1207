#include <iostream>

using namespace std;

void ExploreBitwiseBasics() {
	unsigned int hexNumber1 = 0x0F;
	unsigned int hexNumber2 = 0x18;

	cout << "number in hex: " << hex << hexNumber1 << " " << dec << hexNumber1 << endl;
	cout << "number in hex: " << hex << hexNumber2 << " " << dec << hexNumber2 << endl;

	// Logical AND
	bool isiTTrue = (hexNumber1 > 0 && hexNumber2 > 0);

	//bitwise And operator
	unsigned int andResult = hexNumber1 & hexNumber2;
	cout << "bitwise and result: " << andResult << endl;

	//bitwise OR operator
	andResult = hexNumber1 | hexNumber2;
	cout << "bitwise and result: " << andResult << endl;

	//bitwise NOT operator
	andResult = ~hexNumber1;
	cout << "bitwise and result: " << andResult << endl;









}