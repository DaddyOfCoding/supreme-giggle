#include <iostream>
#include <string>
using namespace std;

int append_fnc(int a, int b)
{
	int result;

	result = a + b;

	return result;
}

int subtraction_fnc(int a, int b)
{
	int result;

	result = a - b;

	return result;
}

int divide_fnc(int a, int b)
{
	int result;

	result = a / b;

	return result;
}

int divide_by_module_fnc(int a, int b)
{
	int result;

	result = a % b;

	return result;
}

int main()
{
	char some_symbol{'a'}; // Более одного символа записать не получится
	int some_number = 15; // Целочисленный тип данных
	float some_number_with_comma = 15.25; //Тип данных с плавающей запятой тип данных double почти идентичен float, но имеет большую точность
	bool true_or_false = 1; //Логический тип данных, правда или ложь
	string s = std::to_string(some_number); // преобразование int в str
	//cout << some_symbol << " " << some_number << " " << some_number_with_comma << " " << " " << true_or_false << " " << s;
	cout << "append" << " " << append_fnc(3, 5) << '\n';
	cout << "subtraction" << " " << subtraction_fnc(3, 5) << '\n';
	cout << "divide" << " " << divide_fnc(3, 5) << '\n';
	cout << "divide by module" << " " << divide_by_module_fnc(3, 5) << '\n';
}