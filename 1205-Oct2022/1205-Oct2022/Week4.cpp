#include <iostream>
#include <cstring>
#include <string>

#define STRMAX 80
#define NAMEMAX 80
using namespace std;

void TestCString() {

	char str[] = "Hello!";
	char str2[10] = "Hello!";

	char s[80];
	strcpy(s, "One ");
	strcat(s, "Two ");
	strcat(s, "Three ");

	char s2[80];
	strncpy(s2, str2, STRMAX);
	strncat(s2, s, STRMAX - strlen(s));

	cout << s << std::endl;
	cout << s2 << std::endl;

	char name[50];
	cout << "enter your name:";
	cin.getline(name, NAMEMAX);

	cout << "Name is:" << name << std::endl;

	cout << "printing name using a for loop" << std::endl;
	int length = strlen(s2);
	for (int i = 0; i < length; i++)
	{
		cout << s2[i];
	}
}

void TestStrTok() {
	//let's assume we have a string "This is a string input"
	// and we want to break it up into individula substrings
	
	//This
	//is
	//a
	//string
	//input
	

	//strtok -string token
	//


	char s[] = "This is a string input";

	char strp = NULL; //old C style null pointer assignment
	char* strp2 = nullptr;// the new null potinter assignment

	char* ps = strtok(s, " ");
	ps = strtok(nullptr, " -");
	char the_string_to_parse[81];
	cout << "input a string parse:";
	cin.getline(the_string_to_parse, 81);

	char* result = strtok(the_string_to_parse, "- ");
	while (result != nullptr)
	{
		cout << "token: " << result << std::endl;
		result = strtok(nullptr, ", ");
	}


}



void TestTypecoversion() {
	
	int i = 12;
	float f = 2.2;
	int j = f;

	float f2 = i;

	auto i2 = 0;
	auto s = 'A';
	auto s2 = "A";
	auto b1 = true;
	auto num = 6L;
	auto num2 = 2'000'000'000;
	auto binNum = 0b11101110;
	auto hexNum = 0xFE;

}

void TestStringType()
{
	string firstName("Tom");
	string lastName("Brady");
	
	string fullName = firstName + lastName;
	cout << fullName << std::endl;
	cout << "pring the 4th char of fullname: " << fullName[3] << std::endl;
	if (fullName != firstName) 
	{
		cout << "not equal" << endl;
	}
	else
	{
		cout << "equal" << endl;
	}

	string dogType = "enter a dog type:";
	string dog;
	cout << dogType;
	cin >> dog;

	cout << endl << dog << endl;

	string name, address;
	cout << "Please enter your address:";
	getline(cin, name);
	cout << "Please enter your address: ";
	getline(cin, address);

	cout << endl << name << " - " << address << endl;
	string result = "Name: " + name + "Address: " + address;
}

void getDogInfo() {
	
	string name, breed, age;
	cout << "Please enter dog's name: ";
	getline(cin, name);
	cout << "Please enter dog's breed: ";
	getline(cin, breed);
	cout << "Please enter dog's age: ";
	getline(cin, age);

	string dogInfo = "Name: " + name + "\nBreed: " + breed + "\nage: " + age;

	cout << endl << dogInfo << endl;

}

void TestStringType2() {

	string dogType = "enter a dog type:";
	string dog;
	cout << dogType;
	cin >> dog;

	cout << endl << dog << endl;// captures up to the first blank characters into the string object

	for (int i = 0; i < dog.size(); ++i) {
		cout << dog[i] << endl;
	}

	cout << "max" << numeric_limits<streamsize>::max() << endl;

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	string name, address;
	cout << "Please enter your address:";
	getline(cin, name);
	cout << "Please enter your address: ";
	getline(cin, address);

	cout << endl << name << " - " << address << endl;
	string result = "Name: " + name + "Address: " + address;

	//convert a string to an integer
	string age = "34";
	auto ageNum = stoi(age);
	cout << "age: " << age << " ageNum: " << ageNum << endl;

	//convert a string to a floating pint stof()



}