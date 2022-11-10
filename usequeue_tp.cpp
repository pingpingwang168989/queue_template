#include<iostream>
#include"queue_tp.h"

using namespace std;
int main()
{
	queue_tp<int> qi;
	int temp;
	cout << "input int to temp" << endl;
	cin >> temp;
	while (1)
	{
		qi.enqueue_tp(temp);
		cout << "input int to temp" << endl;
		cin >> temp;

	}
	qi.show();
	return 0;

}
