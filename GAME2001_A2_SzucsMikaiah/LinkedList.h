#pragma once
#include <iostream>
#include "Node.h"
#include "Iterator.h"

using namespace std;

template <class T>
class LinkedList {
protected:
	int size;
	Node<T>* First;
	Node<T>* Last;
	Iterator<Node<T>> it;
public:
	LinkedList() {
		size = 0;
		First = nullptr;
		Last = nullptr;
	};
	~LinkedList() {

		cout << "Failure" << endl;
		system("PAUSE");

		Node<T>* NextNode;
		while (First != nullptr) {
			NextNode = First->GetNext();
			delete First;
			First = NextNode;
		}

		cout << "Success" << endl;
		system("PAUSE");
	};

	int GetSize() {
		return size;
	}

	void Push(T newData) {
		Node<T>* newNode;
		if (size == 0) {
			newNode = new Node<T>(newData);
			First = newNode;
			Last = newNode;
			size++;
		}
		else {
			newNode = new Node<T>(newData, First);
			First->SetPrevious(newNode);
			First = newNode;
			size++;
		}
	};

	T Pop() {
		if (size > 0) {
			T tempData = First->GetData();

			if (First->GetNext() != nullptr) {
				Node<T>* TempFirst = First->GetNext();
				delete First;
				First = TempFirst;
				TempFirst = nullptr;
			}
			else {
				delete First;
				First = nullptr;
				Last = nullptr;
			}

			size--;
			return tempData;
		}
		else {
			cout << "List is empty so nothing can be popped." << endl;
		}
	};

	T Front() {
		if (size > 0) {
			return First->GetData();
		}
	};

};
