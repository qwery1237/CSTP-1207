#include <iostream>
#include<cstring>
#include <cctype>

void Assignment4a() {
	char letterConvert[150];
	char userRequest[6];
	std::cout << "Please enter the words that you would like to be converted: ";
	std::cin.getline(letterConvert, 150);
	std::cout << "Please enter 'upper' or 'lower' to convert: ";
	std::cin.getline(userRequest, 6);

	if (strcmp(userRequest, "upper") == 0) 
	{
		for (size_t i{ 0 }; i < strlen(letterConvert); ++i) {
			if (isalpha(letterConvert[i])) {
				letterConvert[i] = toupper(letterConvert[i]);
			}
		}
		std::cout << "Your converting result is: " << letterConvert << std::endl;
	}
	else if(strcmp(userRequest, "lower") == 0)
	{
		for (size_t i{ 0 }; i < strlen(letterConvert); ++i) {
			if (isalpha(letterConvert[i])) {
				letterConvert[i] = tolower(letterConvert[i]);
			}
		}
		std::cout << "Your converting result is: " << letterConvert << std::endl;
	}
	else
	{
		std::cout << "Please enter your 'upper' or 'lower' to convert." << std::endl;
	}

	
}