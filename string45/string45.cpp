// Реалізуйте методи для створеного класу MyString(Рядка): 1. count(а) - кількість зустрічі символа а в рядку 2. countstr(a) - кількість зустрічі підрядка а в рядку+
//3. replace(a, b) - заміна всіх a на b                             //4. remove(a) - видаляє заданий символ в рядку 
//5. insert(a, b) - вставка літери b на a - тий індекс             //6. empty() - повертає true, якщо рядок пустий +
//7. size - повертає довжину рядка    +                            // Перегрузіть оператор[] для створеного класу MyString(Рядка).+
#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;
int main()
{
	MyString A("rj6 65 ");
	MyString B("abb abb abb ab vvv");

	MyString C = A + B;
	cout << C[1];
	cout << endl;
	cout << C.count('a');
	cout << endl;

	std::cout << C.countStr("ab");
	std::cout << endl;

	B.replace('a', 'b');
	cout << B;
	std::cout << endl;

	C.remove('b');
	std::cout << endl;

	B.insert('s', 4);
	cout << B;
	std::cout << endl;

	std::cout << C.emty();
	std::cout << endl;

	std::cout << C.Size();
	std::cout << endl;
}