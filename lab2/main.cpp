#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{

    dynArr d2(5);

    int input;

    for(int i =0;i <5;i++){ //setting the value
        cin>>input;
        d2.setValue(i,input);
    }

    for(int i=0;i<5;i++){ //getting the value and print it
        cout<< d2.getValue(i)<<" ";
    }
    return 0;
}
