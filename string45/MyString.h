#pragma once
#include <iostream>
#include <string>
class MyString
{
private:
	int size;
	char* str;
public:
	MyString(void);
	friend std::ostream& operator<<(std::ostream& os, MyString& t);
	MyString(const char*);
	~MyString();
	MyString(const MyString&);

	MyString operator +(const MyString&);
	char operator [](int);

	int count(char);
	int countStr(const char*);
	MyString& replace(char, char);
	void remove(char);
	MyString& insert(char, int);
	bool emty();
	int Size();

};
