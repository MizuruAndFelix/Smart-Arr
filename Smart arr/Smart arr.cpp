#include <iostream>
#include "Source.h"
using namespace std;

int main(){
    try{
        SmartArray sArr(5);
        sArr.smartArrayPushBack(1);
        sArr.smartArrayPushBack(4);
        sArr.smartArrayPushBack(155);
        sArr.smartArrayPushBack(14);
        sArr.smartArrayPushBack(15);

        sArr.smartArrayPrint();

        cout << endl;
        cout << sArr.smartArrayGetElement(2) << endl;

    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }
}