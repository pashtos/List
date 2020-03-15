#pragma once
struct list
{
public:
	list();
	void push_back(int data);
	int GetSize();
	int& operator[](const int index);
	void pop_front();
	void clear();
	~list();

private:
	struct Node;
	Node* head;
	int size;
};
struct list:: Node
{
	Node* pNext;
	int data;
	Node(int data = 0)
	{
		this->data = data;
		this->pNext = nullptr;
	}
};

