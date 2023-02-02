#include <iostream>
#include <string>
using namespace std;

int cycle_for_fnc(int iteration_count)
{
	for (size_t i = 0; i < iteration_count; i++) //size_t - это целочисленный тип данных и он не может иметь отрицательного значения
	{
		cout << i << " ";
	}
	return NULL;
}

int cycle_while_fnc(int iteration_count)
{
	while (iteration_count >= 0)
	{
		cout << iteration_count << " ";
		iteration_count--;
	}
	return NULL;
}

int cycle_dowhile_fnc(int iteration_count)
{
	do
	{
		cout << iteration_count << " ";
		iteration_count--;
	} while (iteration_count >= 0);
	return NULL;
}

int main()
{
	int iteration_count, switcher;
	cout << "Choose cycle which you want to start:" << "\n" << "1. Cycle for" << "\n" << "2. Cycle while" << "\n" << "3. Ceycle do while" << "\n";
	cin >> switcher;
	
	switch (switcher)
	{
	case 1:
		cout << "Enter number of iteration:" << " ";
		cin >> iteration_count;
		cout << "Sample of realization cycle for with dynamic number of iterations:" << "\n" << cycle_for_fnc(iteration_count) << "\n";
		break;

	case 2:
		cout << "Enter number of iteration:" << " ";
		cin >> iteration_count;
		cout << "Sample of realization cycle while with dynamic number of iterations" << "\n" << cycle_while_fnc(iteration_count) << "\n";
		break;

	case 3:
		cout << "Enter number of iteration:" << " ";
		cin >> iteration_count;
		cout << "Sample of realization cycle do while with dynamic number of iterations" << "\n" << cycle_dowhile_fnc(iteration_count) << "\n";
		break;
	
	default:
		cout << "No correct value" << "\n";
		break;
	}
}