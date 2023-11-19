#pragma once
#include <iostream>
#include <string>

class SmartArray
{
private:
	int* smartArray_ = 0;
	int countForPushBack_ = 0;
	int sizeOfArr_ = 0;
public:
	SmartArray(const int sizeOfArray);
	~SmartArray();

	SmartArray(const SmartArray&) = delete;
	SmartArray& operator=(const SmartArray&) = delete;

	void smartArrayPrint();
	void smartArrayPushBack(const int addingElement);
	int smartArrayGetElement(const int gettingElementByIndex);

};