#include "Source.h"
using namespace std;

SmartArray::SmartArray(const int sizeOfArray){
	sizeOfArr_ = sizeOfArray;

	cout << this << " - SmartArray::SmartArray(int SizeOfArray)";
	smartArray_ = new int[sizeOfArray] {};

	for (int i = 0; i < sizeOfArray; i++){
		smartArray_[i] = i;
	}
	cout << endl;
};

SmartArray::~SmartArray(){
	delete[] smartArray_;
	cout << this << " - SmartArray::~SmartArray()\n";
};

void SmartArray::smartArrayPrint(){
	for (int i = 0; i < sizeOfArr_; i++)
		cout << smartArray_[i] << " ";

	cout << endl;
};

void SmartArray::smartArrayPushBack(const int addingElement){
	if (countForPushBack_ >= sizeOfArr_){
		throw out_of_range("PushBack - Out_of_range");
	}
	else{
		smartArray_[countForPushBack_] = addingElement;
		++countForPushBack_;
	}
};

int SmartArray::smartArrayGetElement(const int gettingElementByIndex){
	if ((gettingElementByIndex >= sizeOfArr_) || (gettingElementByIndex < 0)){
		throw out_of_range("GetElement - Out_of_range");
	}
	else{
		return smartArray_[gettingElementByIndex];
	}
};