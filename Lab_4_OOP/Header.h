#pragma once

#include <iostream>
#include <string>

using namespace std;

const int l_char = 100;

class ATD
{
public:
	ATD();

	ATD(char* value);

	ATD(const ATD&);

	~ATD();

	void Set(char* value);

	const char* Get();

	// ������ � ������
	static void add(ATD* data);

	// �������� ������
	static void Show();

	// ������� ������
	static void Clear();

	bool operator == (const ATD& other);

	void operator - (ATD& other);

	void operator + (ATD& other);

	class Node
	{
	public:
		Node(ATD* data, Node* pNext);;
		ATD* data;
		Node* pNext;
	};


protected:
	char value[l_char];

	static Node* head;
};