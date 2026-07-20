#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class Node {
public:
	Node* next;
	int data;
	Node(int d, Node* p = nullptr) :data(d), next(p) {};
};

class LinkList {
private:
	Node* head;
	Node* tail;
	int count;

public:
	LinkList() :head(nullptr), tail(nullptr),count(0)
	{
	}
	~LinkList() {
		clear();
	}

	void clear() {
		while (head != nullptr) {
			Node* p = head;
			head = head->next;
			delete p;
		}

		count = 0;
		tail = nullptr;

	}

	void pushback(int x) {
		Node* p = new Node(x);
		if (head == nullptr) {
			head = tail = p;
		}
		else {
			tail->next = p;
			tail = p;
		}
		count++;
	}

	void pushhead(int x) {
		Node* p = new Node(x);
		if (head == nullptr) {
			head = tail = p;
		}
		else {
			p->next = head;
			head = p;
		}
		count++;
	}

	void createByTail(int n) {
		clear();
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			pushback(x);
		}
	}

	void createByHead(int n) {
		clear();
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			pushhead(x);
		}
	}

	bool empty() const{
		return count == 0;
	}

	int size() const{
		return count;
	}

	void show() {
		for (Node* p = head; p != nullptr; p = p->next) {
			cout << p->data << " ";
		}
		cout << endl;
	}

	

};


A(int aa):a(aa)

A *p = new A(5)
p->getValue()


A(char* s)
{
	char* a = new[strlen(s) + 1];
	strcpy(a, s);
	cout << a << endl;
}

new char[strlen(aa) + 1]

~A() { delete[] a; }


1.
this->weight = w

1.
cout << ID << " " << color << " " << w << endl;

cars = new Car[n]

delete[] cars

numberOfCar >= MAX

cars[numberOfCar].set(ID,w,c)
numberOfCar++

cout << 


pk.view()
