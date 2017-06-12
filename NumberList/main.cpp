#include "NumberList.h"

int main()
{
	NumberList numberList;
        numberList.appendNode(2);
        numberList.appendNode(1);
        numberList.appendNode(7);
        numberList.appendNode(87.37);

	numberList.displayList();

	return 0;
}
