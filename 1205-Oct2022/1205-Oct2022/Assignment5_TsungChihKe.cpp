#include <iostream>
#include <cstring>
#include <string>

using namespace std;

 int AddingMachine() {

	int sum = 0;

	auto newNum = 0;

	do
	{
		string strToConvert;
		cout << "Please enter a number and enter 0 to finish: ";
		getline(cin, strToConvert);
		
		try {
			newNum = stoi(strToConvert);
		}
		catch (std::exception& e) {
			cout << e.what() << "\nPlease enter a number!!!\n";
			break;
		}

		sum += newNum;

	} while (newNum != 0);

	return sum;

	/*cout << "The sum of numbers: " << sum << endl;*/

}



