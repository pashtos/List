#include"funcs.h"
void toWrite(list& list)
{	
	ofstream towrite;
	string name;
	cout << "������ ����� �����, � ���� �� ������ ������ ������:";
	cin >> name;
	towrite.open(name);
	if (!towrite.is_open())
	{
		cout << "�� ������� ������� ����" << endl;
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
		cout << "�������� ������� ������";
		towrite.close();
	}
}