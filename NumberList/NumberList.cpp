#include "NumberList.h"
#include <iostream>

NumberList::~NumberList()
{
}

void NumberList::appendNode(double num)
{
	ListNode* newNode; // To point to a new node
	ListNode* nodePtr; // To move through list

	// Allocatea new node and store the num there
	newNode = new ListNode();
	newNode->value = num;
	newNode->next = nullptr;

	// If there are no nodes in the list make this the node
	if(!head)
	{
		head = newNode;
	}
	// else insert newNode at the end of the list
	else
	{
		// Initialise nodeptr to head of list
		nodePtr = head;
	     	
		// Find the last node in the list
		while(nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}

		// Insert newNode as the last node
		nodePtr->next = newNode;
	}
}

void NumberList::displayList() const
{
	ListNode* nodePtr;	// To move through list

	// Position nodePtr at the head of the list.
	nodePtr = head;

	// While nodePtr points to a node, traverse the list
	while (nodePtr)
	{
		// Display the value in this node.
		std::cout << nodePtr->value << std::endl;
	
		// Move to the next node.
		nodePtr = nodePtr->next;
	}
}
