#pragma once
#include <iostream>
#include "LinkedList.h"

using namespace std;

template <class T>
class PriorityQueue : public LinkedList<T> {
public:

	void Push(T newData) {
		cout << "No priority available" << endl;
	}
	void Push(T newData, int prio) {
		Node<T>* newNode;
		newNode = new Node<T>(newData, prio);

		if (this->size == 0) {
			this->First = newNode;
			this->Last = newNode;
			this->size++;
		}
		else {
			this->it.SetCurrent(this->First);
			this->it.SetPosition(0);

			while (this->it.GetCurrent() != nullptr) {
				if (this->it.GetCurrent()->GetPriority() >= prio) {
					if (this->it.GetCurrent()->GetPrevious() == nullptr) {
						this->First = newNode;
						newNode->SetPrevious(nullptr);
					}
					else {
						this->it.GetCurrent()->GetPrevious()->SetNext(newNode);
					}
					newNode->SetPrevious(this->it.GetCurrent()->GetPrevious());
					newNode->SetNext(this->it.GetCurrent());
					this->it.GetCurrent()->SetPrevious(newNode);
					this->size++;
					return;
				}
				this->it.Iterate(this->it.GetCurrent()->GetNext());
			}

			this->Last->SetNext(newNode);
			newNode->SetPrevious(this->Last);
			newNode->SetNext(nullptr);
			this->Last = newNode;
			this->size++;
			return;
		}
	};
};
