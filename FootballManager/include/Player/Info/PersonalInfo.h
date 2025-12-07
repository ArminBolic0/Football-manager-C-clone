#pragma once

#include <string>


class PersonalInfo
{
	std::string name;
	std::string surname;
	int age;
public:
	PersonalInfo(std::string name, std::string surname, int age) {}
	std::string getName();
	std::string getSurname();
	std::string getFullName();
	int getAge();
};