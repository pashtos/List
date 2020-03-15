#include"funcs.h"
void toWrite(list& list)
{	
	ofstream towrite;
	string name;
	cout << "Введіть назву файлу, в який ви хочете додати список:";
	cin >> name;
	towrite.open(name);
	if (!towrite.is_open())
	{
		cout << "Не вдалося відкрити файл" << endl;
	}
	else
	{
		for (int i = 0; i < list.GetSize(); i++)
		{
			if (i == list.GetSize() - 1)
			{
				towrite << list[i];
			}
			else 
			{
				towrite << list[i] << ' ';
			}
		}
		cout << "Операція пройшла успішно";
		towrite.close();
	}
}