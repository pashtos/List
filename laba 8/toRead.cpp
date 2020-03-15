#include"funcs.h"
void toRead(list& list)
{
	cout << "Введіть назву файлу, з якого буде прочитано список: ";	
	try
	{
		string name;
		cin >> name;
		ifstream toread;
		toread.open(name);
		if (!toread.is_open())
		{
			cout << "Файл не вдалося відкрити. Можливо він не існує";
			throw 1;
		}
		else {
			toread.seekg(0, ios_base::end);
			if (!toread.tellg())
			{
				cout<< "Файл порожній";
				throw "gg";
			}
			toread.seekg(0, ios_base::beg);
			cout << "Список успішно зчитаний:\n";
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