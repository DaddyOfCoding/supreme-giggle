#include <iostream>
#include <string>
using namespace std;

int prefix_and_postfix_increment_fnc(int pre_fix_inc, int post_fix_inc, int pre_fix_dec, int post_fix_dec)
{
	cout << ++pre_fix_inc << " "; //Префикс инкремент вернет 6
	cout << post_fix_inc++ << " "; //Постфикс инкремент в данном случае вернет 7, так как он будет выполнен после завершения работы функции, он имеет самый низкий приоритет исполнения.
	cout << --pre_fix_dec << " "; //Префикс декреимент вернет 7
	cout << post_fix_dec-- << " "; //Постфикс декримент в данном случае вернет 9, так как он будет выполнен после завершения работы функции, он имеет самый низкий приоритет исполнения.

	cout << int (pre_fix_inc *= 2) << " "; //Префикс инкремент вернет 12, потому что в 7 строчке было выполнено увеличение на 1, получилось 6, 6*2 = 12
	cout << int(pre_fix_inc /= 2) << " "; //Префикс инкремент вернет 6, потому что в 12 строчке было выполнено умножение на 2, получилось 12, 12/2 = 12
	cout << int(pre_fix_inc -= 2) << " "; //Префикс инкремент вернет 4, потому что в 13 строчке было выполнено деление на 2, получилось 6, 6-2 = 4
	cout << int(pre_fix_inc += 2) << " "; //Префикс инкремент вернет 6, потому что в 14 строчке было выполнено вычитание 2, получилось 4, 4+2 = 6

	return pre_fix_inc;
}

void fill_arr(int some_arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		some_arr[i] = rand() % 15;
	}
}

void print_arr(int some_arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << some_arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	const int arr_size = 10;
	int some_arr[arr_size];

	fill_arr(some_arr, arr_size);
	print_arr(some_arr, arr_size);

	cout << "retrurn: " << prefix_and_postfix_increment_fnc(5, 7, 8, 9); //Функция вернет 6
}

//Массив можно передавать в функции и изменять его в них без дополнительных мувов, потому что название массива является указателем