#pragma once
#include <iostream>

using namespace std;

template <class T>
class Node {

private:
	T Data;
	int Priority;
	Node* Next;
	Node* Previous;
public:
	Node(T inputData, int inputprio, Node* inputNext) {
		Previous = nullptr;
		Next = inputNext;
		Data = inputData;
		Priority = inputprio;
	};
	Node(T inputData, int inputprio, Node* inputNext, Node* inputPrev) {
		Previous = inputNext;
		Next = nullptr;
		Data = inputData;
		Priority = inputprio;
	};
	Node(T inputData, int inputPrio) {
		Previous = nullptr;
		Next = nullptr;
		Data = inputData;
		Priority = inputPrio;
	};
	Node(T inputData, Node* inputNext) {
		Data = inputData;
		Previous = nullptr;
		Next = inputNext;
		Priority = 0;
	};
	Node(T inputData, Node* inputNext, Node* inputPrev) {
		Data = inputData;
		Previous = inputPrev;
		Next = inputNext;
		Priority = 0;
	};

	Node(T inputData) {
		Data = inputData;
		Previous = nullptr;
		Next = nullptr;
		Priority = 0;
	}

	T GetData() {
		return Data;
	};
	int GetPriority() {
		return Priority;
	};
	Node* GetNext() {
		return Next;
	};
	Node* GetPrevious() {
		return Previous;
	};
	void SetData(T input) {
		Data = input;
	};
	void SetPriority(int input) {
		Priority = input;
	};
	void SetNext(Node* input) {
		Next = input;
	};
	void SetPrevious(Node* input) {
		Previous = input;
	};
	

	~Node() {
		Next = nullptr;
		Previous = nullptr;
	};
};
