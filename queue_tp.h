#pragma once

template<typename Item>
class queue_tp
{
private:
	enum{MAXSIZE=5};
	class Node
	{
	public:
		Item i;
		Node* back;
		
		Node(const Item &temp);
	};
	int items;
	Node* front;
	Node* tail;
	const int maxsize;
public:
	queue_tp(int i=0,int max=MAXSIZE);
	queue_tp(int max);
	bool enqueue_tp(const Item& i);
	bool dequeue_tp(Item& i);
	void show()const;
};

