#include "Header.h"

ATD::Node* ATD::head = nullptr;


ATD::Node::Node(ATD* data = nullptr, Node* pNext = nullptr)
{
	this->pNext = pNext;
	this->data = data;
}

ATD::ATD()
{
	this->value[0] = 0;
}

ATD::ATD(char * value)
{
	for (size_t i = 0; i < l_char; i++)
	{
		this->value[i] = value[i];
	}
}

ATD::ATD(const ATD& other)
{
	for (size_t i = 0; i < l_char; i++)
	{

		this->value[i] = other.value[i];
	}
}

ATD::~ATD()
{

}

void ATD::Set(char * value)
{
	for (size_t i = 0; i < l_char; i++)
	{
		this->value[i] = value[i];
	}
}

const char* ATD::Get()
{
	return value;
}

void ATD::add(ATD* data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
}

void ATD::Show()
{
	if (head == nullptr)
	{
		cout << "---------------------------------------------\n";
		cout << "В списку відсутні елементи!!!" << '\n';
		cout << "---------------------------------------------\n";
	}
	else
	{
		Node* temp = head;

		while (head != nullptr)
		{
			cout << "---------------------------------------------\n";
			cout << "Імя: " << head->data->Get() << '\n';
			head = head->pNext;
		}
		head = temp;
		cout << "---------------------------------------------\n";
	}
}

void ATD::Clear()
{
	Node* temp = head;

	while (head != nullptr)
	{
		Node* temp = head;
		head = head->pNext;
		delete temp;
	}
}

bool ATD::operator==(const ATD& other)
{
	string a, b;
	a = this->value;
	b = other.value;
	return a == b;
		
}

void ATD::operator-(ATD& other)
{
	Node* temp = head;

	head = head->pNext;

	delete temp;
}

void ATD::operator+(ATD& other)
{
	head = new Node(&other, head);
}