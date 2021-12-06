#include "LinkedList.h"
#include "PriorityQueue.h"


using namespace std;

int main(void) {

	LinkedList<int> TestIntList;

	PriorityQueue<int> TestPrio;

	cout << "Linked List Test:" << endl;
	cout << "Test for popping empty list:" << endl;

	TestIntList.Pop();

	cout << "Pushing 42" << endl;
	TestIntList.Push(42);

	cout << "Test for .Front(): ";
	cout << TestIntList.Front() << endl;

	cout << "Pushing 24" << endl;
	TestIntList.Push(24);

	cout << "Popping out values" << endl;
	cout << TestIntList.Pop() << endl;
	cout << TestIntList.Pop() << endl << endl;
	



	cout << "Priority Queue Test:" << endl;

	cout << "Test to push a value without priority: " << endl;
	TestPrio.Push(24);

	cout << "Pushing 42 with priority 2" << endl;
	TestPrio.Push(42, 2);

	cout << ".Front(): ";
	cout << TestPrio.Front() << endl;

	cout << "Pushing 24 with priority 3 (should be behind 42)" << endl;
	TestPrio.Push(24, 3);

	cout << ".Front(): ";
	cout << TestPrio.Front() << endl;

	cout << "Pushing 7 with priority 1 (should be front of queue)" << endl;
	TestPrio.Push(7, 1);

	cout << ".Front(): ";
	cout << TestPrio.Front() << endl;

	cout << "Popping all values out of priority queue" << endl;
	while (TestPrio.GetSize() > 0) {
		cout << TestPrio.Pop() << endl;
	}



	system("PAUSE");

	return 0;
}