#include "MyString.h"
#include <iostream>
#include <string>

MyString::MyString(const char* str) {
	this->size = strlen(str);
	this->str = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		this->str[i] = str[i];
	}
	this->str[size] = '\0';//oa?i?i???ee ioeu
	//std::cout << this->str;
}
MyString::MyString(void) {
	size = 0;
	str = 0;
};




MyString::MyString(const MyString& other) {
	this->size = other.size;
	this->str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[this->size] = '\0';

}


MyString MyString::operator +(const MyString& other) {
	MyString Temp;
	Temp.size = this->size + other.size;
	Temp.str = new char[this->size + other.size + 1];
	int i = 0;
	for (; i < this->size; i++)
	{
		Temp.str[i] = this->str[i];
	}
	for (int j = 0; j < other.size; i++, j++)
	{
		Temp.str[i] = other.str[j];
	}
	Temp.str[Temp.size] = '\0';
	return Temp;
}

char MyString::operator [](int index) {
	return this->str[index];
}


int MyString::count(char ch) {
	int count = 0;
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i] == ch) {
			count++;
		}
	}
	return count;
}

int MyString::countStr(const char* ch) {
	int newSize = strlen(ch);
	int s = 0;
	int res = 0;//iiaa?iaii
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			if (ch[i] == this->str[j]) {
				i++;
				s++;
				if (s == newSize) {
					res++;
					s = 0;
					i = 0;
				}
			}
		}

	}
	return res;
}

MyString& MyString::replace(char a, char b) {
	MyString Temp;
	Temp.size = this->size;
	Temp.str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i] == a) {
			this->str[i] = b;
			Temp.str[i] = this->str[i];
		}
	}
	Temp.str[Temp.size] = '\0';
	//std::cout << this->str;	
	return Temp;
}

void MyString::remove(char a) {
	for (int i = 0; i < this->size; ++i)
	{
		if (this->str[i] == a) {
			for (int j = i; j < this->size; ++j)
			{
				this->str[j] = this->str[j + 1];
			}
			break;

		}
	}
	std::cout << this->str;
}

MyString& MyString::insert(char a, int b) {
	MyString Temp;
	Temp.size = this->size;
	Temp.str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		if (i == b) {
			this->str[i] = a;
			Temp.str[i] = this->str[i];
		}
	}
	Temp.str[Temp.size] = '\0';

	return Temp;
}

bool MyString::emty() {
	int newSize = strlen(this->str);
	if (newSize == 0) {
		return true;
	}
	return false;

}

int MyString::Size() {
	int newSize = strlen(this->str);
	return newSize;
}
std::ostream& operator<<(std::ostream& os, MyString& t) {
	os << t.str << std::endl;
	return os;
}

MyString::~MyString() {
	delete[]str;
}