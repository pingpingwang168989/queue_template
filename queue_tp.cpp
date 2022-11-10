#include"queue_tp.h"
#include<iostream>
using namespace std;
template<typename Item>
queue_tp<Item>::Node::Node(const Item& temp)
{
	i = temp;
	back = nullptr;
}

template<typename Item>
queue_tp<Item>::queue_tp(int i, int max)
{
	items = i;
	maxsize = max;
	front = nullptr;
	tail = nullptr;
}


template<typename Item>
queue_tp<Item>::queue_tp(int max):items(0),front(nullptr),tail(nullptr)
{
	maxsize = max;
}
template<typename Item>
bool queue_tp<Item>::enqueue_tp(const Item &i)
{
	if (items >= maxsize)
	{
		cout << "queue is full." << endl;
		return false;
	}
	Node* p = new Node(i);
	if (front == nullptr)
	{
		items++;
		front =tail= p;
	}
	else
	{
		items++;
		tail->back = p;
		tail = p;
	}
	return true;
}
template<typename Item>
bool queue_tp<Item>::dequeue_tp( Item& it)
{
	if (items <= 0)
	{
		cout << "queue is empty." << endl;
		return false;
	}
	it = front->i;
	items--;
	Node* p;
	p = front;
	front = front->back;
	delete p;
	return true;
}

template<typename Item>
void queue_tp<Item>::show() const
{
	if (items <= 0)
	{
		cout << "empty." << endl;
		return;
	}
	Node* temp;
	int i ;
	for (temp = front,i=1; temp != nullptr; i++,temp=temp->back)
	{
		cout << '('<<i <<')' << ":" << temp->i << " ";
	}
	
}


