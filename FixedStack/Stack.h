#pragma once
class Stack
{
public:
	Stack();

	bool push(int newItem);
	int pop();
	int peek() const;

	bool isEmpty() const;
	bool isFull() const;

private:
	static const int CAPACITY = 10;
	int data[CAPACITY];
	int top;
};
