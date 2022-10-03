#include <iostream>
#include <cstring>


void CstringPring() {
	char name[50];
	char address[100];
	char email[50];
	char occupation[30];
	char str3[10] = " - ";
	std::cout << "enter your name: ";
	std::cin.getline(name, 50);
	std::cout << "enter your address: ";
	std::cin.getline(address, 100);
	std::cout << "enter your email: ";
	std::cin.getline(email, 50);
	std::cout << "enter your occupation: ";
	std::cin.getline(occupation, 30);

	char s3[80];
	strncpy(s3, str3, 80);

	std::cout << name << s3 << address << s3 << email << s3 << occupation << std::endl;
}