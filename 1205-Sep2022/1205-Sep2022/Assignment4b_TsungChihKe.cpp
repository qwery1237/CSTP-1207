#include <iostream>
#include<cstring>

void Assignment4b() {
	char letterConvert[150];
	char userRequest[6];
	std::cout << "Please enter the words that you would like to be converted: ";
	std::cin.getline(letterConvert, 150);
	std::cout << "Please enter 'upper' or 'lower' to convert: ";
	std::cin.getline(userRequest, 6);

	char* p = letterConvert;

	if (strcmp(userRequest, "upper") == 0) 
	{
		int i = 0;
		while (i < strlen(p)) {
			if (*(p + i) >= 97 && *(p + i) <= 122)
			{
				*(p + i) = *(p + i) - 32;
				++i;
			}
			else
			{
				*(p + i) = *(p + i);
				++i;
			}
		}
		std::cout << letterConvert << std::endl;
	}else if (strcmp(userRequest, "lower") == 0)
	{
		int i = 0;
		while (i < strlen(p)) {
			if (*(p + i) >= 65 && *(p + i) <= 90)
			{
				*(p + i) = *(p + i) + 32;
				++i;
			}
			else
			{
				*(p + i) = *(p + i);
				++i;
			}
		}
		std::cout << letterConvert << std::endl;
	}
	else
	{
		std::cout << "Please enter your 'upper' or 'lower' to convert." << std::endl;
	}

}