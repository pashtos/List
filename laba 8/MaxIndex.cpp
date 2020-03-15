#include"funcs.h"
void MaxIndex(list& list)
{
	int max = list[0];
	for (int i = 0; i < list.GetSize(); i++)
	{
		if (list[i] > max) { max = list[i]; }
	}
	for (int i = 0; i < list.GetSize(); i++)
	{

		if (list[i] == max)
		{
			cout << "Елемент найбільшої величини має номер " << i + 1;
		}
	}
}