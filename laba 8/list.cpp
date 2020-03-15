#include "list.h"

list::list()
{
	size = 0;
	head = nullptr;
}
list::~list()
{
	clear();
}
int list::GetSize()
{
	 return size; 
}
void list::push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
	size++;
}
int& list::operator[](const int index)
{
	int counter = 0;
	Node* current = head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}
void list::pop_front()
{
	Node* temp = head;
	head = head->pNext;
	delete temp;
	size--;
}
void list::clear()
{
	while (size)
	{
		pop_front();
	}
}
