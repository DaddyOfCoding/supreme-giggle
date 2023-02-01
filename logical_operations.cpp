#include <iostream>
#include <string>
using namespace std;

bool logical_ops_fnc(int a, int b, int switcher)
{
	bool result;

	if (switcher == 1) {
		result = a && b;
		return result;
	}

	if (switcher == 2) {
		result = a || b;
		return result;
	}

	if (switcher == 3) {
		result = a != b;
		return result;
	}
}

int main()
{
	int a, b, switcher;

	cout << "Enter a" << "\n";
	cin >> a;
	cout << "Enter b" << "\n";
	cin >> b;
	cout << "What do you need?" << "\n" << "1. Operation && (And)" << "\n" << "2. Operation || (or)" << "\n" << "3. Operation ! (not)" << "\n";
	cin >> switcher;
	cout << logical_ops_fnc(a, b, switcher);
}