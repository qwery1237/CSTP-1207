#include <iostream>
#include<cstring>

#define STRMAX 80
#define NAMEMAX 80

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

	std::cout << s << std::endl;
	std::cout << s2 << std::endl;

	char name[50];
	std::cout << "enter your name:";
	std::cin.getline(name, NAMEMAX);

	std::cout << "Name is:" << name << std::endl;

	std::cout << "printing name using a for loop" << std::endl;
	int length = strlen(s2);
	for (int i = 0; i < length; i++)
	{
		std::cout << s2[i];
	}



	
}