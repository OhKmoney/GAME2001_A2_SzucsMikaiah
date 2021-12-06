#pragma once
#include <iostream>

using namespace std;

template <class T>
class Iterator {
private:
	T* Current;
	int pos;
public:
	Iterator() {
		Current = nullptr;
		pos = 0;
	};
	T* GetCurrent() {
		return Current;
	};
	void SetCurrent(T* newCurrent) {
		Current = newCurrent;
	};
	int GetPosition() {
		return pos;
	};
	void SetPosition(int newPos) {
		pos = newPos;
	};
	void Iterate(T* newNode) {
		Current = newNode;
		pos++;
	};
	void IterateBack(T* newNode) {
		Current = newNode;
		pos--;
	};
	~Iterator() {};
};
