#include <iostream>
#include"list.h"
#include"funcs.h"
using namespace std;
int main()
{
	system("chcp 1251");
	cout << "\nПривіт! Обери функцію:\n1 - Ввести список з клавіатури\n2 - Отримати список з файлу\n3 - Вивести всі числа в зворотньому порядку.\n4 - Вивести порядкові номери елементів, що мають найбільшу величину.\n5 - Сортує числа в порядку їхнього неспадання.\n6 - Записати числа у файл.\n0 - Вихід.\n№: ";
	int M;
	cin >> M;
	list list;
	while (M)
	{	
		if (M == 1)
		{
			list.clear();
			cout << "Введіть послідовність натуральних чисел. 0 - кінець вводу:\n ";
			int n;
			cin >> n;
			while (n)
			{
				list.push_back(n);
				cin >> n;
			}
		}
		else if (M == 2)
		{
			list.clear();
			toRead(list);
		}
		else if (M == 3)
		{
			reverse(list);
		}
		else if (M == 4)
		{
			MaxIndex(list);
		}
		else if (M == 5)
		{
			sort(list);
		}
		else if (M == 6)
		{
			toWrite(list);
		}
		else
		{
			cout << "Оберіть правильний номер: ";
			cin >> M;
			continue;
			
		}
		cout << "\n\nСпробуйте ще:\n";
		cin >> M;
	}
	
	return 0;
}

