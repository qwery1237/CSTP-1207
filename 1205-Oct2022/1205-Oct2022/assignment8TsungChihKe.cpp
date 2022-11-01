#include <iostream>
#include<list>
#include "Node.h"

using namespace std;

void PrintList(list<int> &nums) {
	for (auto n : nums) {
		cout << n << endl;
	}
}

void PrintNodeList(Node* node) {
	while (node != NULL)
	{
		cout << node->Data << " ";
		node = node->Next;
	}
}