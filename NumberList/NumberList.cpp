#include "NumberList.h"
#include <iostream>

NumberList::~NumberList()
{
}

void NumberList::appendNode(double num)
{
	ListNode* newNode = nullptr; // To point to a new node
	ListNode* nodePtr = nullptr; // To move through list

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

void NumberList::insertNode(double num)
{
	ListNode* newNode;	// A new Node
	ListNode* nodePtr;	// To traverse the list
	ListNode* previousNode = nullptr;	// The previous node

	// Allocate new node and store number there
	newNode = new ListNode();
	newNode->value = num;

	// If there are no nodes in the list
	// make newNode the first node
	if(!head)
	{
		head = newNode;
		head->next = nullptr;
	}
	// Else insert the new node
	else
	{
		// Position newNode at the head of the list
		nodePtr = head;
	
		// Initialise previousNode to null
		previousNode = nullptr;

		// Skip all nodes where value is less then num
		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr= nodePtr->next;
		}

		// If the new node is to be the 1st in the list
		// inset it before all other nodes
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		// else insert after new node
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::displayList() const
{
	ListNode* nodePtr = nullptr;	// To move through list

	// Position nodePtr at the head of the list.
	nodePtr = head;

	// While nodePtr points to a node, traverse the list
	while (nodePtr != nullptr)
	{
		// Display the value in this node.
		std::cout << nodePtr->value << std::endl;
	
		// Move to the next node.
		nodePtr = nodePtr->next;
	}
	
	if(head == nullptr)
	{
		std::cout << "No nodes in list." << std::endl;
	}
}

// ToDo: Convet this to a selection sort algorithm 
/*
void NumberList::sortList() const
{
	ListNode* previousNode = head;		// The last node in the list
	ListNode* currentNode = head->next;	// The current node of interest
	ListNode* tempNode = nullptr;		// Node to store temporary list item

	while(currentNode != nullptr)
	{
		std::cout << "Previous Node: " << previousNode->value << std::endl;
		std::cout << "Current Node: " << currentNode->value << std::endl;
		if(previousNode->value > currentNode->value)
		{
			tempNode = previousNode;
			currentNode = previousNode;
			currentNode = tempNode;
		}
		previousNode = currentNode;
		currentNode = currentNode->next;
	}
	displayList();
}
*/

void NumberList::deleteNode(double num)
{
	ListNode* nodePtr = nullptr;		// To traverse the list
	ListNode* previousNode = nullptr;	// To point to the previous node

	// If the list is empty do nothing
	if (!head)
	{
		return;
	}

	// Determine if the first node is the one
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;	
		head = nodePtr;
	}
	else
	{
		// Initialise nodeptr to head of list
		nodePtr = head;

		// Skip all node whose value member is not equal 
		// to num
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the ned of the list,
		// link the previous node to the node after
		// nodePtr, then delete nodePtr
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}
