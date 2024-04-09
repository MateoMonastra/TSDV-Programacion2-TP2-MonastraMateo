#pragma once
#include <vector>
#include <iostream>

class string
{
private:

	std::vector<char> text;
public:

	string operator + (string other);
	string operator + (const char* other);
	string operator += (string other);
	string operator += (const char* other);

	bool operator > (string other);
	bool operator < (string other);

	string operator * (int amount);

	const char* ToConstChar(string text);
};