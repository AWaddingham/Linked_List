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
		std::cout << "Travering List" << std::endl;;
		// Initialise nodeptr to head of list
		nodePtr = head;
	     	
			std::cout << "Node Value: " << nodePtr->value << "." << std::endl;
		// Find the last node in the list
		while(nodePtr->next)
		{
			nodePtr = nodePtr->next;
			std::cout << "Node Value: " << nodePtr->value << "." << std::endl;
		}

		// Insert newNode as the last node
		nodePtr->next = newNode;
		std::cout << "Node Value: " << newNode->value << "." << std::endl;
	}
}
