#include <iostream>
#include "NumberList.h"

int main()
{
	// Define a NumberList object
	NumberList numberList;
	
	// Build the list with some values
        numberList.appendNode(2.5);
        numberList.appendNode(7.9);
        numberList.appendNode(12.60);

	// Display the list
	std::cout << "Here are the initial values: " << std::endl;
	numberList.displayList();
	std::cout << std::endl;

	// Delete the middle node
	std::cout << "Deleting the node in the middle..." << std::endl;
	numberList.deleteNode(7.9);

	// Display the List
	std::cout << "Here are the nodes left." << std::endl;
	numberList.displayList();
	std::cout << std::endl;

	// Delete the last node
	std::cout << "Now deleting the last node..." << std::endl;
	numberList.deleteNode(12.60);

	// Display the List
	std::cout << "Here are the nodes left." << std::endl;
	numberList.displayList();
	std::cout << std::endl;

	// Delete the only node left in the list
	std::cout << "Deleting the final node..." << std::endl;
	numberList.deleteNode(2.5);

	// Display the List
	std::cout << "Here are the nodes left." << std::endl;
	numberList.displayList();

	return 0;
}
