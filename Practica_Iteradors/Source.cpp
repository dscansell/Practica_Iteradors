#include "vector.h"
#include "deque.h"
#include "list.h"
#include <conio.h>

int main() {
	std::vector<int> myVector{ 1,2,3,4,5 };
	std::deque<int> myDeque{ 1,2,3,4,5 };
	std::list<int> myList{ 1,2,3,4,5 };

	vectorIT vec;
	dequeIT deq;
	listIT lis;

	vec.printVector(myVector);
	deq.printDequeForward(myDeque);
	deq.printDequeBackward(myDeque);
	lis.printListForward(myList);
	lis.printListBackward(myList);

	_getch();
}