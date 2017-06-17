// Specification file for tje NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H


class NumberList{

private:
	// Declare a structure for the list
	struct ListNode
	{
		double value;		// The value in this node
		struct ListNode* next;	// To point to the next node
	};

	ListNode* head;

public:
	// Constructor
	NumberList():head(nullptr)
	{
	}

	// Destructor
	~NumberList();

	// Linked List Operations
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
	void sortList() const;
};

#endif
