#include"funcs.h"
void toRead(list& list)
{
	cout << "������ ����� �����, � ����� ���� ��������� ������: ";	
	try
	{
		string name;
		cin >> name;
		ifstream toread;
		toread.open(name);
		if (!toread.is_open())
		{
			cout << "���� �� ������� �������. ������� �� �� ����";
			throw 1;
		}
		else {
			toread.seekg(0, ios_base::end);
			if (!toread.tellg())
			{
				cout<< "���� �������";
				throw "gg";
			}
			toread.seekg(0, ios_base::beg);
			cout << "������ ������ ��������:\n";
			while (!toread.eof())
			{
				int temp;
				toread >> temp;
				cout << temp << ' ';
				list.push_back(temp);
				
			}
		}
	}
	catch (...)
	{
		
	}
}