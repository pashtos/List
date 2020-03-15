#include"funcs.h"
void sort(list& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		bool flag = false;
		for (int j = 0; j < list.GetSize() - 1 - i; j++)
		{
			if (list[j] > list[j + 1])
			{
				list[j] = list[j] + list[j + 1];
				list[j + 1] = list[j] - list[j + 1];
				list[j] = list[j] - list[j + 1];
				flag = true;
			}
		}
		if (!flag)
		{
			break;
		}
	}
	for (int i = 0; i < list.GetSize(); i++)
	{
		cout << list[i] << ' ';
	}
}