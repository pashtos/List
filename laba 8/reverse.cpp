#include"funcs.h"
void reverse(list& list)
{
	for (int i = list.GetSize() - 1; i >= 0; i--)
	{
		cout << list[i] << ' ';
	}
}